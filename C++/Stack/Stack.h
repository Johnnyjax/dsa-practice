#include <string>

class Stack {
private:
	class Node {
	public:
		std::string value;
		Node* next;
		Node(std::string nodeVal) {
			value = nodeVal;
			next = nullptr;
		}
	};
	Node* first = nullptr;
public:
	bool isEmpty() {
		return (first == nullptr);
	}
	std::string pop() {
		if (isEmpty()) {
			return "";
		}
		Node* firstCpy = first;
		first = first->next;
		return firstCpy->value;
	}

	void push(std::string val) {
		Node* newNode = new Node(val);
		newNode->next = first;
		first = newNode;
	}
};