
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
	cat firstcat;
	dog firstdog;
	firstcat.noise = "meuuw";
	firstdog.noise = "gav gav";
	cout << firstdog.noise << endl;
	cout << firstcat.noise << endl;
	return 0;
}
  

