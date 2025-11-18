    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int numbers[5] = {2,3,6,7,9};
        int odd =0;
        int even=0;
        int lenarr = sizeof(numbers)/sizeof(numbers[0]);
        for(int i=0;i<lenarr;i++){
            if(numbers[i]%2==0){
                even++;
            }else{
            odd++;
            }
        }
        cout<<"Even : " <<even<<"\n";
        cout<<"Odd  : "<<odd<<"\n";

        return 0;
    }