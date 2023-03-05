#include <sstream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> parseInts(string str){
    stringstream s(str);
    int temp;
    char ch;
    vector<int> g;
    while(s>>temp)
    {
        g.push_back(temp);
        s>>ch;
    }
return g;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
