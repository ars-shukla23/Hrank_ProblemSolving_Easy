#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



 int sumarray(int* arr,int n){
     
     int sum=0;
     for(int i=0;i<n;i++){
         sum+=arr[i];
     }
     
     return sum;
 }


int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int sum=sumarray(arr,n);
   cout<<sum;
    
    return 0;
 }