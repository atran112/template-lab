#include <iostream>
using namespace std;

int main () {
	for (unsigned i = 0; i < 101; ++i) {
        	if (i % 4 == 0 && i % 6 == 0) {
  	        	cout << "fizzbuzz" << endl;
       		}
        	else if (i % 4 == 0) {
            		cout << "fizz" << endl;
        	}
        	else if (i % 6 == 0) {
            		cout << "buzz" << endl;
        	}
        	else {
            		cout << i << endl;
		}
	}        	
}
