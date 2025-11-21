#include<iostream>


int main(){
    int a  = 82098123;
    while(a>0){
        std::cout<<a%10<<std::endl;
        a=a/10;
    }
}
