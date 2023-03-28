#include <iostream>
#include "RandomizedQueue.h"
#include <string>

int main() {
	RandomizedQueue<std::string, 10> queue;
	std::string s;
	// to be or not to - be - - that - - - is
	while (std::cin >> s) {
		if (s == "-")
			std::cout << queue.dequeue() << std::endl;
		else
			queue.enqueue(s);
	}
	return 0;
}