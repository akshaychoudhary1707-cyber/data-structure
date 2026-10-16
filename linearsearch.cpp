#include<iostream>
using namespace std;

int linearsearch(int A[],int n,int key) {
    for (int i=0;i<n;i++) {
        if (A[i]==key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    int ans;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[n];
    cout << "Enter the elements in array: ";
    for(int i=0;i<n;i++) {
        cin >> A[i];
    }
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;
    ans=linearsearch(A,n,key);
    if(ans==-1) {
        cout << "Element not found";
    }
    else {
        cout << "Element found at index " << ans;
    }
}