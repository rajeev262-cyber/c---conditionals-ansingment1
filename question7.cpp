#include<iostream>
using namespace std ;
int main ()
{
    int  x;
    cout << "enter the x- coordinate ";
    cin >> x;
    int y ;
    cout << "enter the y coordinate ";
    cin >> y;
    if ((x==0)&&(y==0))
    {
        cout << "point lies on origion ";
    }
    else if ((x!=0)&&(y!=0)){
        cout << "lies in space ";
    }
    else if (x==0){
        cout << "point lies on y-axis  ";
    }
    else cout << "lies on x-axis ";
    return 0;
}