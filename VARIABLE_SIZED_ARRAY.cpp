
#include <iostream>
#define X 300000
using namespace std;


int main() {
    
    int n,q,s,pos1,pos2;
    cin>>n>>q; 
    int *arr1[n];
    for(int i=0;i<n;i++)
    { 
        cin>>s;
        arr1[i]=new int[s]; 
       
       for(int j=0;j<s;j++)
       {
            cin>>arr1[i][j];
       } 
        
    }
    for(int i=0;i<q;i++)
    {
        
        cin>>pos1>>pos2;
        cout<<arr1[pos1][pos2]<<"\n";
    }   
    return 0;
}
                                                    
