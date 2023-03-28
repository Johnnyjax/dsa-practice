#pragma once
#include <stdexcept>

template <typename T, size_t N>
class StackQueue {
private:
	class Stack {
	private:
		T* stack;
		int index;
	public:
		Stack() {
			stack = new T[N];
			index = 0;
		}

		~Stack() {
			delete stack;
		}

		bool isEmpty() {
			return index == 0;
		}

		bool isFull() {
			return index == N;
		}

		int size() {
			return index;
		}

		void push(T value) {
			if (isFull()) {
				throw std::overflow_error("Stack overflow");
				return;
			}
			stack[index++] = value;
		}

		T pop() {
			if (isEmpty()) {
				throw std::underflow_error("Stack underflow");
				return "";
			}
			return stack[--index];
		}
	};

private:
	Stack front;
	Stack back;

public:
	bool isEmpty() {
		return (back.size() + front.size()) == 0;
	}

	bool isFull() {
		return (back.size() + front.size()) == N;
	}

	int size() {
		return (back.size() + front.size());
	}

	void enqueue(T value) {
		if (isFull()) {
			throw std::overflow_error("Queue overflow");
			return;
		}
		back.push(value);
	}

	T dequeue() {
		if (isEmpty()) {
			throw std::overflow_error("Queue underflow");
			return "";
		}
		if (front.isEmpty()) {
			while (!back.isEmpty()) {
				T value = back.pop();
				front.push(value);
			}
		}
		return front.pop();
	}
}; 