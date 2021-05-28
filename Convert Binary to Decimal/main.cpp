#include <iostream>
#include "Stacks.h"
#include <cmath>
using namespace std;

int converToDecimal(string num){

Stacks<int> numbers;//store numbers
int decimal=0;//calc Decimal numbers
for(int i=0;i<num.size();i++){
    numbers.push(num[i]-'0');
}
int i=0;
while(!numbers.isEmpty()){

    decimal+=pow(2,i)*numbers.Top();
    numbers.pop();
i++;
}

return decimal;
}

int main()
{

int count=1,again=0;
string num;

while(count!=0){
count=0;
if(again>0){cout<<"please enter 0 or 1 only"<<endl;}
cout<<"Binary : ";
cin>>num;

for(int i=0;i<num.size();i++){
 if(num[i]!='0'&&num[i]!='1'){count++;}
}
again++;
}
cout<<"Decimal: "<<converToDecimal(num)<<endl;


    return 0;
}

