#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;
int brute_force(int arr[],int n){
    int max_sum=INT_MIN;
    for (int start=0 ; start<n; start++) {
        int curr_sum=0;
        for (int end=start; end<n; end++) {
            
            curr_sum+=arr[end];
            max_sum=max(curr_sum,max_sum);
            
        }
        
          }
          return max_sum;
}
int kadanes_algo (int arr[],int n){
    int max_sum=INT_MIN; int curr_sum=0;
   for (int i=0; i<n ; i++) {
        curr_sum+=arr[i];
        max_sum=max(curr_sum,max_sum);
        if (curr_sum<0) {
          curr_sum=0;
        }
   }
   return max_sum;
}

int main(){
    int n = 9; 
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
      
         cout<<"MAX SUM IS"<<" "<<brute_force(arr, n)<<" "<< kadanes_algo(arr,n)<<endl;
}
