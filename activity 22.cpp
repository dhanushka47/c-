#include <iostream>
using namespace std;
void function2(int a,int b);

int main(){
int x,y;

x =12;
y = 8;
function2(x,y);
function2(20,10);
return 0;
}

void function2(int a,int b){

cout<<a+b<<"   "<<a-b<<endl;

}

