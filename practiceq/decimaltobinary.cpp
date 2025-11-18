#include<bits/stdc++.h>
using namespace std;

int bitcalc(int number){
    vector<int> bitnums;
    int remainder =number;
    int newbit =0;
    while (remainder>0){
        remainder = remainder/2;
        newbit = remainder%2;
        bitnums.push_back(newbit);
        
    }
    for(int i=bitnums.size()-1;i>=0;i--){
        cout<<bitnums[i]<<" ";

    }
    return 0;

}


int main(){
    for(int i=0;i<11;i++){
        cout<<bitcalc(i)<<"\n";
    }
    return 0;

}
