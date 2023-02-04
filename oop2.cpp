#include <iostream>
using namespace std;


struct person {

string name[50];
int age;
float salary;
string email;
};



int main(){
person p1;


cout<<"enter person name :";

cin>>p1.name;
cout<<"enter age ";
cin>>p1.age;
cout<<"enter salary :";
cin>>p1.salary;
//cout<<"enter email :";
//cin.get(p1.email);


cout<<"the name is  :"<<p1.name<<endl;
cout<<"the age is   :"<<p1.age<<endl;
cout<<"the salary is :"<<p1.salary<<endl;
cout<<"the email is :"<<p1.email<<endl;



return 0;
}


