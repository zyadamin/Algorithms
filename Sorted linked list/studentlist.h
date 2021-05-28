#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include <iostream>

#include "student.h"
using namespace std;


class StudentList{
private:

struct node{

student item;
node * next;
};
int length;
node * head;
node * last;
public:
    StudentList(){
        head=last=nullptr;
    this->length=0;}


void insertoin(student item){

node* newNode= new node();
newNode->item=item;

if(length==0){
    head=last=newNode;
     newNode->next=nullptr;

}
else if(length==1) {
             node*cur=head;
    if(cur->item.getId()>newNode->item.getId()){
        newNode->next=head=last;
    head=newNode;
    }
    else if(cur->item.getId()<newNode->item.getId()||cur->item.getId()==newNode->item.getId()) {

        newNode->next=nullptr;
        last->next=newNode;
         last=newNode;

        }

}
else{



        node*p=head;
       node*cur=head->next;
       for(int i=0;i<length;i++){
            if(head->item.getId()>newNode->item.getId()||head->item.getId()==newNode->item.getId()){

   newNode->next=head;
    head=newNode;

break;
     }
        else if(cur->item.getId()>newNode->item.getId()||cur->item.getId()==newNode->item.getId())
        {
          newNode->next=p->next;
          p->next=newNode;
          break;
        }
        else{
        p=cur;
        cur=cur->next;}
       }

}

length++;
}


 void Delete(int ID){
     if(ID==head->item.getId()){
   node* cur=head;
head=head->next;


delete cur;
     }
     else{
     node*p=head;
     node*cur=head->next;
     for(int i=0;i<length;i++){
        if(ID==cur->item.getId())
        {
           p->next=cur->next ;
           delete cur;
           break;
        }
        else{


            p=cur;
            cur=cur->next;
        }
     }}
 length--;

 }


void Display(){
node* cur=head;
if(length==0){cout<<"the list is empty"<<endl;}
else{
for(int i=0;i<length;i++){
    cout<<"Name :" <<cur->item.getName()<<endl;
    cout<<"ID :"   <<cur->item.getId()<<endl;
    cout<<"GPA :" <<cur->item.getGPA()<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
cur=cur->next;
}
}
}



void search ( int ID){

    int countt=0;
    node*p;
if(length==0){cout<<"the list is empty"<<endl;}
else{
    node * cur=head;
    for(int i=0;i<length;i++){
        if(ID==cur->item.getId()){countt++;
         p=cur;
          break;
        }else{
        cur=cur->next;
        }

    }

    if(countt==0){cout<<"not found"<<endl;}
    else{
    cout<<"name :" <<p->item.getName()<<endl;
    cout<<"ID :"   <<p->item.getId()<<endl;
    cout<<"GPA :" <<p->item.getGPA()<<endl;
   }
}
}









};

#endif // STUDENTLIST_H
