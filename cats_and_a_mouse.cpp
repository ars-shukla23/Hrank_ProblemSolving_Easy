#include <bits/stdc++.h>
#include<cstdlib>

using namespace std;

string cat_mouse(int* arr){
    if(abs(arr[0]-arr[2])>abs(arr[1]-arr[2])){
        return "Cat B";
    }
    else if(abs(arr[0]-arr[2])<abs(arr[1]-arr[2])){
        return "Cat A";
    }
    else{
        return "Mouse C";
    }
}


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int* arr=new int[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        string s=cat_mouse(arr);
        cout<<s<<endl;
    }
}