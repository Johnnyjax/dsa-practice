#pragma once

template <typename Item, size_t N>
class RandomizedQueue
{
public:
	RandomizedQueue() {
		items = new Item[N];
		q_size = head = tail = 0;
	}

	~RandomizedQueue() {
		delete items;
	}

	bool isEmpty() {
		return q_size == 0;
	}

	bool isFull() {
		return q_size == N;
	}

	int size() {
		return q_size;
	}

	void enqueue(Item item) {
		if (isFull()) {
			throw std::overflow_error("Queue Overflow");
		}
		items[head] = item;
		head = (head + 1) % N;
		q_size++;
	}

	Item dequeue() {
		if (isEmpty()) {
			throw std::underflow_error("Queue Underflow");
		}
		int random_idx = (rand() % size()) + tail;
		Item ret_item = items[random_idx];
		for (int i = tail; i <= random_idx - 1; i++) {
			items[i + 1] = items[i];
		}
		tail = (tail + 1) % N;
		q_size--;
		return ret_item;
	}

	Item sample() {
		if (isEmpty()) {
			throw std::underflow_error("Queue Underflow");
		}

		Item rand_item = (rand() % head - tail + 1) + tail;
		return items[rand_item];
	}
private:
	Item* items;
	int q_size;
	int head, tail;
};

