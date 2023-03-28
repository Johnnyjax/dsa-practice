#include <string>
#include <vector>

class VectorQueue {
private:
	std::vector<std::string> queue;

public:
	bool isEmpty() {
		return queue.empty();
	}

	void enqueue(std::string val) {
		queue.push_back(val);
	}

	std::string dequeue() {
		if (queue.empty()) {
			return "";
		}
		std::string first = queue.front();
		queue.erase(queue.begin());
		return first;
	}
};