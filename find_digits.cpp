#include <bits/stdc++.h>

using namespace std;

int find_digits(string s){
    int ndig=0;
    int len;
    len=s.length();
    for(int j=0;j<len;j++){
         string s1(1,s.at(j));
         if(s1!="0" && stoi(s)%stoi(s1)==0 ){
                ndig++;
            }
        }
    return ndig;
}


int main(){
    int n;
    cin>>n;
    string* arr=new string[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        int res;
        res=find_digits(arr[i]);
        cout<<res<<endl;
    }
    
    
    
    
    
    return 0;
}