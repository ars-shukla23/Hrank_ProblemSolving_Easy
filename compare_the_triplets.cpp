#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



 int* compareTriplets(int* a,int* b){
     int *p=new int[2];
     
     int ascore=0,bscore=0;
     for(int i=0;i<3;i++){
         if(a[i]>b[i]){
             ascore++;
         }
         else if(b[i]>a[i]){
             bscore++;
         }       
     }
     p[0]=ascore;
     p[1]=bscore;
     
     return p;
 }

int main()
{
   int* a=new int[3];
   int* b=new int[3];
   for(int i=0;i<3;i++){
       cin>>a[i];
   }
   for(int i=0;i<3;i++){
       cin>>b[i];
   }
   int *intp=compareTriplets(a,b);
   for(int i=0;i<2;i++){
       cout<<intp[i]<<" ";
   }
   

    return 0;
}