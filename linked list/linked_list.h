#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

template<class T>
class linked_list{

struct node{

T item;
node * next;
};

node* first;
node* last;
node* dummy=new node();
int length=0;

public:

class iterator{

node* pointe;
node* firstLink;

public:

 iterator(){}

iterator(node* p, node* f){
this->pointe=p;
this->firstLink=f;
}

 void operator =( iterator& x){
 this->pointe=x.pointe;

}

T operator *(){

return pointe->item;
}


void operator++(int ){
pointe=pointe->next;
}

void operator--(int ){

node* prev=firstLink;

while(prev->next!=pointe){
prev=prev->next;
}

pointe=prev;

}

bool operator==( const iterator & it ){

if(this->pointe==it.pointe){return true;}

else{return false;}
}


node* getPointe(){
return pointe;
}

iterator operator+(int x){      //began()+1

for(int i=0;i<x;i++){

pointe=pointe->next;
}

iterator y(pointe,firstLink);

return y;
}

};
////////////////////////////////////////////////////////////////////

linked_list(){

    first=last=dummy;
    dummy->next=nullptr;
    dummy->item=0;
}

linked_list(T value[], int initial_size){

for(int i=0;i<initial_size;i++){

insert(value[i],end());
}
}

int size(){
return length;
}


T& getFirst(){

return first->item;
}

T& getLast(){

return last->item;
}



iterator begin(){

iterator p(first,first);

return p;
}


iterator end(){

iterator p(dummy,first);
return p;
}

bool isEmpty(){
return first==dummy;

}


void insert(T item ,iterator postion){

node* newNode= new node();
newNode->item=item;

node* prev=new node();

if(length==0){
    first=last=newNode;
    newNode->next=dummy;
    length++;
}

else if(postion.getPointe()==first){

newNode->next=first;
first=newNode;
length++;
}

else if(postion.getPointe()==dummy){

prev=first;

while(prev->next!=postion.getPointe()){
prev=prev->next;

}

newNode->next=dummy;
prev->next=newNode;

last=newNode;

length++;
}

else{

prev=first;

while(prev->next!=postion.getPointe()){
    prev=prev->next;
}
newNode->next=postion.getPointe();
prev->next=newNode;
length++;
}

}

iterator erase(iterator postion){

node* cur= new node();
node* prev=new node();

 if(postion.getPointe()==first){
cur=first;
first=first->next;

length--;
delete cur;
}

else if(postion.getPointe()==dummy){
cur=first;
while(cur->next!=postion.getPointe()){
prev=cur;
cur=cur->next;
}

prev->next=dummy;
last=prev;
length--;
delete cur;
}

else{
cur=postion.getPointe();
prev=first;

while(prev->next!=cur){

    prev=prev->next;
}

prev->next=cur->next;
length--;
delete cur;
}


}

linked_list<T>& operator=( linked_list<T> another_list){

node* r=another_list.first;

int num=another_list.size();

for(int i=0;i<num;i++){

insert(r->item,end());
r=r->next;
}


return *this;
}


void print(){
node* cur=new node();
cur=first;

for(int i=0;i<length;i++){
cout<<cur->item<<" ";
cur=cur->next;
}

}


~linked_list(){
while(length!=0){

erase(end());
}

delete dummy;
first=last=nullptr;

}


};
#endif // LINKED_LIST_H
