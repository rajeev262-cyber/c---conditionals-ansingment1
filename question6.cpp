#include<iostream>
using namespace std ;
int main ()
{
    int x;
    cout << "enter the marks of  1st student ";
    cin>> x;
    int y;
    cout << "enter the marks  of 2nd student  ";
    cin >> y;
    int z;
    cout << "enter the marks of  3rd student ";
    cin >> z;
    if (x>y && y>z){
        cout << z << " 3rd student has the lowest marks ";
    }
    else if (y>x && z>x){
        cout << x << " 1st student  has the lowest marks ";
    }
    else cout << y << " 2nd student has the lowest marks ";
    return 0 ;
}