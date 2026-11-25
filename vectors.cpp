// vectors are dynamic in size like [] in which we can leave it empty and can store as many as we like.Value is given on runtime or while running programm
// The difference btw array and vector is that arrays are fixed in value like [12 or 4 ] and the value or space is given at compiling time but vectors are dynamic it chacges as the data changes
#include <iostream>
# include <vector> //must include this library file

using namespace std;
int main(){

 vector<int>vec; //first way of declarying vec

  vector<int>ve={1,3,3,2,5,7}; //second way
 
 vector<int>vetor(4,23);  //third way  4 is size of vector 23 is what store at index
 
 for(int val : ve){   //this is called for each loop in which val is not the index like 0,1 but its the value store at that index
    cout<<val;

}

cout<<endl;

// ######## functions
   vec.push_back(23);
   vec.push_back(43);  //adds 23 in last if you use front then it adds at front 

   for(int val : vec){   
    cout<<val;

}

cout<<endl;

   vec.pop_back(); //remove last value it dosenot need any value also if its front than the first vlaue

   for(int val : vec){  
    cout<<val;

}

cout<<vec.at(0); //prints value at that index

}
