#include<iostream>
#include<vector>



/*
selection sort another sorting alogrithm but better than birnary but still same time complexity 
we use  a index of smallest number we assue index i to be small and then we cheq smallest and then make it smallest 
*/


int main(){
    std::vector<int> myvec = {9,4,7,2,5}; 
    for(int i=0;i<myvec.size()-1;i++){
        int idxTracker = i;
        for(int j=0+i;j<myvec.size();j++){
            if(myvec[idxTracker]>myvec[j]){
                idxTracker=j;
            }

        }
        int temp =myvec[i];
        myvec[i]=myvec[idxTracker];
        myvec[idxTracker]=temp;
        

    }
    for(int h : myvec){
        std::cout<<h<<'\n';
    }
    
    
}