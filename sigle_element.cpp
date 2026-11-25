#include <iostream>
# include <vector> //must include this library file

using namespace std;

int main(){

   vector<int>arr={1,1,2,33,33,55,55};


    int ans=-1; int start=0; int end=arr.size();
   while (start<end) {
       int mid = (start+end)/2;
       if (arr[mid]!=arr[mid-1]&& arr[mid]!=arr[mid+1]) {
           ans=arr[mid];
           break;
       }else if (arr[mid]==arr[mid-1]) {
           end=mid-1;
       }else if (arr[mid]==arr[mid+1]) {
           start=mid+1;
       }
   }


   cout<<ans<<endl;
}