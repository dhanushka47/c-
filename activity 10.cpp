#include <iostream>
using namespace std;

int main(){
int tempC,tempF;

cout<<"Enter temperture in F :";
cin>>tempF;
tempC = ((tempF-32)*5)/9;

cout<<"temp is :"<<tempC;

return 0;
}
