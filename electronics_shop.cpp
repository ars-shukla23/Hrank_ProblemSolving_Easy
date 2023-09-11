#include <bits/stdc++.h>

using namespace std;




int max_in_vector(vector<int> v){
    int max=v.at(0);
    vector<int>::iterator it=v.begin();
    for(it;it!=v.end();it++){
        if(*it>max){
            max= *it;
        }
    }
    return max;
}

int min_in_vector(vector<int> v){
    int min=v.at(0);
    vector<int>::iterator it=v.begin();
    for(it;it!=v.end();it++){
        if(*it<min){
            min= *it;
        }
    }
    return min;
}

int max_expenditure(vector<int> k,vector<int> u,int b){
    vector<int> vec;
    if(min_in_vector(k)+min_in_vector(u)>b){
        return -1;
    }
    else{
        for(int i=0;i<k.size();i++){
            for(int j=0;j<u.size();j++){
                if(k.at(i)+u.at(j)<=b){
                    int val;
                    val=k.at(i)+u.at(j);
                    vec.push_back(val);
                }
            }
        }
    }
    int max_exp=max_in_vector(vec);
    
    return max_exp;
}

int main(){
   int b,n,m;
   cin>>b>>n>>m;
   vector<int> keyboard;
   vector<int> usb;
   
   for(int i=0;i<n;i++){
       int val;
       cin>>val;
       keyboard.push_back(val);
   } 
   
   for(int i=0;i<m;i++){
       int val;
       cin>>val;
       usb.push_back(val);
   }
   
   int result=max_expenditure(keyboard,usb,b);
   cout<<result;
    
    
    return 0;
}
