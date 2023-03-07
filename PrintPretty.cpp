#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout << resetiosflags(ios::uppercase|ios::scientific);
         cout<<hex
        <<setiosflags(ios::showbase|ios::left )<<setw(0)<< (unsigned long)A<< endl;
        
        
        
        cout<<setiosflags(ios::fixed);
        cout<<resetiosflags(ios::showbase)<<setw(0xf)<<setfill('_')<<setprecision(2)
        <<setiosflags(ios::showpos)<<dec<<B<<endl;
        
        
        cout << resetiosflags(ios::fixed|ios::showpos);
        cout << setiosflags (ios::scientific | ios::uppercase) << setprecision(9);
        cout << C <<endl;



	}
	return 0;

}       