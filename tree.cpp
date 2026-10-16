#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node *makenode(int x)
{
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void createtree(node **p)
{
    struct node *t;
    cout<<"does the left child of"<<(*p)->data<<"exist? (1/0)"<<endl;
    int choice;
    cin>>choice;
    if(choice==1)
    {
        int x;
        cout<<"enter the data of left child of"<<(*p)->data<<endl;
        cin>>x;
        t=makenode(x);
        (*p)->left=t;
        createtree(&t);
    }
    cout<<"does the right child of"<<(*p)->data<<"exist? (1/0)"<<endl;
    cin>>choice;
    if(choice==1)
    {
        int x;
        cout<<"enter the data of right child of"<<(*p)->data<<endl;
        cin>>x;
        t=makenode(x);
        (*p)->right=t;
        createtree(&t);
    }
}

void preorder(struct node* t)
{
    if(t!=NULL)
    {
        cout<<t->data;
        preorder(t->left);
        preorder(t->right);
    }
}
void inorder(struct node* t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        cout<<t->data;
        inorder(t->right);
    }
}
void postorder(struct node* t)
{
    if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        cout<<t->data;
    }
}
int main()
{
    struct node* t;
    cout<<"enter the data of root tree"<<endl;
    int x;
    cin>>x;
    t=makenode(x);
    createtree(&t);
    cout<<"Post order"<<endl;
    postorder(t);
    cout<<"\nIn order"<<endl;
    inorder(t);
    cout<<"\nPre order"<<endl;
    preorder(t);
}
