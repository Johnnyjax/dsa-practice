#include <iostream>
#include <string>
#include "ArrayStack.h"

using namespace std;
int main() {
	ArrayStack stack(10);
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