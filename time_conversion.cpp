#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    
    string ampm=str.substr(8,2);
    string hrs=str.substr(0,2);
    string final_string;
    if (ampm=="AM"){
        if(str.substr(0,2)=="12"){
            final_string="00"+str.substr(2,6);  
        }
        else{
            final_string=str.substr(0,8);
        }
        
    }
    else{
        int hours=stoi(hrs);
        if(hours==12){
            final_string="12"+str.substr(2,6);
            
            
        }
        else{
        hours+=12;
        string hrs2=to_string(hours);
        final_string=(str.replace(0,2,hrs2)).substr(0,8);
        }   
    }

    cout<<final_string;
    
    return 0;
}
