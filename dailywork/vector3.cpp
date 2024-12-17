#include <iostream>
#include <vector>
using namespace std;

class Collection{
vector<int> v;
    public:
    void addElement(int element){
        v.push_back(element);
        cout << "Element Added Successfully!!!" <<endl;

    }
    void updateElement(int index, int element){
        if(index>=0 && index<v.size()){
            v[index]=element;
            cout << "Element updated Successfully!!!" << endl;
        }
        else{
            cout << "Error!!!" << endl;
        }
    }
    void deleteElement(int index){
        if(index>=0 && index <v.size()){
            
        }
    }
    void getAllElement(){

    }
};
















int main()
{
    int choice;
  
    do
    {
        cout << "Press 1 for add an element" << endl;
        cout << "Press 2 for update an element" << endl;
        cout << "Press 3 for delete an element" << endl;
        cout << "Press 4 for view an element" << endl;
        cout << "Press 5 for exit...." << endl;

    } while (choice != 0);
    switch (choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;

    default:
        break;
    }
}