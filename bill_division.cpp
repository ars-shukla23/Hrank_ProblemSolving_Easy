#include <bits/stdc++.h>

using namespace std;

int bill_division(int n,int k,int* bill,int b){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=bill[i];
    }
    sum=sum-bill[k];
    
    int actual_amount_owed=sum/2;
     
     if(b>actual_amount_owed){
         return b-actual_amount_owed;
     }
     else{
         return 0;
     }
}


int main(){
    int n,k;
    cin>>n>>k;
    int* bill=new int[n];
    for(int i=0;i<n;i++){
        cin>>bill[i];
    }
    int b;
    cin>>b;
    
   
    
    int result=bill_division(n,k,bill,b);
    
    if(result==0){
        cout<<"Bon Appetit";
    }
    else{
        cout<<result;
    }
    return 0;
}
