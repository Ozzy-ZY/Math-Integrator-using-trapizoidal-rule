#include <iostream>
using namespace std;
int main() {
	long double x, y;
	cin >> x >> y;
	if (x== 0 && y==0) {
		cout << "origin point";
	}
	else if (x > 0) {
		if (y == 0) {
			cout << "Y axis";
		}
		else if (y < 0) {
			cout << "Q4";
		}
		else {
			cout << "Q1";
		}
	}
	else if (y > 0) {
		if (x == 0) {
			cout << "X axis";
		}
		else if (x < 0) {
			cout << "Q2";
		}
		else {
			cout << "Q1";
		}
	}
	else if (x < 0 && y < 0) {
		cout << "Q3";
	}


}

