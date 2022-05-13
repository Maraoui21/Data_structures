#include<iostream>
using namespace std;

class element{
public:
    int val;
    element* next;
    element* before;
};

class Queue
{
private:
    element* first;
    element* last;
public:
    void push(int);
    void pop();
    element* getFirst();
    element* getLast();
    Queue();
};

void Queue::push(int data){
    element* newElment = new element;
    newElment->val = data;
    if(this->first==nullptr){
        this->first = newElment;
        this->last = newElment;
    }else{
        newElment->next = this->first;
        newElment->next->before = newElment;
        this->first = newElment;
    }
}

void Queue::pop(){
    element* tmp;
    tmp = this->last->before;
    delete last;
    last = tmp;
}

element* Queue::getFirst(){
    return this->first;
};

element* Queue::getLast(){
    return this->last;
};


Queue::Queue(){
    this->first = nullptr;
};

int main(){

    Queue q1;
    q1.push(12);
    q1.push(22);
    q1.push(52);
    q1.push(223);
    
    q1.pop();

    cout << q1.getFirst()->val<<endl;
    cout << q1.getLast()->val<<endl;


}