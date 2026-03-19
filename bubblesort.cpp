#include<iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int n) {
    int flag=1;
    if (flag==1) {
        for(int i=0;i<n-1;i++){
            flag=0;
            for(int j=0;j<n-i-1;j++) {
                if(arr[j]>arr[j+1]) {
                    swap(arr[j],arr[j+1]);
                    flag=1;
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in array: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    bubblesort(arr, n);
    cout << "Sorted array: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}