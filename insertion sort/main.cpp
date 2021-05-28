#include <iostream>

using namespace std;

void insertion(int arr[],int n){

for(int i=1,j;i<n;i++){

int temp=arr[i];

    for(j=i;j>0&&temp<arr[j-1];j--){
    arr [j] = arr [j-1];
}
    arr [j] = temp;

}


}




int main()
{

    int arr[5]={1,5,8,7,9};
    insertion(arr,5);

    for(int i=0;i<5;i++){

        cout<<arr[i]<<" ";
    }

    return 0;
}
