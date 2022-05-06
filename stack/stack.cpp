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
    void size();
    ~stack();
};

void stack::push(int data){
    element* N = new element;
    N->val = data;
    if(this->head==nullptr){
        head = N;
        tail = N;
        nbrElement++;
    }else{
        tail = head;
        N->next = tail;
        this->head = N;
        nbrElement++;
    }
}
void stack::pop(){

}
void stack::size(){
    cout << this->nbrElement;
}


stack::~stack(){
    this->head = nullptr;
}

int main(){

stack s1;
s1.nbrElement = 0;
s1.push(22);
s1.push(23);
s1.push(42);
s1.push(53);
cout << s1.head->val<<endl;
cout << s1.tail->val<<endl;
s1.size();
}