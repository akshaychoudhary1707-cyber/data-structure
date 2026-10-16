#include<iostream>
using namespace std;

void swap(int &a,int &b) {
    int temp=a;
    a=b;
    b=temp;
}

int midpartition(int arr[], int low, int high) {
    int mid=(low+high)/2;
    swap(arr[low],arr[mid]);
    int pivot = arr[low];
    int i=low;
    int j=high+1;
    do {
        do {
            i=i+1;
        }while (arr[i]<pivot);
        do {
            j=j-1;
        }while (arr[j]>pivot);
        if (i<j) {
            swap(arr[i], arr[j]);
        }
    }while (i<j);
    swap(arr[j], arr[low]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int j=midpartition(arr, low, high);
        quickSort(arr, low, j-1);
        quickSort(arr, j+1, high);
    }
}

int main() {
    int arr[10]={70,-4,7,3,0,-12,8,1,20};
    arr[9]=INT_MAX;
    quickSort(arr, 0, 9);
    for (int i=0; i<9; i++) {
        cout<<arr[i]<<" ";
    }
}
