#include <bits/stdc++.h>

using namespace std;


int maxinarray(int *p,int n){
    int max=p[0];
    for(int i=0;i<n;i++){
        if(p[i]>max){
            max=p[i];
        }
    } 
    return max;
}

int mininarray(int *p,int n){
    int min=p[0];
    for(int i=0;i<n;i++){
        if(p[i]<min){
            min=p[i];
        }
    } 
    return min;
}

int already_exists(int x,int *p,int n){
    
    for(int i=0;i<n;i++){
        if(x==p[i]){
            return 1;
        }  
    }
   return 0; 
}


int * breakingRecords(int* p,int n){
    int* arr=new int[n];
    int* result=new int[2];
    arr[0]=p[0];
    int count=1;
    int hrecord=0,lrecord=0;
    for(int i=1;i<n;i++){
        arr[i]=p[i];
        count++;
       if(already_exists(arr[i],arr,count-1)==0){
           if(arr[i]==maxinarray(arr,count)){
               hrecord++;
           }
           else if(arr[i]==mininarray(arr,count)){
               lrecord++;
           }
       }
    }
    result[0]=hrecord;
    result[1]=lrecord;
    
    return result;
}

int main(){
    
    int n;
    cin>>n;
    
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int* result=breakingRecords(arr,n);
    for(int i=0;i<2;i++){
        cout<<result[i]<<" ";
    }
    
    delete[] arr;
    delete[] result;
    
    
    return 0;
}