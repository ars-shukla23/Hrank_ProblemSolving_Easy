#include <bits/stdc++.h>

using namespace std;

string kangjump(int x1,int x2,int v1,int v2){
    string result;
    if(x2>x1 && v1>v2){
        if((x2-x1)%(v1-v2)==0){
            result="YES";
        }
        else{
            result="NO";
        }      
    }
    else if(x1>x2 && v2>v1){
        if((x1-x2)%(v2-v1)==0){
            result="YES";
        }
        else{
            result="NO";
        }
    }
    else if(x1==x2 && v1==v2){
            result="YES";
        }
    else{
            result="NO";
        }
    
   return result; 
}
/*
string kangjump(int x1,int x2,int v1,int v2){
    string result;
    if(x2>x1){
        if(v1>v2){
            result="YES";
        }
        else{
            result="NO";
        }      
    }
    else{
        if(v2>v1){
            result="YES";
        }
        else{
            result="NO";
        }
    }
   return result; 
}
*/
int main(){
    
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
     
    string str=kangjump(x1,x2,v1,v2);
    cout<<str;
    
    
    
    return 0;
}
