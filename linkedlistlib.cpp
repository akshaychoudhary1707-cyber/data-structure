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

int main(){
  struct Node *start;
  start=NULL;
  insertBegining(&start,'a');
  insertBegining(&start,'b');
  insertBegining(&start,'c');
  insertBegining(&start,'d');
  insertBegining(&start,'e');
  insertBegining(&start,'f');
   traverse(start);
   cout<<endl;
  Node *p=start;
  while(p!=NULL){

    if(p->info=='b'){
      insertAfter(p,'z');
    }
    p=p->next;
  }
  traverse(start);
  cout<<endl;

  // deleteBegining(&start);
  // traverse(start);
  Node *q=start;
   while(q!=NULL){

    if(q->info=='b'){
      deleteAfter(&q);
    }
    q=q->next;
  }
  traverse(start);
  cout<<endl;

  deleteBegining(&start);
  traverse(start);
  return 0;
}