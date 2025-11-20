#include <iostream>
using namespace std;

void h(int &k)
{
    k++;
}

int main()
{ // pointer are use to point a variable in same memory location pointer not store copy value the variable insted they store orginal memory loacation of that variable and *-> means derefrencing which derefrence the given alias of refrence given by & -> reference

    int a = 10;
    int *pointer = &a;
    cout << (pointer) << endl;  // return the memory location
    cout << *(pointer) << endl; // retun the value of the memroy location located in

    // how refrence works?  &-> for refrence give the alias of memory location

    int o = 10;
    h(o);
    cout << (o) << endl;
    // here o isnt global so it should be retuning zero but becuse we give function
    // the memorey refence of var  o so it will take orginal o to make chnages and give us 11
}