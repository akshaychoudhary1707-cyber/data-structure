#include<iostream>
using namespace std;

int main() {
    int n,pos,x;
    cout << "Enter the size of array: " ;
    cin >> n;
    cout << "\n";
    int arr[100];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to be inserted: ";
    cin >> x;
    cout << "\n";
    cout << "Enter the position: ";
    cin >> pos;
    for(int i=n;i>=pos;i--) {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    n++;
    cout << "Array after insertion is ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "Enter the position to be deleted: ";
    cin >> pos;
    x=arr[pos];
    for (int i=pos-1;i<n;i++) {
        arr[i]=arr[i+1];
    }
    n--;
    return x;
}