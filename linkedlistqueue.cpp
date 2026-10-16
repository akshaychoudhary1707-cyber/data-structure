#include<iostream>
#include<stdlib.h>

using namespace std;
//linked list header file
struct Node{
    char info;
    struct Node *next;
};

Node * getNode(){
    Node *p;
    p=(Node*)malloc(sizeof(struct Node));
    return p;
}

void freeNode(Node *p) {
    free(p);
}

void insertBegining(Node **start,char x){
    Node *p;
    p=getNode();
    p->info=x;
    p->next=*start;
    *start=p;
}

void traverse(Node *start){
    Node *p;
    p=start;
    while(p!=NULL){
        cout<<p->info;
        p=p->next;
    }
}

void insertEnd(Node **start,char x){
    Node *q;
    Node *p;
    q=*start;
    p=getNode();
    p->info=x;
    p->next=NULL;
    while(q->next!=NULL){
        q=q->next;

    }
    q->next=p;
}

void insertAfter(Node *q,char x){
    Node *p=getNode();
    Node *r;
    p->info=x;
    r=q->next;
    q->next=p;
    p->next=r;
}

int countNodes(Node *start) {
    Node* p = start;
    int count = 0;

    while (p != NULL) {
        count++;
        p = p->next;
    }

    return count;
}

int deleteBegining(Node **start){
    Node *p;
    p=*start;
    *start=(*start)->next;
    int x=p->info;
    free(p);
    return x;
}


char deleteAfter(Node **q){
    Node *p;
    Node *r;
    p=(*q)->next;
    r=p->next;
    (*q)->next=r;
    char x=p->info;
    free(p);
    return x;
}

char delEnd(Node **start){
    Node *p=NULL;
    Node *q=(*start);
    while(q!=NULL){
        p=q;
        q=q->next;
    }
    char x=p->info;
    free(p);
    return x;
}

int MAXQUEUE = 10;

struct queue{
    int FRONT;
    int REAR;
    int item[10];
};

queue Q;

Node* FRONT=NULL;
Node* REAR=NULL;

void InitialiseQ() {
    FRONT=NULL;
    REAR=NULL;
}

bool IsEmptyQ() {
    if (Q.FRONT==NULL) {
        return true;
    }else {
        return false;
    }
}

void enqueue(char x) {
    Node *p;
    p=getNode();
    p->info=x;
    p->next=NULL;
    if (REAR != NULL) {
        REAR->next = p;
    }
    else {
        FRONT=p;
    }
    REAR=p;
}

char dequeue() {
    if (Q.FRONT==NULL) {
        cout << "Queue is empty" << endl;
    }
    else {
        Node *p=FRONT;
        FRONT=FRONT->next;
        if (FRONT==NULL) {
            REAR=NULL;
        }
        char x=p->info;
        freeNode(p);
        return x;
    }
}

int main() {
    InitialiseQ();
    enqueue('a');
    enqueue('b');
    enqueue('c');
    cout << "insertion completed" << endl;
    dequeue();
    dequeue();
    dequeue();
}
