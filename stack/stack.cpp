#include<iostream>
using namespace std;

class element{
public:
    int val;
    element* next;
};

class stack{
public:
    element* head;
    element* tail;
    int nbrElement;
    void push(int);
    void pop();
    stack();
};


// insert an element to the stack 

void stack::push(int data){
    int n = this->nbrElement;
    
    element* N = new element;
    N->val = data;
    if(this->head==nullptr){
        head = N;
        nbrElement++;
    }
    else{
        N->next = head;
        this->head = N;
        nbrElement++;
        }
}

// delete the first element in stack

void stack::pop(){
    element* tmp;
    tmp = head->next;
    delete head;
    nbrElement--;
    head = tmp;
}



stack::stack():nbrElement(0){
    this->head = nullptr;
}

int main(){

stack s1;

s1.push(12);
s1.push(25);
s1.push(32);
s1.pop();

cout << s1.head->val<<endl;
cout << s1.nbrElement;

}