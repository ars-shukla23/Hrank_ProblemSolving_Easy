#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char c='#';
    char s=' '; 
    for(int i=1;i<n+1;i++){
        cout<<string(n-i,s)<<string(i,c)<<endl;  
    }
    
    return 0;
}