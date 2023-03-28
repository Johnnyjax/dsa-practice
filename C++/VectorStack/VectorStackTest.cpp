#include <iostream>
#include <string>
#include "VectorStack.h"

using namespace std;
int main() {
	VectorStack stack;
	string s;
	// to be or not to - be - - that - - - is
	while (cin >> s) {
		if (s == "-")
			cout << stack.pop() << endl;
		else
			stack.push(s);
	}
	return 0;
}