#include<iostream>
using namespace::std; 
int main() {
  int x,y,equal;
   cout << "Value of X: " << endl;
   cin >> x;

   cout << "Value of Y: " << endl;
   cin >> y;
    
   equal= x*x-2*x*y-y*y;
   cout << "(x - y)^2 = " << equal << endl;
   
   return 0;
}
