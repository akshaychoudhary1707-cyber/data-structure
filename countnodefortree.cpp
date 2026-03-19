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

int countnode(node* t) {
    if(t==NULL) {
        return 0;
    }
    else {
        return 1+countnode(t->left)+countnode(t->right);
    }
}

int countleaf(node* t) {
    if(t==NULL) {
        return 0;
    }
    else {
        if(t->left==NULL && t->right==NULL) {
            return 1;
        }
        else {
            return countleaf(t->left) + countleaf(t->right);
        }
    }
}

int countnodeN2(node* t) {
    if(t==NULL) {
        return 0;
    }
    else {
        if(t->left==NULL && t->right==NULL) {
            return 0;
        }
        else {
            if (t->left!=NULL && t->right!=NULL) {
                return 1+countnodeN2(t->left) + countnodeN2(t->right);
            }
            else {
                return countnodeN2(t->left) + countnodeN2(t->right);
            }
        }
    }
}

int countnodeN1(node* t) {
    if(t==NULL) {
        return 0;
    }
    else {
        if(t->left==NULL && t->right==NULL) {
            return 0;
        }
        else {
            if (t->left!=NULL && t->right!=NULL) {
                return countnodeN1(t->left) + countnodeN1(t->right);
            }
            else {
                return 1+countnodeN1(t->left) + countnodeN1(t->right);
            }
        }
    }
}


int main() {
    struct node* t;
    int ans1,ans2,ans3,ans4;
    cout<<"enter the data of root tree "<<endl;
    int x;
    cin>>x;
    t=makenode(x);
    createtree(&t);
    ans1=countnode(t);
    cout << "The number of nodes in the given tree is "<< ans1 << endl;
    ans2=countleaf(t);
    cout << "The number of leaves in the given tree is " << ans2 << endl;
    ans3=countnodeN2(t);
    cout << "The number of nodes having two child in the given tree is " << ans3 << endl;
    ans4=countnodeN1(t);
    cout << "The number of nodes having only one child in the given tree is " << ans4 << endl;
}
