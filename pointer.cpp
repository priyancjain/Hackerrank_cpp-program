#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b)
{
    int c;
    c=*a;
    *a=*a+*b;
    *b=c-*b;
    if(*b<0)
    *b=-(*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a;
    
    cin>>b;
    
    update(pa, pb);
    cout<<a;
    cout<<"\n";
    cout<<b;

    return 0;
}
