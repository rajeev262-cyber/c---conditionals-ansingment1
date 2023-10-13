#include<iostream>
using namespace std ;
int main ()
{
    int x ;
    cout << "enter the year ";
    cin >> x;
    if (x%4==0)
    {
        cout << "this is a leap year ";
    }
    else cout << "this is not a leap year ";
    return 0 ;
}