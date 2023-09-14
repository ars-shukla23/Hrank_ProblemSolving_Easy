#include <bits/stdc++.h>

using namespace std;


int max_hourglass_sum(int arr[6][6]){
    vector<int> sums;
    int sum,result;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
        sums.push_back(sum);
        }
    }
    result=*max_element(sums.begin(),sums.end());
    return result;
}

int main(){
    int arr[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    int result=max_hourglass_sum(arr);
    cout<<result;
    
    return 0;
}