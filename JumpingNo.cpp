#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int range;
    cout << "Enter the range in which you wants to find the jumping number: ";
    cin >> range;
    for (int i=0;i<=range;i++) {
        int a=0;
        int ans=1;
        int temp=i;
        string s = to_string(i);
        int l=s.length();
        if (l==1){
            cout << i << " ";
        }
        else{
            while(l>1){
                int r=temp%10;
                temp=temp/10;
                int r2=temp%10;
                l--;
                if(r-r2==1 || r2-r==1){
                    ans=1;
                }
                else{
                    ans=0;
                    break;
                }
            }
            if(ans==1){
                cout << i << " ";
            }
        }
    }
}