#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int low,int mid,int high) {
    vector<int> c(high-low+1);
    int i = low;
    int j = mid+1;
    int k = low;
    while (i<=mid && j<=high) {
        if (arr[i]<arr[j]) {
            c[k] = arr[i];
            i++;
            k++;
        }
        else {
            c[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i<=mid) {
        c[k] = arr[i];
        i++;
        k++;
    }
    while (j<=high) {
        c[k] = arr[j];
        j++;
        k++;
    }
    for (int i=low;i<=high;i++) {
        arr[i] = c[i];
    }
}

void mergeSort(int arr[],int low,int high) {
    if (low<high) {
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    mergeSort(arr,0,n-1);
    cout << "The sorted array is: ";
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}