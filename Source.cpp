#include <iostream>
using namespace std;
int input;
int main() {
	cout << "Enter a number" << endl;
	cin >> input;
	for (int a = 0; a < input; a++) {
		for (int z = 0; z < input; z++)
			cout << "$";
		cout << endl;
	}
}