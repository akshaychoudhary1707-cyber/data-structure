#include<iostream>
using namespace std;

int power(int a,int n) {
    if (n==0){
        return 1;
    }
    else {
        int x=power(a,n/2);
        if(n%2==0) {
            return x*x;
        }
        else {
            return a*x*x;
        }
    }
}
int main() {
    int a,n,x;
    cout << "enter the number whose power you wants to find:- ";
    cin >> a;
    cout << "enter the power you wants to find for the entered number:- ";
    cin >> n;
    x=power(a,n);
    cout << "on raising " << a << " to the power " << n << " the output is " << x << endl;
}