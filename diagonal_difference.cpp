#include <bits/stdc++.h>
#include<cmath>
using namespace std;


int diagonalDiff(int** bp,int n){
   int absdiff;
   int sum1=0,sum2=0;
   //sum1=bp[0][0]+bp[2][2]+bp[1][1];
   //sum2=bp[0][2]+bp[2][0]+bp[1][1];
    for(int i=0;i<n;i++){
        sum1+=bp[i][i];
    }
    for(int i=0;i<n;i++){
        sum2+=bp[i][n-1-i];
    }
   absdiff=abs(sum1 - sum2);
   return absdiff;
}

int main(){
    int n;
    cin>>n;
    int* arr[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int dd=diagonalDiff(arr,n);
    cout<<dd;
    
    return 0;
}
