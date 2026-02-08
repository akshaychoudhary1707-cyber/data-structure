#include<iostream>
using namespace std;

int stacksize = 2;
struct stk {
    int Item[2];
    int top;
};

struct stk s;

void initialize() {
    s.top=-1;
}

int isempty() {
    if (s.top==-1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(int x) {
    if (s.top==(stacksize-1)) {
        cout << "Stack is full" << endl;
        exit(1);
    }
    else {
        s.top=s.top+1;
        s.Item[s.top]=x;
    }
}

int pop() {
    if (isempty()) {
        cout << "Stack is empty" << endl;
        exit(1);
    }
    else {
        int x=s.Item[s.top];
        s.top=s.top-1;
        return x;
    }
}

int stacktop() {
    return s.Item[s.top];
}

int main() {
    initialize();
    push(50);
    push(100);
    cout  << pop() << endl;
    cout << stacktop();
    return 0;
}