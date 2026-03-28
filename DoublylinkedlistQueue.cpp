#include<iostream>
using namespace std;

struct node {
    char info;
    struct node *prev,*next;
};

node *Left,*Right;

node *GetNode() {
    node *p;
    p=(node*)malloc(sizeof(struct node));
    return p;
}

void insertleft(char x) {
    node *p;
    p=GetNode();
    p->info=x;
    p->prev=NULL;
    p->next=Left;
    if (Left!=NULL) {
        Left->prev=p;
    }
    else {
        Right=p;
    }
    Left=p;
}

void insertright(char x) {
    node *p;
    p=GetNode();
    p->info=x;
    p->next=NULL;
    p->prev=Right;
    if (Right!=NULL) {
        Right->next=p;
    }
    else {
        Left=p;
    }
    Right=p;
}

void traverse(node **Left) {
    node *temp;
    temp=(*Left);
    while (temp!=NULL) {
        cout << temp->info << " ";
        temp=temp->next;
    }
}



int main() {
    Left=NULL;
    Right=NULL;
    insertleft('a');
    insertleft('b');
    insertleft('c');
    insertright('x');
    insertright('y');
    insertright('z');
    cout << "insertion completed" << endl;
    traverse(&Left);
}