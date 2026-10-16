#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int k;
    cout << "Enter the times you wants to concatenate " << n << " into itself: ";
    cin >> k;
    string s = to_string(n);
    string t = " ";
    while (k--) {
        t = t + s;
    }
    if (stoll(t)%9 != 0) {
        cout << stoll(t)%9 << endl;
    }
    else {
        cout << "9" << endl;
    }
}