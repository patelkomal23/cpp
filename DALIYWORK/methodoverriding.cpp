#include<iostream>
using namespace std;

class india{
    public:
    void wearing()
    {
        cout << "Dhoti-Kurta..."<<endl;

    }
};
class pak :public india{
    public:
    void wearing()
    {
        cout<<"Pathani-kurta...."<<endl;
        // india obj;
        // obj.wearing();

        //or

        india::wearing();
        
    }
};

int main(){
    pak aman;
    aman.wearing();
}