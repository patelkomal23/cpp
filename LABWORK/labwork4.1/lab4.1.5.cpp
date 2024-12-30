#include<iostream>
using namespace::std; 
int main() {
  int a=3, b=5, temp;
  cout << "after swaping a:"<< a << endl;
  cout << "after swaping b:"<< b <<endl;
  temp=a;
	a=b;
	b=temp;
  cout << "before swaping a:" << a << endl;
  cout << "before swaping b:" << b << endl;

   return 0;
}
