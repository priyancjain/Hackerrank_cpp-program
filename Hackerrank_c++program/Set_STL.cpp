#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q,y,x;
    cin>>q;
    int i;
    set <int>a;
    for(i=0; i<q;i++)
     {
         cin>>y;
         cin>>x;
         if(y==1)
         {
         
         a.insert(x);
         }
         else if(y==2)
         {
             
             a.erase(x);
         }
         else if(y==3)
         {
             
             set<int>::iterator itr=a.find(x);
             if(itr==a.end())
             cout<<"No\n";
             else {
                 cout<<"Yes\n";
             }
             
         }
         
     } 
    return 0;
}



