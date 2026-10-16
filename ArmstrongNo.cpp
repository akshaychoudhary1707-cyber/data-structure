#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int range_start,range_end;
    cout << "Enter the range in which you wants to find the armstrong number: ";
    cin >> range_start;
    cin >> range_end;
    for (int i=range_start;i<=range_end;i++) {
        int a=0;
        int temp=i;
        string s = to_string(i);
        int l=s.length();
        for (int j=0;j<l;j++) {
            int r=temp%10;
            a=a + round(pow(r,l));
            temp=temp/10;
        }
        if (a==i) {
            cout << i << endl;
        }
    }
    return 0;
}