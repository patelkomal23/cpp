#include<iostream>
using namespace std;

class Queue
{
private:
   int *arr;
   int capacity;
   int front;
   int rear;
   int count;

public:
   Queue(int capacity)
   {
    this->capacity = capacity;
    this->arr = new int[this->capacity];
    this->front;
    this->rear;
    this->count;

   }
   
};

int main(){
    Queue queue(5);
    int choice,element;

    do{
        cout << "Press 1 for enqueue operation" << endl;
        cout << "Press 2 for denqueue operation" << endl;
        cout << "Press 3 for front operation" << endl;

    }
}