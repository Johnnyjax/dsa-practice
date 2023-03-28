#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;
int main() {
	Stack stack;
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