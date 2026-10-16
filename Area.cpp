#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "you wants to find the area of (Square:1 ,Rectangle:2 ,Circle:3 ,Triangle:4 ):- " << endl;
    cin >> x;
    switch (x){
        case 1:
            int a;
            cout << "Enter the length of side of square: " << endl;
            cin >> a;
            cout << "area of sqaure is " << a*a << endl;
            break;
        case 2:
            int l;
            int w;
            cout << "Enter the length of rectangle: " << endl;
            cin >> l;
            cout << "Enter the width of rectangle: " << endl;
            cin >> w;
            cout << "area of rectangle is " << l*w << endl;
            break;
        case 3:
            int r;
            cout << "Enter the radius of circle: " << endl;
            cin >> r;
            cout << "Area of circle is " << 3.14*r*r << endl;
            break;
        case 4:
            int p;
            int q;
            cout << "Enter the height of triangle: " << endl;
            cin >> p;
            cout << "Enter the base of triangle: " << endl;
            cin >> q;
            cout << "Area of triangle is " << 0.5*p*q << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
    }
}