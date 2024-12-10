#include<iostream>
using namespace std;
int main(){
     int n, factorial = 1, i;

     cout << "Enter Any Number :";
     cin >> n;

      for (i = 1; i <= n; i++) {
        factorial = factorial*i;
    }
	cout << factorial;

    return 0;
}