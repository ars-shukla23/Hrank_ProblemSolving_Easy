#include <bits/stdc++.h>

using namespace std;

int max_of_an_array(int* arr,int n){
 int max=arr[0];
 for(int i;i<n;i++){
    if(max<arr[i]){
        max=arr[i];
    } 
 }
 return max;
}


int main(){
    int n,k;
    cin>>n>>k;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(max_of_an_array(arr,n)>k){
        cout<<max_of_an_array(arr,n)-k;
    }
    else{
        cout<<0;
    }
    
    
    
    return 0;
}