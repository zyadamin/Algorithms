#include "studentlist.h"
#include <iostream>

#include "student.h"
using namespace std;



int main()
{
      StudentList l;
      student s1("manar",20180290,3.4);
   student s2("zyad",20180111,4.5);
      student s3("salsabel",20180222,6.5);

      l.insertoin(s1);
      l.insertoin(s2);
      l.insertoin(s3);


      l.Display();
    return 0;
}
