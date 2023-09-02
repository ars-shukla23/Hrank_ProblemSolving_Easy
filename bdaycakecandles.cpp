#include <bits/stdc++.h>

using namespace std;

int findmax(int* a,int n){
    int max=a[0];
    bool flag=true;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        } 
        
    }
    
  return max;
}



int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=findmax(arr,n);
    int count=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            count++;
        }
    }
    
    cout<<count;
    
    
    
    
    
    return 0;
}
