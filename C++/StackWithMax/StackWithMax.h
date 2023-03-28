#pragma once
#include <stdexcept>

template <typename T, size_t N>
class StackWithMax {
private:
	T* stack;
	int index;
	int max_val;
public:
	StackWithMax() {
		stack = new T[N];
		index = 0;
		max_val = 0;
	}

	~StackWithMax() {
		delete stack;
	}

	bool isEmpty() {
		return index == 0;
	}

	bool isFull() {
		return index == N;
	}

	void push(T value) {
		if (isFull()) {
			throw std::overflow_error("Stack overflow");
		}
		stack[index++] = value;
	}

	T pop() {
		if (isEmpty()) {
			throw std::underflow_error("Stack underflow");
		}
		return stack[--index];
	}

	T max() {
		for (int i = 0; i < index; i++) {
			if (max_val < stack[i]) {
				max_val = stack[i];
			}
		}
		return max_val;
	}

};