#include<iostream>
using namespace std;

int main(){
    int size,i;
    cout<<"Enter array size : ";
    cin>>size;
    int array1[size];
    int array2[size];
    int array3[size];

    cout<<"Enter array A element : "<<endl;
    for(i=0;i<size;i++){
        cout<<"ar1["<<i<<"] = ";
        cin>>array1[i];
    }

    cout<<"Enter array B element : "<<endl;
     for(i=0;i<size;i++){
        cout<<"ar2["<<i<<"] = ";
        cin>>array2[i];
    }

    for(i=0;i<size;i++){
       array3[i]=array1[i]+array2[i];
    }

    cout<<"Array C is : ";
    for(int r : array3){
        cout<<r<<" ";
    }


}