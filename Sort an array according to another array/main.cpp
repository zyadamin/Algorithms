#include <iostream>
#include<vector>
using namespace std;

void Sort_according_another(int A1[],int Size1,int A2[],int Size2){

    vector<int>Sort;//store sort array according to another
    vector<int>store;//store the last elements in  given array
    int count=0;
    //sort arr according to arr1
    for(int i=0;i<Size2;i++){
    for(int j=0;j<Size1;j++){
           if(A2[i]==A1[j]){
            Sort.push_back(A1[j]);}
    }
    }

//store last elements in given array
    for(int i=0;i<Size1;i++){
    for(int j=0;j<Sort.size();j++){
        if(A1[i]!=Sort[j]){
        count++;}
    }
    if(count==Sort.size()){
        store.push_back(A1[i]);
    }
    count=0;
}
//sort last elements in given array
    for(int i=0;i<store.size()-1;i++){
        for(int j=0;j<store.size()-1;j++){
            if(store[j]>store[j+1]){
        swap(store[j],store[j+1]);}

    }
    }
for(int i=0;i<Sort.size();i++){
cout<<Sort[i]<<" ";
}
for(int i=0;i<store.size();i++){
cout<<store[i]<<" ";}

}
int main()
{
int *A1,*A2;
int x1=0,x2=0;
cout<<"enter Size of A1=";
cin>>x1;
cout<<"enter Size of A2=";
cin>>x2;
A1=new int[x1];
A2=new int[x2];
cout<<"enter First array:"<<endl;
for(int i=0;i<x1;i++){
    cin>>A1[i];
}
cout<<"enter second array:"<<endl;
for(int i=0;i<x2;i++){
    cin>>A2[i];
}
cout<<"Sorted array is:"<<endl;
Sort_according_another(A1,x1,A2,x2);


    return 0;
}
