#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int k;
    cout << "Enter the size of subarray: ";
    cin >> k;
    cout << "Enter the elements: ";
    vector<int> arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int start = 0;
    int sum = 0;
    int maximum = INT_MIN;
    for (int i=0;i<n;i++) {
        sum = sum + arr[i];
        if (i-start+1 > k) {
            sum -= arr[start];
            start++;
        }
        maximum = max(maximum,sum);
    }
    cout << "The maximum sum of subarray of size " << k << " is " << maximum;
}