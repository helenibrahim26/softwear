#include <iostream>
using namespace std;
int main() {
	cout << "enter msrk" << endl;
	int m;
	int v = 0;
	int w = 0;
	double x = 0, y = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> m;
		if (m < 50)
		{
			cout << "fail" << endl;

			v = m + v;
			x++;
		}
		else {
			cout << "pass" << endl;
			w = m + w;
			y++;

		}

	}

	cout << "avg" << v / x << endl;
	cout << "pass" << w / y << endl;
}