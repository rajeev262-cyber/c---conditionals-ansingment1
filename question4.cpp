#include <iostream>
using namespace std ;
int main ()
{
    int l ,b ;
    cout << "enter the length " ;
    cin >> l ;
    cout << "enter the breadth ";
    cin >> b ;
    int peri ,area ;
    peri = 2*(l+b) ;
    area = l*b;
    if (area > peri ){
        cout << area << " area is greater than perimeter ";
    }
    else cout << peri << " perimeter is greater the area ";
    return 0 ;

}