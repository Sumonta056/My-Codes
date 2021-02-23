#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	
		double A; cin >> A;
		

    cout<<showbase<<hex<<left<<nouppercase<<long(A) ;

    // showbase  = 0x
    // hex long converting decimal to hex
    //left shifting right or left
    // uppercase not allowed 0X vs 0x



	}

