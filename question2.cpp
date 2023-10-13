#include<iostream>
using namespace std ;
int main ()
{
    float r , pi = 3.14 ;
    cout << "enter the radius ";
    cin >> r ;
    float cir,area ;
    cir = 2*pi*r ;
    area = pi *r*r ;
    if (cir > area ) cout << cir << " circumference is greater " ;
    else cout << area << " area is greater ";
    return 0 ;
}