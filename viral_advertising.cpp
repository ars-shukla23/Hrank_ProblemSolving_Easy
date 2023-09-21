#include <bits/stdc++.h>

using namespace std;



int viralAdvertising(int n) {
    int cum_sum=0;
    int shared=5;
    int liked;
    for(int i=0;i<n;i++){
        liked=floor(shared/2);
        shared=liked*3;
        cum_sum+=liked;
    }
    
    
    return cum_sum;
}

int main()
{
   int n;
   cin>>n;
   int result=viralAdvertising(n);
   cout<<result;

   return 0;
}
