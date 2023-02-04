#include <iostream>
using namespace std;

class circule{

public :
double diameter ;


int calArea(){

return 3.14*diameter*diameter;
}

int calRadious(){

return diameter/2;
}


};

int main(){

circule ob1;

ob1.diameter = 7;

cout<<ob1.calArea()<<endl;
cout<<ob1.calRadious()<<endl;


return 0;
}
