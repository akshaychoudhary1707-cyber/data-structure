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

int height(node *t) {
    if(t==NULL) {
        return 0;
    }
    else {
        if(t->right==NULL && t->left==NULL) {
            return 0;
        }
        else {
            return 1+max(height(t->right),height(t->left));
        }
    }
}

int main() {
    struct node* t;
    int ans;
    cout<<"enter the data of root tree "<<endl;
    int x;
    cin>>x;
    t=makenode(x);
    createtree(&t);
    ans=height(t);
    cout << "Height of tree is "<< ans << endl;
}