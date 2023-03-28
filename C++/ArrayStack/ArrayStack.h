#include <string>

class ArrayStack {
private:
	std::string* values;
	int size;
	int n;
public:
	ArrayStack(int N) {
		values = new std::string[N];
		n = 0;
		size = N;
	}

	bool isEmpty() {
		return (n == 0);
	}

	bool isFull() {
		return (n == size);
	}

	void push(std::string val) {
		if (!isFull()) {
			values[n++] = val;
		}
	}

	std::string pop() {
		if (isEmpty())
			return "";
		return values[--n];
	}
};