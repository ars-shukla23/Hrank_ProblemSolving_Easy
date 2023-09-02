#include <bits/stdc++.h>

using namespace std;

long int longarraysum(long int *arr,int n){
    long int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    long int *arr=new long int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    long int longsum=longarraysum(arr,n);
    cout<<longsum;
    return 0;
}