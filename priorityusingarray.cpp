#include<iostream>
#include<stdlib.h>

using namespace std;

void arrayinsertion(int a[],int n,int pos,int x) {
    for(int i=n-1;i>pos-1;i--) {
        a[i+1]=a[i];
    }
    a[pos]=x;
    n=n+1;
}

int arraydeletion(int a[],int n,int pos) {
    int x=a[pos];
    for (int i=1;i<n;i++) {
        a[i-1]=a[i];
    }
    n=n-1;
    return x;
}

void enqueue(int a[],int n,int x) {
    int i=0;
    while (x>=a[i] && i<n) {
        i=i+1;
    }
    arrayinsertion(a,n,i,x);
}

int dequeue(int a[],int n) {
    int x=a[0];
    arraydeletion(a,n,0);
    return x;
}
int main() {
    int n;
    n=10;
    int x;
    int a[n];
    cout << "Enter 10 elements in the priority queue:- " << endl;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << "Now we will remove the elements from the queue" << endl;
    dequeue(a,n);
    cout << "Now we will insert a element in the queue" << endl;
    cout << "Enter the element you wanna insert:- " << endl;
    cin >> x;
    enqueue(a,n,x);
}


/*#include<iostream>
#include<stdlib.h>

using namespace std;

void arrayinsertion(int a[],int n,int pos,int x) {
for(int i=n-1;i>pos-1;i--) {
a[i+1]=a[i];
}
a[pos]=x;
n=n+1;
}

int arraydeletion(int a[],int n,int pos) {
pos=0;
int x=a[pos];
for (int i=1;i<n;i++) {
a[i-1]=a[i];
}
n=n-1;
return x;
}

void enqueue(int a[],int n,int x) {
int i=0;
while (x<a[i] && i<n) {
i=i+1;
}
arrayinsertion(a,n,i,x);
}

int dequeue(int a[],int n,int pos) {
int x=a[n-1];
n=n-1;
cout << "Deleted element is " << x << endl;
return x;
}
int main() {
int n;
n=10;
int x;
int pos;
int a[n];
cout << "Enter 10 elements in the priority queue decending:- " << endl;
for(int i=0;i<n;i++) {
cin >> a[i];
}
cout << "Now we will remove the elements from the queue" << endl;
dequeue(a,n,pos);
cout << "Now we will insert a element in the queue" << endl;
cout << "Enter the element you wanna insert:- " << endl;
cin >> x;
enqueue(a,n,x);
cout << "Now we will again remove the elements from the queue" << endl;
dequeue(a,n,pos);
}


*/

