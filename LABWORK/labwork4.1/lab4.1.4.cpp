#include<iostream>
using namespace::std; 
int main() {
  int a=3, b=5;
  cout << "after swaping a:"<< a << endl;
  cout << "after swaping b:"<< b <<endl;
  a=a+b;
  b=a-b;
  a=a-b;
  cout << "before swaping a:" << a << endl;
  cout << "before swaping b:" << b << endl;

 return 0;
}
