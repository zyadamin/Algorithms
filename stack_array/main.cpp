#include <iostream>

using namespace std;

class stack{

int top=-1;
int arr[100];

public:

stack(){}

void push(int val){
top++;
arr[top]=val;
}

void pop(){
top--;
}

int getTope(){

return arr[top];
}

bool isEmpty(){
if(top==-1)return true;

else return false;

}


};


int main()
{

stack x1;
x1.push(5);
x1.push(10);
cout<<x1.getTope()<<endl;
cout<<x1.isEmpty()<<endl;
x1.pop();
cout<<x1.getTope()<<endl;


x1.pop();
cout<<x1.isEmpty()<<endl;
    return 0;
}
