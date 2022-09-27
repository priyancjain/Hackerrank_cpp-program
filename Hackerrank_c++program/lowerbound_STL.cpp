#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int N,Q,Y;
   cin>>N;
   vector <int> v(N);
   for(int i=0;i<N;i++)
   {
       cin>>v[i];
   }
   cin>>Q;
   for(int i=0;i<Q;i++)
   {
       cin>>Y;
       vector <int> ::iterator low=lower_bound(v.begin(),v.end(),Y);
       
       if(v[low-v.begin()]==Y)
       cout<<"Yes"<<" "<<(low-v.begin()+1)<<"\n";
       else {
           cout<<"No"<<" "<<(low-v.begin()+1)<<"\n";
       }
       
   }
    return 0;
}
