#ifndef STUDENT_H
#define STUDENT_H


#include <iostream>

using namespace std;
class student{
private:
string Name;
int ID;
float GPA;
public:
student(){}
student(string Name,int ID,float GPA){
this->Name=Name;
this->ID=ID;
this->GPA=GPA;

}
int getId(){
return ID;
}
string getName(){
return Name;
}
float getGPA(){
return GPA;
}
};

#endif // STUDENT_H
