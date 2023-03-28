#include <iostream>
#include <string>
#include "StackWithMax.h"

using namespace std;
int main() {
	StackWithMax<int, 10> stack;
	string s;
	// to be or not to - be - - that - - - is
	while (cin >> s) {
		if (s == "-")
			cout << stack.pop() << endl;
		else if (s == "*")
			cout << "Max: " << stack.max() << endl;
		else
			stack.push(std::stoi(s));
	}
	return 0;
}