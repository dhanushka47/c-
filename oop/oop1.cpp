#include <iostream>
using namespace std;

class room{

public:
    double length;
    double width;
    double height;


    double calArea(){
    return length*width;
    }
    double calVolume(){
    return length*width*height;
    }


};



int main(){
int a;

a = 2;
room room1;
room room2;

room1.length = a;
room1.width = 10;
room1.height = 20;

room2.length = 2;
room2.width = 5;
room2.height = 3;



cout<<room1.calArea()<<endl;

cout<<room2.calVolume();

return 0 ;

}


