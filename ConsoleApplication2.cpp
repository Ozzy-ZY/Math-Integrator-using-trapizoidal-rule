#include <iostream>
using namespace std;
int main() {
	long double x, y;
	cin >> x >> y;
	if (x == 0 && y == 0) {
		cout << "Origem";
	}
	else if (x > 0) {
		if (y == 0) {
			cout << "Eixo Y";
		}
		else if (y < 0) {
			cout << "Q4";
		}
		else {
			cout << "Q1";
		}
	}
	else if (x< 0)
	{
		if (y==0)
		{
			cout << "Eixo Y";
		}
		else if (y<0)
		{
			cout << "Q3";
		}
		else
		{
			cout << "Q2";
		}
	}
	else
	{
		cout << "Eixo X";
	}



}

