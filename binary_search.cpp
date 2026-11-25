
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int sorted (vector<int >& arr ){
  int temp=0;
 
      for (int i=0; i<arr.size(); i++) {
         cout<<i<<endl;
         for (int j=0; j<arr.size()-1; j++) {
            if (arr[j]>arr[j+1]) {
            // swap(arr[i],arr[j+1]);
              temp=arr[j];
              arr[j]=arr[j+1];
            arr[j+1]=temp;}
         }
      }
      for (int i=0; i<arr.size(); i++) {
         cout<< arr[i]<<" ";
      };
      return 0;
}

int bsa(vector<int>arr,int tar){
     int start=0 , end =arr.size()  ,mid;

     while (start<end) {
        mid= (start+end)/2;
          if (tar < arr[mid]) {
             end=mid-1;
          }else if (tar>arr[mid]) {
            start=mid+1;
          }else {
          return mid;
          }
          
     }
return -1; 
}
int main(){

  vector<int>arr = {-1,34,5,23,1,333,21,45};
  sorted(arr);

  
  // int tar = 99;
  // int ans = bsa(arr, tar);
  // cout<<"your ans is a index "<<ans<<endl;
  // if (ans==-1) {
  //   cout << "not found"<<endl;
  // }
}