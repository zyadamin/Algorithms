#include <iostream>
#include "linked_list.h"
#include"Stacks.h"
using namespace std;


int main()
{
int arr[4]={2,4,6,8};
Stacks<int>x1(arr,4);
Stacks<int>x;
x.push(1);
x.push(3);
x.push(4);
x1.pop();
cout<<"Top="<<x1.Top()<<endl;
x.pop();
cout<<"Top="<<x.Top()<<endl;




    return 0;
}
