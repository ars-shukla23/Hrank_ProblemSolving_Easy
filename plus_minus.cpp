#include <bits/stdc++.h>
#include<iomanip>

using namespace std;



void plus_minus(int *p,int n){
    float pos=0.0,neg=0.0,z=0.0;
    for(int i=0;i<n;i++){
        if (p[i]>0){
            pos++;
        }
        else if(p[i]<0){
            neg++;
        }
        else{
            z++;
        }
    }
    cout<<setprecision(6)<<pos/float(n)<<endl;
    cout<<setprecision(6)<<neg/float(n)<<endl;
    cout<<setprecision(6)<<z/float(n)<<endl;
}

int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    plus_minus(arr,n);
    
    return 0;
}