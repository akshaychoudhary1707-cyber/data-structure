#include<iostream>
using namespace std;

int MAXQUEUE = 10;

struct Queue{
    char Item[10];
    int FRONT;
    int REAR;
};

Queue Q;

void Initialize() {
    Q.REAR=-1;
    Q.FRONT=0;
}

void insert(int x) {
    if (Q.REAR==MAXQUEUE-1) {
        cout<<"Queue is full"<<endl;
        exit(1);
    }else {
        Q.REAR=Q.REAR+1;
        Q.Item[Q.REAR]=x;
    }
}

bool IsEmpty() {
    if (Q.REAR-Q.FRONT+1==0) {
        return true;
    }
    else {
        return false;
    }
}

int del(){
    if (IsEmpty()) {
        cout<<"Queue is empty"<<endl;
        exit(1);
    }
    else {
        int x=Q.Item[Q.FRONT];
        Q.FRONT=Q.FRONT+1;
        return x;
    }
}


int main() {
    cout << "THIS IS A QUEUE PROGRAM" << endl;;
    Initialize();
    insert('a');
    insert('b');
    insert('c');
    insert('d');
    char x=del();
    cout << "Deleted element is " << x <<endl;
}