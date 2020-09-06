
#include <iostream>
using namespace std;
int main() {
	while (1) {

		int Dec = 0;
		char ch;
		cin.get(ch);
		while (ch != '0' && ch != '1') {
			cin.get(ch);
		}
		while (ch == '0' || ch == '1') {
			Dec *= 2;
			Dec += ch - '0';
			cin.get(ch);
		}
		cout << Dec << endl;
		cout << ('2' != '0' && '2' != '1');
	}
}