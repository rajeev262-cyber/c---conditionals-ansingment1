#include<iostream>
using namespace std ;
int main ()
{
    char x;
    cout << "enter the character ";
    cin >> x;
    int y = (int)x;
    if (((y>=65)&&(y<=90)) || ((y>=97)&&(y<=122))){
        cout << "chaarcter is alphabet ";
    }
    else if ((y>=48)&&(y<=57)){
        cout<< "character is digit ";
    }
    else if ((y>=35)&&(y<=47)){
        cout << "charcter is a special character ";
    }
    return 0;
}