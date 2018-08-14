#include <iostream>
#include <string>
using namespace std;

string i1;
int main() {
	cin >> i1;
	cout << i1.at(0);
	for (int i = 1; i < i1.size(); i++) {
		if (i1.at(i) == '-') cout << i1.at(i + 1);
	}
	return 0;
}