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


void middleElement1(Node *start){
    Node* t=start;
    Node* r=start->next;
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next;
        r=r->next;
    }
    cout<<"the middle element of linked list is "<<t->info;
}

void middleElement2(Node *start){
    int c=countNodes(start);
    Node *p=start;
    for(int i=1;i<(c/2);i++){
        p=p->next;
    }
    cout<<"the middle element is "<<p->info;
}

void reverse(struct Node* start){
    Node *p,*c,*n;
    p=NULL;
    c=start;
    n=c->next;
    while(c!=NULL){
        p=c;
        c=n;
        if(n!=NULL){
            n=n->next;
        }
    }
    start=p;
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

Node* intersection(Node *start1,Node *start2) {
    Node *p=start1;
    Node *q=start2;
    Node *start3=NULL;
    while(p!=NULL && q!=NULL) {
        if (p->info<q->info) {
            p=p->next;
        }
        else if (p->info>q->info) {
            q=q->next;
        }else {
            insertBegining(&start3,p->info);
            p=p->next;
            q=q->next;
        }
    }
    reverse(start3);
    return start3;
}

int main() {
    struct Node *start1;
    struct Node *start2;
    start1=NULL;
    start2=NULL;
    insertBegining(&start1,'a');
    insertBegining(&start1,'b');
    insertBegining(&start1,'c');
    insertBegining(&start1,'d');
    insertBegining(&start1,'e');
    insertBegining(&start1,'f');
    cout << "First linked list is: " << "\n";
    traverse(start1);
    cout << "\n";
    insertBegining(&start2,'a');
    insertBegining(&start2,'b');
    insertBegining(&start2,'c');
    cout << "Second linked list is: " << "\n";
    traverse(start2);
}