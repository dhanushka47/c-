#include <iostream>
using namespace std;
int main(){
int marks[10];
int total = 0;
for(int i =0;i<=9;i++){
   cout<<"enter marks"<<i+1<<" =";
   cin>>marks[i];
}

for(int j= 0;j<10;j++){
   total=total+marks[j] ;
}

cout<<"average is :"<<total/10<<endl;


return 0;
}

