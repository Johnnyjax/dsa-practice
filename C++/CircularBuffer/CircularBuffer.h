
template <typename T>
class CircularBuffer {
private:
	T* buffer;
	int size;
	int head, tail;
	int count;

public:
	CircularBuffer(int N) {
		buffer = new T[N];
		size = N;
		head = tail = count = 0;
	}

	~CircularBuffer() {
		delete buffer;
	}

	bool isFull() {
		return count == size;
	}

	bool isEmpty() {
		return count == 0;
	}

	void push(T value) {
		if (isFull()) {
			pop();
		}
			
		buffer[head] = value;
		head = (head + 1) % size;
		count++;
	}

	T pop() {
		if (isEmpty()) {
			return "";
		}
		T ret = buffer[tail];
		tail = (tail + 1) % size;
		count--;
		return ret;
	}
};