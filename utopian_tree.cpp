#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int utopianTree(int n) {
    int height=1;
  for(int i=1;i<=n;i++){
      if(i%2!=0){
          height=height*2;
      }
      else{
          height++;
      }
  }
  return height;
}

int main()
{
    int test;
    cin>>test;
    int arr[test];
    for(int i=0;i<test;i++){
        int val;
        cin>>val;
        arr[i]=val;
    }
    for(int i=0;i<test;i++){
        cout<<utopianTree(arr[i])<<endl;
    }
}  
