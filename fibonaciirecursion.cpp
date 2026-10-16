#include<iostream>
using namespace std;

int fib(int n) {
    if (n==1) {
        return 0;
    }
    else if (n==2) {
        return 1;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
}

int main() {
    int n,x;
    cout << "enter the term whose value you want to find from fibonacii series:- ";
    cin >> n;
    x=fib(n);
    cout << "Ans:- " << x <<endl;
}