#include<iostream>
using namespace std ;
int main ()
{
    int a ;
    cout << "enter the first side ";
    cin >> a;
    int b; 
    cout << "enter the 2nd side ";
    cin >> b ;
    int c ;
    cout << "enter the 3rd side ";
    cin >> c;
  if ((a==b)&&(b==c))
        {
            cout<< "these are sides of equilateral triangle ";
        }
    else {
        if (a==b || b==c || c==a ){
            cout << "these are sides of isosecels of triange ";
        }
        
        else cout << "thse are sides of scalen triangle ";
    }
    return 0;
}