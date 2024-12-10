#include<iostream>
using namespace std;

int main(){
  int i,sum,num;
	int f=0;
	int s=1;
	cout << "Enter Any Number :";
    cin >> num  ;
	cout << f << " " << s << " ";
	for(i=0;i<=num;i++){
	sum=f+s;
	cout << sum << " ";
	f=s;
	s=sum;
	}	
}