#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int element;
    cout << "Enter the element whose Tribbonacci number you wants to know: ";
    cin >> element;
    int t0=1;
    int t1=1;
    int t2=1;
    int t3=0;
    for(int i=3;i<=element;i++){
        t3=t0+t1+t2;
        int temp1=t1;
        int temp2=t2;
        t0=temp1;
        t1=temp2;
        t2=t3;
    }
    cout << t3;
}
