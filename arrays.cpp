#include <climits>
#include <iostream>
using namespace std;
  int main(){
   int  smallest = INT_MAX ;
    int num[]={1,23,45,3,56,-2,-31,89,90,46};
    int size = sizeof(num)/sizeof(num[0]);
    for (int i=0; i<size; i++) {
       
        if(num[i]==1){
            cout<<i;
break;        } 


  }
   
  cout<<"invalid";

}