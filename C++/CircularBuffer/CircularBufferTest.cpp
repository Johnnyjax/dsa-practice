#include <iostream>
#include <string>
#include "CircularBuffer.h"

using namespace std;
int main() {
	CircularBuffer<string> buffer(10);
	string s;
	// to be or not to - be - - that - - - is
	while (cin >> s) {
		if (s == "-")
			cout << buffer.pop() << endl;
		else
			buffer.push(s);
	}
	return 0;
}