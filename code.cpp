#include <iostream> 
#include <ostream>
using namespace std;
int main(){
   int  n=4 ;
   
   for (int i=0; i<n; i++) {
       for (int h=0; h<i+1; h++) {
         cout<<i+1;
            
       }
       cout<<endl;
   }
      
    return 0;
}