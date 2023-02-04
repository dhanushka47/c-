
#include <iostream>
using namespace std;

int radious();

void area(int);
void diameter(int);
void circulerface(int);


int rad = 0;

int main(){

cout<<"Enter the radious";
cin>>rad;

diameter(rad);
circulerface(rad);
area(rad);

return 0;
}



void area(int a){

cout<<"area is : "<<3.14*a*a<<endl;

}

void diameter(int a){

cout<<"diameter is : "<<a*2<<endl;
}

void circulerface(int a){

cout<<"circular face is :"<<2*3.24*a<<endl;
}
