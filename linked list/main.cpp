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

x1.print();
cout<<endl;


x2.print();

cout<<endl;
x3=x2;
x3.print();

    return 0;
}
