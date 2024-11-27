#include<iostream>
using namespace std;
int main(){
 int a;

 cout << "Enter the value of a" << endl;
 cin >> a;

if(a>0){
    cout << "Positive Number is :" << a << endl;
}
else if(a<0){
    cout << "Negative Number is :" << a << endl;
}
else{
    cout << "Neutal Number is :" << a << endl;
}
}