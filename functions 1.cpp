#include <iostream>
using namespace std;

void small(int ,int);
int main(){
int x,y;
x = 10;
y = 5;

small(x,y);


return 0;
}

void small(int a,int b){

if(a<b){
    cout<<"small number is "<<a<<endl;
}else{
cout<<"small number is "<<b<<endl;

}

}
