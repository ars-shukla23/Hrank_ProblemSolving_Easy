#include <bits/stdc++.h>

using namespace std;


int num_of_cases(int* arr,int n,int m,int d){
    int num=0;
    for(int i=0;i<n-m+1;i++){
        int sum=0;
        for(int j=i;j<i+m;j++){
            sum+=arr[j];
        }
        if(sum==d){
            num++;
        }
        
    }
    return num;
}

int main()
{
   int n;
   cin>>n;
   int* arr=new int[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int d,m;
   cin>>d>>m;
   int result=num_of_cases(arr,n,m,d);
   cout<<result;
   

    return 0;
}
