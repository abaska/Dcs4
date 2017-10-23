#include <iostream>
#include <string>

using namespace std;
int main() {
	for (int i = 0; i < 999; i++) {
		cout << "wanna play? (y)/(n)";
		string guess = "";
		getline(cin, guess);
		if (guess == "y" || guess == "Y") cout << "Thats Great :D" << endl;
		else if (guess == "n" || guess == "N") cout << "Well Fuck You ! " << endl;
		else(cout << "Read the fucking two letters above" << endl);
	}
}
