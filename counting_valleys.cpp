#include <bits/stdc++.h>

using namespace std;


int num_of_valleys(vector<char> v){
    vector<int> d;
    int num=0;
    int dist_sl=0;
    for(int i=0;i<v.size();i++){
        d.push_back(dist_sl);
        if(v.at(i)=='U'){
            dist_sl++;
        }
        else{
            dist_sl--;
        }
        
    }
    for(int i=0;i<d.size()-1;i++){
        if(d.at(i)==0 && d.at(i+1)==-1){
            num++;
        }
    }
    return num;
}


int main(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   vector<char> path;
   for(int i=0;i<n;i++){
       
       path.push_back(s.at(i));
   } 
   int result=num_of_valleys(path);
   cout<<result;
  
    
    return 0;
}
