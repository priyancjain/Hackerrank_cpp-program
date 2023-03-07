#include <iostream>
#include <deque> 
using namespace std;
// void print_deque(deque<int> a)

// {
    
//     for( auto i=a.begin();i!=a.end();++i)
//     {
//     cout<<*i<<" ";
//     }
//     cout<<endl;
// }
void printKMax(int arr[], int n, int k){
    //Write your code here.
    deque<int> dq;
    
    for (int i=0; i<n; i++){
        
        // base case for first element
        //cout<<"-------------"<<endl;
        
        if (dq.empty()){
            //cout<<"print i"<<i<<endl;
            dq.push_back(i);
            // cout<<"first\n";
            // print_deque(dq);
        }
        
        // remove elements outside the current window
        if (dq.front() <= (i - k)){
            // cout<<"print i"<<i<<endl;
            dq.pop_front();
            // cout<<"second\n";
            // print_deque(dq);
        }
        
        // move max element to the front
        while (!dq.empty() && arr[i] >= arr[dq.back()]){
            // cout<<"print i"<<i<<endl;
            //cout<<"last"<<dq.back()<<endl;
            // cout<<"third\n";
            // print_deque(dq);
            dq.pop_back();
            
        }
        
        dq.push_back(i);
        //print_deque(dq);
        
        // print out only when the first window is completed
        if (i >= (k - 1)){
            cout <<arr[dq.front()] << " ";
        }    
    }
    cout << endl;
}


int main(){
  
    int t;
    cin >> t;
    //deque<int>b{11,14,13,14};
    //print_deque(b);
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
              cin >> arr[i];
              
        printKMax(arr, n, k);
        t--;
      }
      return 0;
}
