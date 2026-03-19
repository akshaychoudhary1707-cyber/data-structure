#include<iostream>
using namespace std;

int* CountingSort(int arr[], int n) {
    int c[9+1]={0};
    static int b[1000];
    for (int i=0;i<n;i++) {
        c[arr[i]]=c[arr[i]]+1;
    }
    for (int i=0;i<=9;i++) {
        c[i]=c[i]+c[i-1];
    }
    for (int j=n-1;j>=0;j--) {
        b[c[arr[j]]-1]=arr[j];
        c[arr[j]]=c[arr[j]]-1;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << "The array before sorting is ";
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    int* result = CountingSort(arr, n);
    cout << endl;
    cout << "The array after sorting is ";
    for (int i=0;i<n;i++) cout << result[i] << " ";
}
