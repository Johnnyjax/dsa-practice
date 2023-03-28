#include <iostream>
#include <string>
#include "ArrayQueue.h"

using namespace std;
int main() {
	ArrayQueue<std::string> queue(10);
	string s;
	// to be or not to - be - - that - - - is
	while (cin >> s) {
		if (s == "-")
			cout << queue.dequeue() << endl;
		else
			queue.enqueue(s);
	}
	return 0;
}