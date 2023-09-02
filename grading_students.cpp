#include <bits/stdc++.h>

using namespace std;

int* roundingmarks(int* p,int n){
    int* p2=new int[n];
    for(int i=0;i<n;i++){
        if(p[i]<38){
            p2[i]=p[i];
        }
        else{
            if(p[i]%10==3 || p[i]%10==8){
                p2[i]=p[i]+2;
            }
            else if(p[i]%10==4 || p[i]%10==9){
                p2[i]=p[i]+1;
            }
            else{
                p2[i]=p[i];
            }
            
        }     
    }
    return p2;
}



int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int* arr2=roundingmarks(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<endl;
    }
    
    
    return 0;
}
