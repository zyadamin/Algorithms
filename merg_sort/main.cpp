#include <iostream>

using namespace std;

void merge(int A[],int left,int middle,int right){

int n1=middle-left+1;
int n2=right-middle;

int L[n1],R[n2];



for(int i=0;i<n1;i++){
    L[i]=A[left+i];
}

for(int j=0;j<n2;j++){
    R[j]=A[middle+j+1];
}

int i=0,j=0,k=left;

while(i<n1&&j<n2){
    if(L[i]<R[j]){A[k++]=L[i++];}
    else{A[k++]=R[j++];}

}

while(i<n1){

    A[k++]=L[i++];
}
while(j<n2){

    A[k++]=R[j++];
}

}

int merge_sort(int A[],int left,int right){

    if(left>=right){return 0;}

else{
    int middle=(left+right)/2;

    merge_sort(A,left,middle);
    merge_sort(A,middle+1,right);

    merge(A,left,middle,right);
}



}

int main()
{
int x[6]={4,11,0,8,7,6};

merge_sort(x,0,5);


for(int i=0;i<6;i++){

    cout<<x[i]<<" ";
}


    return 0;
}
