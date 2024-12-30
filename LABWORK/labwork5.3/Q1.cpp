#include<iostream>
using namespace std;

int main(){
int a,b,c, min;

cout << "Enter the value of the First Number: ";
cin >> a;

cout << "Enter the value of the Second Number: ";
cin >> b;

cout << "Enter the value of the Third Number: ";
cin >> c;

min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
   cout << "minimum Number is :" << min;

}