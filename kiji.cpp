#include <iostream>
using namespace std;
int main()
{
	int fib[100];
	int n;
	n = 4;
	fib[0] = 1;
	fib[1] = 2;
	for (int i = 2; i < n; ++i) {
		fib[i] = fib[i - 1] * fib[i - 2];
	}
	for (int i = 0; i < n; i++) {
		cout << fib[i] << " " << endl;
	}

}