#include<vector>
#include<iostream>
using namespace std;

int main(){
    //vector is dramtic type of arrays where it has no limit and it had better option then arry in cpp
   vector<int> myvector;
   myvector.push_back(2);
   myvector.push_back(3);
   myvector.push_back(7);
   myvector.push_back(8);
   myvector.push_back(1);
   //for length of vector
   cout<<myvector.size()<<"\n";
   //to print them in all
   for(int i : myvector){
      cout<<i<<" ";
   }
}