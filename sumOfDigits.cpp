#include <iostream>

using namespace std;

int summ(int m) {
	if (m < 0) {
		m *= (-1);
	}
	if (m < 10) {
		return m;
	}
	else {
		return summ(m / 10) + m % 10;
	}
}

int main()
{
	cout << "Enter your number" << endl;
	int m;
	cin >> m;
	cout << summ(m) << endl;
}