#include<iostream>
using namespace std;

int main(){
int sub1, sub2, sub3, total;
float avg;
char grade;

cout << "Enter Your Marks of First Subject:" << endl;
cin >> sub1;

cout << "Enter Your Marks of Second Subject:" << endl;
cin >> sub2;

cout << "Enter Your Marks of Third Subject:" << endl;
cin >> sub3;

total = sub1 + sub2 + sub3;
cout << "Total is :" << total <<endl; 

avg = total/3;
cout << "Average is :" << avg << endl;

if(avg>90){
		cout << "you have secured A grade" ;
	}
	else if((avg>80) && (avg<90))
	{
		cout << "you have secured B grade" ;	
	}
	else if((avg>70) && (avg<80))
	{
		cout << "you have secured C grade" ;	
	}	
	else if((avg>60) && (avg<70))
	{
		cout << "you have secured D grade" ;	
	}	
	else{
		cout << "you are failed";
	}	


} 