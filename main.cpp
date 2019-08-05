#include <iostream>
using namespace std;

void fizzbuzz(unsigned int);

int main () {

	unsigned int max_val = 101;
	fizzbuzz(max_val);
}

void fizzbuzz(unsigned int max_val) {

	for (unsigned i = 0; i < max_val; ++i) {
        	if (i % 4 == 0 && i % 6 == 0) {
  	          cout << "fizzbuzz" << endl;
       		}
        	else if (i % 4 == 0) {
            		cout << "fizz";
			          if (i % 5 == 0) {
				          cout << "bool";
			          }
			          cout << endl;
        	}
        	else if (i % 6 == 0) {
            		cout << "buzz";
			          if (i % 5 == 0) {
				          cout << "bool";
			          }
			          cout << endl;
        	}
		      else if (i % 5 == 0) {
			        cout << "bool" << endl;
		      }
        	else {
            	cout << i << endl;
		      }
	   }        	
}
