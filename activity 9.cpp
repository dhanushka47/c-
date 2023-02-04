#include <iostream>
using namespace std;

int main(){
int add,sub,mul,div,mod,num1,num2;

cout<<"Enter the integer number";
cin>>num1;
cout<<"enter the another number";
cin>>num2;

add = num1+num2;
sub = num1-num2;
mul = num1*num2;
div = num1/num2;
mod = num1% num2;

cout<<"Addition is : "<<add<<endl;
cout<<"Substraction is : "<<sub<<endl;
cout<<"Multiplication is : "<<mul<<endl;
cout<<"Division is : "<<div<<endl;
cout<<"modules is : "<<mod<<endl;


return 0;
}
