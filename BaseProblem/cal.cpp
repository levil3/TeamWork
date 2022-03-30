#include<iostream>
using namespace std;

int cal(int a, int b, int x) {
	if (a > 1 && b == 0) {
		x = x / a;
	}
	if (a == 2 || x > 1) {
		x = x + 1;
	}
	return x;
}

int main() {
	cout << cal(1, 1, 0) << endl;
	cout << cal(1, 1, 2) << endl;
	cout << cal(2, 1, 0) << endl;
	return 0;
}