#include <iostream>
#include "linked_list.h"

using namespace std;

int main()
{

int arr[4]={1,2,3,4};

linked_list<int> x1;

linked_list<int> x2(arr,4);

linked_list<int> x3;


x1.insert(1,x1.end());
x1.insert(2,x1.end());
x1.insert(3,x1.end());
x1.insert(4,x1.end());
x1.insert(7,x1.end());

x1.print();
cout<<endl;

x2.print();

cout<<endl;

x3=x2;

x2.print();

x3.insert(99,x3.begin());
x3.print();
x2.print();

x1.erase(x1.end());
cout<<endl;
x1.print();
cout<<endl;
x1.print();
cout<<endl;
x3.print();
    return 0;
}
