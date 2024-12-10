#include<iostream>
#include<string>
using namespace std;
 class Student{
    public:
    int id;
    string name;
    int age;
    string course;
    float per;

 };

int main(){
Student std1,std2;

//std1
std1.id = 7569;
cout <<"Id: " << std1.id <<endl;

std1.name = "komal";
cout<< "Name: "<<std1.name << endl;

std1.age = 22;
cout << "Age: "<<std1.age <<endl;

std1.course = "Full Stack Dev.";
cout <<"Course: "<<std1.course <<endl;

std1.per = 50;
cout <<"per: "<<std1.per <<endl;

//std2
cout<<"==========================="<<endl;
std2.id = 7570;
cout <<"Id: " << std2.id <<endl;

std2.name = "kuku";
cout<< "Name: "<<std2.name << endl;

std2.age = 23;
cout << "Age: "<<std2.age <<endl;

std2.course = "web dev.";
cout <<"Course: "<<std2.course <<endl;

std2.per = 90;
cout <<"per: "<<std1.per <<endl;
return 0;
}