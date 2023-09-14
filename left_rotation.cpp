#include <bits/stdc++.h>

using namespace std;


void l_rotate(int *arr,int n,int d){
    int num;
    int count=0;
    while(count!=d){
    num=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];      
    }
    arr[n-1]=num;
     count++;
    }
    
}


int main(){
    int n,d;
    cin>>n>>d;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    l_rotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
