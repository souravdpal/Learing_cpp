#include<iostream>
#include<vector>


/*
binary search is  algorithm used on sorted array for finding the 
traget element  by divding the array in half and then use the relveant part by comparing
to the mid elment to the traget value 

binary search has  O(logn) time complexity and O(1) space complity

*/

int binarysearch(std::vector<int> arr ,int target){
    int start =0;
    int end =arr.size()-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>target){
            end= mid-1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            return mid;
        }
        
    }
    return -1;
}

//binary recrusion  search use more optmised code in both space and time complexity then binary search 
int binaryrecrsion(int st , int ed , std::vector<int> arr , int target ){
    while (st<=ed){
       int mid = (st+ed)/2;
       if(arr[mid]<target){
          binaryrecrsion(st=mid+1,ed,arr,target);
       }else if(arr[mid]>target){
         binaryrecrsion(st,ed=mid-1,arr,target);
       }else{
            return mid;
       }
    }
    return -1;
    
}

int main(){
    int target = 101;
    std::vector<int> myvec ={-1,3,5,7,8,9,10};
    std::cout<<binaryrecrsion(0,myvec.size()-1,myvec,target)<<'\n';
   
}