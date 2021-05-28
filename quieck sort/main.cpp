#include <iostream>

using namespace std;

int partition(int arr[],int first,int last){


int i=first,j=last;
int pe=first;
int p=arr[first];

while(true){


do{
    i++;
}while(arr[i]<p);

while(arr[j]>p){

    j--;
}

if(i>j){break;}

swap(arr[i],arr[j]);
}

swap(arr[pe],arr[j]);

return j;

}

int quieck_sort(int arr[],int first,int last){
if(first<last){
int p=partition(arr,first,last);
quieck_sort(arr,first,p-1);
quieck_sort(arr,p+1,last);
}
}



int main()
{
    int arr[10]={10,16,8,12,15,6,4,9,5,50};
    quieck_sort(arr,0,9);

for(int i=0;i<10;i++){

    cout<<arr[i]<<" ";
}



    return 0;
}
