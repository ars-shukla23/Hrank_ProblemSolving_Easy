#include <bits/stdc++.h>

using namespace std;


int no_of_divisible_sum_pairs(int* arr,int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((arr[i]+arr[j])%k==0 && i!=j){
                count++;
            }
        }
    }
    return count/2;
}



int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int num=no_of_divisible_sum_pairs(arr,n,k);
    cout<<num;
    
    
    
    return 0;
}