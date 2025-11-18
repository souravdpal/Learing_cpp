#include<iostream>
using namespace std;


int main(){
    int age;
    //making simple sytsem if your 18 + else it will say youre not elibigle
    cout<<"Enter you age and if youre eligible 18+ you can vote \n";
    cin>>age;
    if(age<18){
        cout<<"youre age is" <<age <<"youre not allowed vote yet \n";
    }else{
       cout<<"youre age is" <<age <<"youre  allowed to vote \n";

        
    }
}