#include <iostream>
#include <string>
using namespace std;

int main() {
	int counter1 = 0;
	int counter2 = 0;
	string  word;
	int i;
	cout << "Write your word: " << endl;
	cin >> word;
	char Mass[100];
	strcpy_s(Mass, word.c_str());
	for (i = 0; i <= word.length() - 1; i++) {
		if (Mass[i] == 'e') {
			counter1 += 1;
		}
		if ((Mass[i] == 'e') and (Mass[i + 1] != 'r')) {
			counter2 += 1;
		}
		//cout << i;
	}
	cout << "counter1: " << counter1 << endl;
	cout << "counter2: " << counter2 << endl;

}