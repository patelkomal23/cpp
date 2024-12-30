	//1 0 1 0 1
	//1 0 1 0
	//1 0 1
	//1 0
	//1
#include<iostream>
using namespace std;
int main(){
 int i,j;
	for(i=1; i<=5; i++){
		for(j=5; j>=i; j--){
		if(j%2==1){
			cout<< 1 ;
		}
		else{
			cout<< 0 ;
		}
		}
		cout<< endl;	
	}
}