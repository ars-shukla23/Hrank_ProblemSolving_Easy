#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int* countfruits(int s,int t,int a,int b,int m,int n,int*p,int*q){
    int *result=new int[2];
    //First we will find the actual location array for apples
    for(int i=0;i<m;i++){
        p[i]=p[i]+a;
    }
    //Similarly for oranges
    for(int i=0;i<n;i++){
        q[i]=q[i]+b;
    } 
    int acount=0,ocount=0;
    for(int i=0;i<m;i++){
        if(p[i]>=s && p[i]<=t){
            acount++;
        }
    }
    for(int i=0;i<n;i++){
        if(q[i]>=s && q[i]<=t){
            ocount++;
        }
    }
    result[0]=acount;
    result[1]=ocount;
    
    return result;
}


int main(){
    int start_house, end_house;
    cin>>start_house>>end_house;
    int apple_c,orange_c;
    cin>>apple_c>>orange_c;
    int m;
    cin>>m;
    int n;
    cin>>n;
    int* apparr=new int[m];
    int* orgarr=new int[n];
    for(int i=0;i<m;i++){
        cin>>apparr[i];
    }
    for(int i=0;i<n;i++){
        cin>>orgarr[i];
    }
    
    int* r=countfruits(start_house,end_house,apple_c,orange_c,m,n,apparr,orgarr);
    for(int i=0;i<2;i++){
        cout<<r[i]<<endl;
    }
    
    
    
    
    return 0;
}
