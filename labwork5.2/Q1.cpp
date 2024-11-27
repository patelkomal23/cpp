#include<iostream>
using namespace std;

int main(){
int a,b,c;

cout << "Enter the value of the First Number: ";
cin >> a;

cout << "Enter the value of the Second Number: ";
cin >> b;

cout << "Enter the value of the Third Number: ";
cin >> c;


if(a<b)
  {
    if(a<c)
    {
     cout << "Minimum Number is " << a << endl;
    }
    else
    {
        cout << "Minimum Number is " << c << endl;
    }
  }
  else
  {
    if(b<c)
    {
     cout << "Minimum Number is " << b << endl;
    }
    else
    {
       cout << "Minimum Number is " << c << endl;
    }
  }

}