# include <iostream>
#include <utility>
using namespace std;
int main(){

  int array[]={1,23,4,6,7,24,5,3};

  int size = sizeof(array)/sizeof(int);
  
  int left = 0;
  int right = size-1;

  while (left<right) {
  
   swap(array[left],array[right]);
    left++,right--;
  }
  
  for (int i=0; i<size-1; i++) {
   
    cout<<array[i]<<" ";
  
  }



  cout<<endl;


}