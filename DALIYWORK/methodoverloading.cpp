#include<iostream>
using namespace std;

class vehicle
{
    public:
    void truck()
    {
        cout<<"Empty truck is running...."<<endl;
    }

    void truck(int n){
        cout<<"Truck is running with "<< n << " passengers...." <<endl;

    }
    void truck(int n, int q){
        cout <<"Truck is running with "<< n << " passengers and "<<q<< " gppds..."<<endl;
    }


};

int main(){
    vehicle obj;
    obj.truck();
    obj.truck(10);
    obj.truck(5,20);  
    
}