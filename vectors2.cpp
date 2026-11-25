#include <iostream>
# include <vector> 
using namespace std;
int main(){


vector<int>vec;

vec.push_back(0);
vec.push_back(1);
vec.push_back(2);

cout<<vec.size()<<endl; //shows the size or the num of element in vec
cout<<vec.capacity()<<endl; //shows the capacity of vec

//everytime the vec tries to store in last index and it has some value than it doubles the array capacity.for exp now vec has 3 storage or element but 4 capacity now if add a more num it stores at 4 capacity than on adding num 5 the capacity runs out and it tries to store ar last index which has value 4 so it doubles the capacity or array so capacity becomes 8 and storage is 5

vec.push_back(4);
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;

vec.push_back(5); //tries to add on last index which has value 4
cout<<vec.size()<<endl; // size become 5
cout<<vec.capacity()<<endl; //doubles the capcity becomes 8


}