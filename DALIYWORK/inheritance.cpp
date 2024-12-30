#include<iostream>
using namespace std;
////////simple
// class Animal{
//     public:
//      void eat()
//      {
//         cout<< "Animal Eating....."<< endl;

//      }
// };

// class Dog : public Animal{
//     public:
//      void bark()
//      {
//         cout<< "barking....."<< endl;

//      }
// };

// int main(){
//  Dog obj;

//  obj.eat();
//  obj.bark();

// }

//multipule

class Engine{
    public:
    char  engine_name[50]=" VB ";
};
class wheels{
    public:
    char  wheels_name[50]=" MRF ";
};


class car : public Engine, public wheels

{
    public:
    void make()
    {
        cout<< "A new car is Preparing with engine of" << this->engine_name<<"and wheels" << this->wheels_name;
    }

};
int main(){
    car obj;

    obj.make();
}



