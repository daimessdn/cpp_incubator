#include <iostream>

using namespace std;

int main() {

	string command;

	cout << ">> ";
	cin >> command;

	while (command != "exit()") {
		cout << "<< " << command << endl;

		cout << "<< ";
		cin >> command;
	}

	return 0;

}