#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int id;
    string name;
    int age;
    string course;
    float per;

    void setData(int id, string name, int age, string course, float per)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->course = course;
        this->per = per;
    }
    void getData()
    {
        cout << " Id:" << this->id
             << " ,Name:" << this->name
             << " ,Age:" << this->age
             << " ,Course:" << this->course
             << " ,pre:" << this->per;
    }
};
int main()
{
    Student std1;
    std1.setData(7569, "komal", 22, "full", 80);
    std1.getData();

    return 0;
}