#include <iostream>
using namespace std;

struct car{

string name[50];
int year ;
float weight;
};


int main(){
car bmw;
car tesla;

cout<<"enter car name ";
cin>>bmw.year;

cout<<"enter 2 car  name ";
cin>>tesla.year;

cout<<bmw.year<<"   "<<tesla.year<<endl;
return 0 ;
}
