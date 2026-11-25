#include <iostream>
#include <vector>
using namespace std;
int main(){

vector<int>vec;
vec.push_back(-23);
vec.push_back(2);
vec.push_back(-23);
vec.push_back(22);
vec.push_back(2);
int ans=0;
for (int val : vec) {

ans=ans^val;  //^ is XOR fun which compare the ascii valur of num like 1^1=0, 0^0=0 , 1^0=1 , 0^1=1  so same valu is zero , we can find unique num

}


cout<<ans<<endl;

}