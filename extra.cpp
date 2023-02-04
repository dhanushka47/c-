#include <iostream>
using namespace std;

int a[8] = {22,32,80,1,2,4,6,56};
int maximum = 0,temp;

int main(){
for(int i =0;i<8;++i){

   temp= a[i];

    if(temp>maximum){
        maximum= temp;
    }

}
cout<<maximum<<endl;

return 0 ;
}
