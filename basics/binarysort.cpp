#include<iostream>
#include<vector>
using namespace std;

/*
sorting used for arraging or making a order of somthing binary sort is same algorithm used as brute forcing algorithm 
to sort the array in assesnding order or decending it often compare one element to its next element 
and arrange it 
*/


int main(){
    vector<int> myvec= {2,7,8,3,1,6,7,7,0};
    for(int i=0;i<myvec.size()-1;i++){
        for(int j=0;j<myvec.size()-1;j++){
            if(myvec[j]>myvec[j+1]){
                int temp = myvec[j];
                myvec[j] = myvec[j+1];
                myvec[j+1]=temp;

            }

        }
        
    }
    for(int k : myvec){
        cout<<k<<endl;
    }
    
    
}