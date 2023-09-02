#include <bits/stdc++.h>

using namespace std;

int getTotalX(int *p,int *q,int n,int m){
   int result=0;
   int max=p[0],min=q[0];
    int nsum=0,msum=0;
   for(int i=0;i<n;i++){
       if(p[i]>max){
           max=p[i];
       }
   }
   for(int i=0;i<m;i++){
       if(q[i]<min){
           min=q[i];
       }
   }
   for(int i=max;i<min+1;i++){
     for(int j=0;j<n;j++){
         if(i%p[j]==0){
             nsum++;
         }
     }
     for(int k=0;k<m;k++){
         if(q[k]%i==0){
             msum++;
         }
     }
     if(nsum==n && msum==m){
         result++;
     }
     nsum=0;
     msum=0;
   }
   return result;
}

int main(){
    int n,m;
    cin>>n>>m;
    int* firstarr=new int[n];
    int* secondarr=new int[m];
    
    for(int i=0;i<n;i++){
        cin>>firstarr[i];
    }
    
    for(int i=0;i<m;i++){
        cin>>secondarr[i];
    }
    
    int answer=getTotalX(firstarr,secondarr,n,m);
    cout<<answer;
    
    
    return 0;
}
