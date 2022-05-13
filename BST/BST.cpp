#include<iostream>
using namespace std;

class bst{  
public:
    int val;
    bst* left;
    bst* right;
};

bst* createElement(int data){
    bst *element = new bst;
    element->val = data;
    element->left = nullptr;
    element->right = nullptr;
    return element;
}
void show(bst *node){
    if(node!=nullptr){
        cout << node->val << endl;
    show(node->left);
    show(node->right);
    }
}


int main(){
    bst *n1,*n2,*n3;
    n1 = createElement(12);
    n2 = createElement(32);
    n3 = createElement(25);
    n1->left = n2;
    n1->right = n3;
    
    show(n1);


}