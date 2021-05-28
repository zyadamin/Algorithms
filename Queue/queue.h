#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "linked_list.h"

using namespace std;

template<class T>

class queue{
    private:
linked_list<T>x;

public:

queue(){}
queue(T value [], int intial_size){

for(int i=0;i<intial_size;i++){
push(value[i]);
}

}

T& front(){
return x.getFirst();
}

void pop(){
x.erase(x.begin());
}

void push(T item){
x.insert(item,x.end());
}

int size(){
return x.size();
}

~queue (){

x.~linked_list();
}

};
#endif // LINKED_LIST_H
