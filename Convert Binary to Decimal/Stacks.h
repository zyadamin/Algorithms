#ifndef STACKS_H
#define STACKS_H
#include "linked_list.h"
#include <iostream>
using namespace std;

template<class T>
class Stacks
{
private:

linked_list<T>List;

    public:

Stacks(){}


Stacks(T value[],int initial_size){

for(int i=0;i<initial_size;i++){
push(value[i]);}

}


~Stacks(){
    List.~linked_list();

}


int  size(){
return List.Size();
}

void push(T value){
List.insert(value,List.end());
}

void pop(){
List.erase(List.end());
}


T&Top(){
return List.getLast();
}

bool isEmpty(){

return List.isEmpty();
}

};

#endif // STACKS_H
