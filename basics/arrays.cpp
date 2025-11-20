#include<bits/stdc++.h>
using namespace std;

int main(){
    int myarray[6] = {};

    //arrays are diffrent then a normal vector vector has no limits but arrays have 
    //as i give  6 elemnts limits to  the myarray even there is no elemnt the space for 6 elment alreadt taken by memory
    //this often called garbed memory becuse now it has no use its taken empty space

    myarray[0]=3;
    myarray[3]=5;
    myarray[2]=4;
    myarray[4]=7;
    myarray[5]=8;
    myarray[1]=0;

    //unlike other language we dont have functuon for cpp to get directly the len array we often use 

    int len  = sizeof(myarray)/sizeof(myarray[0]);
    cout<<"the array size is : "<<len<<"\n";

    //we can print all array using range 

    for(int nums : myarray){
        cout<<nums<<endl;
    }


}