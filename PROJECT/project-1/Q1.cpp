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

// ternary operator

if(total <300){
 grade = avg >= 90 ? 'A' : avg >=80 ? 'B' : avg >=70 ? 'C' : avg >=60 ? 'D' : 'F';

 cout << "Your garde is " << grade;
}


    // switch case

    switch(grade){
        case 'A' : cout << ".Excellent work!" ;
        break;
        case 'B' : cout << ".Well done!";
        break;
        case 'C' : cout << ".Good Job" ;
        break;
        case 'D' : cout << ".You are passed, but you could do better." ;
        break;
        default : cout << ".You have failed the examination" ;
    }
    
    // Eligiblity criteria 

    if((grade == 'A') || (grade == 'B') || (grade == 'C') || (grade == 'D')){
        cout << "Congratulations! You are eligible for the next level" << endl;
    }
    else{
        cout << "Plese try again next time" ;
    }
}

