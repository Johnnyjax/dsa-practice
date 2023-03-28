#include <iostream>
#include <string>
#include "VectorQueue.h"

using namespace std;
int main() {
	VectorQueue queue;
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