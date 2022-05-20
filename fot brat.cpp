#include <iostream>
#include <string>
using namespace std;

class cat {
public:
	string noise;
	
};
class dog {
public:
	string noise;
};
int main() {
	dog firstdog;
	cat firstcat;
	
	cin >> firstcat.noise;
	cin >> firstdog.noise;
	cout << firstdog.noise << endl;
	cout << firstcat.noise << endl;
	return 0;
}

