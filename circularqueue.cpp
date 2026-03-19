#include<iostream>
using namespace std;

int MAXQUEUE = 10;

struct CQueue {
    int FRONT;
    int REAR;
    char item[10];
};
CQueue CQ;

void Initialize() {
    CQ.REAR=MAXQUEUE-1;
    CQ.FRONT=MAXQUEUE-1;
}

bool IsEmpty() {
    if(CQ.FRONT==CQ.REAR) {
        return true;
    }
    else {
        return false;
    }
}

void enqueue(char x) {
    if ((CQ.REAR)%MAXQUEUE == CQ.FRONT) {
        cout << "Queue is full" << endl;
    }
    else {
        CQ.REAR=(CQ.REAR+1)%MAXQUEUE;
        CQ.item[CQ.REAR]=x;
    }
}

