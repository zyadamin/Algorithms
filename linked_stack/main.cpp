#include <iostream>
#include <vector>
using namespace std;



template<class T>
class stackk{
private:
    struct node{
T item;
node* next;
};
node*head;
node *tail;
int length;
public:
stackk(){

    head=tail=nullptr;
    length=0;
    }

   bool IsEmpty(){
   if(length>0)return false;
   else return true;}

   void push( T element){
   node* newNode=new node;
    newNode->item=element;
    if(length==0){
        tail=head=newNode;
        newNode->next=nullptr;

    }else{
  newNode->next=nullptr;
  tail->next=newNode;
    tail=newNode;}
    length++;

   }
   void pop(){
 if(length==1){
    delete tail;
    length--;

 }
else{
  node * c=head->next;
  node* a=head;
  while(c->next!=nullptr){
    a=c;
    c=c->next;


  }
  a->next=c->next;
  tail=a;
  delete c;

    length--;
}
   }
   T top(){


 return tail->item;
  }










};
/*

bool fun2(char a,char b){
if(a=='('&& b==')')
    return true;
else if(a=='{'&& b=='}')
    return true;
    else if(a=='['&& b==']')
    return true;
    else   return false;
}

bool fun (string s){
    stackk<char>v;
for(int i=0;i<s.size();i++){
    if(s[i]=='('||s[i]=='{'||s[i]=='['){
        v.push(s[i]);

       }
      else if(s[i]==')'||s[i]=='}'||s[i]==']'){

     if(v.IsEmpty()==true ||fun2(v.top(),s[i])==false)
{return false;}
else {v.pop();
break;}
}}
if(v.IsEmpty()==true){
    return true;}
    }
*/

int weight(char c){

if(c=='+'||c=='-'){return 1;}

 else if(c=='*'||c=='/'){return 2;}

}

void convertTopostofix(string &x){
stackk<char>y;
string new2;

for(int i=0;i<x.length();i++){

if(x[i]=='+'||x[i]=='-'||x[i]=='*'||x[i]=='/'){

new2.push_back(' ');
if(y.IsEmpty()){y.push(x[i]);}

else if(y.top()=='('){
y.push(x[i]);
}

else if(weight(x[i])>weight(y.top())){
y.push(x[i]);
}

else {
new2.push_back(y.top());
new2.push_back(' ');
y.pop();
y.push(x[i]);
}



}

else if(x[i]=='('){
y.push('(');
}


else if(x[i]==')'){

while(y.top()!='('){

new2.push_back(' ');
new2.push_back(y.top());
y.pop();
}

y.pop();
}

else{new2.push_back(x[i]);}

}

while(!y.IsEmpty()){
new2.push_back(' ');
new2.push_back(y.top());
y.pop();
}

x=new2;

}


int operation(string x){

int last,first;
stackk<int>result;

convertTopostofix(x);
cout<<x<<endl;

for(int i=0;i<x.length();i++){

if(x[i]==' '){}

else if(x[i]=='*'|| x[i]=='/'|| x[i]=='+'||x[i]=='-'){

last=result.top();
result.pop();
first=result.top();
result.pop();


if(x[i]=='*'){result.push(first*last);}
else if(x[i]=='/'){result.push(first/last);}
else if(x[i]=='+'){result.push(first+last);}
else if(x[i]=='-'){result.push(first-last);}

}

else{
int intger=0,multie=1;
stackk<int>he;

while(x[i]!=' '){
he.push(x[i]-'0');
i++;
}

while(!he.IsEmpty()){
intger+=he.top()*multie;
he.pop();
multie*=10;
}

result.push(intger);
}

}

return result.top();

}

int main()
{
string x;

cin>>x;

cout<<operation(x)<<endl;



return 0;
}
