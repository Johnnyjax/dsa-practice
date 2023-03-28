#include <string>
#include <iostream>

class Node {
public:
	std::string val;
	Node* next;

	Node(std::string initialVal) {
		val = initialVal;
		next = nullptr;
	}
};

void printList(Node* head) {
	Node* current = head;
	while (current != nullptr) {
		std::cout << current->val << std::endl;
		current = current->next;
	}
}

void recursePrintList(Node* head) {
	if (head == nullptr)
		return;
	std::cout << head->val << std::endl;
	recursePrintList(head->next);
}

bool linkedListFind(Node* head, std::string target) {
	Node* current = head;

	while (current != nullptr) {
		if (current->val == target)
			return true;
		current = current->next;
	}
	return false;
}

int main() {
	Node a("A");
	Node b("B");
	Node c("C");
	Node d("D");

	a.next = &b;
	b.next = &c;
	c.next = &d;

	recursePrintList(&a);
}