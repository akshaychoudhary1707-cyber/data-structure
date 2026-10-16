#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number or elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<n; i++) {
        if (arr[i] == 0) {
            int temp = arr[i];
            for (int j=i; j<n; j++) {
               arr[j] = arr[j+1];
            }
            arr[n-1] = temp;
        }
        i = i-1;
    }
    cout << "The array after rearranging all the 0 at the end of the array: ";
    for (int i=0; i<n;i++) {
        cout << arr[i] << " ";
    }
}