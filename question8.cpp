#include<iostream>
using namespace std ;
int main ()
{
    int x1;
    cout << "enter the  x-coordinate of point 1 ";
    cin >> x1;
    int y1;
    cout << "enter the y-coordinate of point 1 ";
    cin >> y1 ;
    int x2;
    cout << "enter the  x-coordinate of point 2 ";
    cin >> x2;
    int y2;
    cout << "enter the y-coordinate of point 2 ";
    cin >> y2 ;
    int x3;
    cout << "enter the  x-coordinate of point 3 ";
    cin >> x3;
    int y3;
    cout << "enter the y-coordinate of point 3 ";
    cin >> y3 ;
    int m1 = (y2 - y1)/ (x2 -x1);
    int m2 = (y3 - y2 )/(x3 - x2);
    if (m1==m2){
        cout << "points lies on a straight line ";
    }
    else cout << "points do not lies on a straight line ";
    return 0;
}