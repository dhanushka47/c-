#include <iostream>
using namespace std;
int main(){
int sum=0;
int num;

cout <<"enter number";
cin>>num;

while (num>=1){

   sum = sum+num;
   num= num-1;

}
cout<<"the sum is :"<<sum;


return 0;
}

