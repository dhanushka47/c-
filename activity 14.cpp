#include <iostream>
using namespace std;

int main(){
int add,sub,mul,div,mod,num1,num2;
char command ;
cout<<"Enter the integer number";
cin>>num1;
cout<<"enter the another number";
cin>>num2;
cout<<"enter the oparator     :";
cin>>command;

switch(command){

case '+' :
    cout<<"Addition is : "<<num1+num2<<endl;
    break;
case '-' :
     cout<<"Substraction is : "<<num1 - num2<<endl;
    break;
case '*' :
    cout<<"Multiplication is : "<<num1*num2<<endl;
    break;
case '/' :
    cout<<"Division is : "<<num1*num2<<endl;
    break;
case '%' :
    cout<<"modules is : "<<num1%num2<<endl;

    break;

}



return 0;
}
