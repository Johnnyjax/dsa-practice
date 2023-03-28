#include <iostream>

template <typename T>
class ArrayQueue {
private:
	T* queue;
	int size;
	int head, tail, count;

public:
	ArrayQueue(int N) {
		queue = new T[N];
		size = N;
	}
	
	~ArrayQueue() {
		delete queue;
	}

	bool isFull() {
		return count == size;
	}

	bool isEmpty() {
		return count == 0;
	}

	void enqueue(T val) {
		if (isFull()) {
			std::cout << "Queue is full" << std::endl;
			return;
		}
		queue[head] = val;
		head = (head + 1) % size;
		count++;
	}

	T dequeue() {
		if (isEmpty()) {
			std::cout << "Queue is Empty" << std::endl;
			return "";
		}
		else {
			T retval = queue[tail];
			tail = (tail + 1) % size;
			count--;
			return retval;
			
		}
	}
};