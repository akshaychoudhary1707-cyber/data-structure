#include<iostream>
using namespace std;

int BinarySearch(int A[],int low,int high,int key) {
    while(low<=high) {
        int mid = low + (high-low)/2;
        if(key==A[mid]) {
            return mid;
        }
        else if(key<A[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}



int main() {
    int n;
    int ans;
    cout << "Enter the number of elements: ";
    cin >> n;
    int low=0,high=n-1;
    int A[n];
    cout << "Enter the elements in array: ";
    for(int i=0;i<n;i++) {
        cin >> A[i];
    }
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;
    if(ans==-1) {
        cout << "Element not found";
    }
    else {
        cout << "Element found";
    }
}