#pragma once
#include <stdexcept>
#include <iostream>

template <typename T, size_t N>
class Deque {
private:
	T* dq;
	int head, tail, size_;

public:
	Deque() {
		dq = new T[N];
		head = tail = size_ = 0;
	}

	~Deque() {
		delete dq;
	}

	int size() {
		return size_;
	}

	bool isEmpty() {
		return size_ == 0;
	}

	bool isFull() {
		return size_ == N;
	}

	void addFirst(T value) {
		if (isFull()) {
			throw std::overflow_error("Overflow error");
		}
		dq[head] = value;
		head = (head + 1) % N;
		size_++;
	}

	void addLast(T value) {
		if (isFull()) {
			throw std::overflow_error("Overflow error");
		}
		tail = (tail - 1 + N) % N;
		dq[tail] = value;
		size_++;
	}

	T removeFirst() {
		if (isEmpty()) {
			throw std::underflow_error("Underflow error");
		}
		head = (head - 1 + N) % N;
		size_--;
		return dq[head];
	}

	T removeLast() {
		if (isEmpty()) {
			throw std::underflow_error("Underflow error");
		}
		T value = dq[tail];
		tail = (tail + 1) % N;
		size_--;
		return value;
	}
};