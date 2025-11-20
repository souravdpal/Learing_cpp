#include<iostream>
using namespace std;

//now pointer to pointer are same as pointer but this time the pointer will point a another pointer and derefrence that pointers memrory at the end all will point one variable its just how they do that
/*
   pointer one actually use memory of orignal var and then pointer over pointer use the pointer memroy of previous one 
*/

int main(){
    int var1 = 20;
    int* ptr1 = &var1; //it store refrcence or say memroy of var1 and then the * use and debase it and store the value 20
    int** ptr2 = &ptr1; //it will store memory of ptr as given refrence by ** double derefrence store the 20 var again becuse its drefrecne two time 
    

    cout<<*(ptr1)<<endl;//as we know it will derefrece the memory of var1 and show it return 20;
    cout<<(ptr1)<<endl; //this will not derefrence so it will only show refrence so it will return var1 memory location;
    cout<<**(ptr2)<<endl; //this one is derefrencing of ptr2 which store mrmory location stored in ptr1 and again derefrecing so it will also show us var1 location returning 20
    cout<<*(ptr2)<<endl; //this will only show us the memory stored inside the ptr1 of var1 
    cout<<(ptr2)<<endl; //this will show us memory location of ptr1
    
}