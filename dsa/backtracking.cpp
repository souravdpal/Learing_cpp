#include<iostream>
#include<vector>

/*
backtracking is a method in recursion where we use recursion first recursiverly and then 
we use base case to backtrack the where we came from to reach our result as per requirment

1. when recursion happen using return ;  always when base case meet take previous function not
out of the function so this is main idea of backtracking once base case meet we will use layers of deep layers 
functions as another loop to go backward

2. for  we will find  subsets of a array and give all possible combintaion  2^n it can have and we will return it 

*/
void backTrack(std::vector<int>&dataVector , std::vector<int>&ans,int i){
    if(i==dataVector.size()){
        for(int k :  ans){
            std::cout<<k<<" ";
        }
        std::cout<<std::endl;
        return;
    }
    ans.push_back(dataVector[i]);
    backTrack(dataVector , ans , i+1);

    ans.pop_back();
    backTrack(dataVector,ans,i+1);

}


int main(){
    std::vector<int> data ={1,2,3};
    std::vector<int> ans;

    backTrack(data,ans,0);

    
}
