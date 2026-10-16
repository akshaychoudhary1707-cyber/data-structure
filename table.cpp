#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number whose table you wants to print: ";
    cin >> n;
    for (int i=1;i<=10;i++) {
        cout << n << "X" << i << "=" << n*i << endl;
    }
}