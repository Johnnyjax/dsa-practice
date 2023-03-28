#include <string>

class LinkedListQueue {
private:
	class Node {
	public:
		std::string val;
		Node* next;

		Node(std::string value) {
			val = value;
			next = nullptr;
		}
	};

	Node* first = nullptr;
	Node* last = nullptr;

public:

	bool isEmpty() {
		return (first == nullptr);
	}
	void enqueue(std::string value) {
		Node* oldlast = last;
		last = new Node(value);
		last->next = nullptr;
		if (isEmpty()) {
			first = last;
			return;
		}
		oldlast->next = last;
	}

	std::string dequeue() {
		if (isEmpty()) {
			return "";
		}
		Node* firstCpy = first;
		first = first->next;
		return firstCpy->val;
	}
};