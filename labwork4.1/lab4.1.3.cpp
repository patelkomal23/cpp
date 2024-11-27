#include<iostream>
using namespace::std; 
int main() {
  int x,y,equal;
   cout << "Value of X: " << endl;
   cin >> x;

   cout << "Value of Y: " << endl;
   cin >> y;
    
   equal= x*x*x+y*y*y+3*x*x*y+3*x*y*y;
   cout << "(x + y)^3 = " << equal << endl;
   
   return 0;
}
