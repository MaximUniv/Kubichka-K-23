#include <cassert>
#include <iostream>
#include <string>
using namespace std;

int Func(string word){
	int counter1 = 0;
	int counter2 = 0;
	int i;
	
	char Mass[100];
	strcpy_s(Mass, word.c_str());
	for (i = 0; i <= word.length() - 1; i++) {
		if (Mass[i] == 'o') {
			counter1 += 1;
		}
		if ((Mass[i] == 'o') and (Mass[i + 1] == 'o')) {
			counter2 += 1;
		}

	}
	cout << "o: " << counter1 << endl;
	cout << "oo: " << counter2 << endl;
	return counter1, counter2;
}

void Test1() {
	assert(Func("boom") == 1, 2);
	cout << "test1 done" << endl;
}
void Test2() {
	assert(Func("asdsad") == 0, 0);
	cout << "test2 done" << endl;
}



int main() {
	Test1();
	Test2();

	string  uword;
	cout << "Write your word: " << endl;
	cin >> uword;
	Func(uword);

}