#include <iostream>
#include "queue.h"
#include "linked_list.h"
using namespace std;

int main()
{
queue<int>s;

cout<<s.size()<<endl;
s.push(1);
s.push(2);
s.push(3);

cout<<s.size()<<endl;
cout<<s.front()<<endl;

s.pop();
cout<<s.front()<<endl;

cout<<"///////////////////"<<endl;


int arr[3]={11,22,33};
queue<int>z(arr,3);
cout<<z.size()<<endl;
cout<<z.front()<<endl;
z.pop();
cout<<z.front()<<endl;
    return 0;
}
