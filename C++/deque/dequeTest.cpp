#include <iostream>
#include "deque.h"

int main() {
    Deque<int, 5> dq;

    // Adding elements
    dq.addFirst(3);
    dq.addLast(7);
    dq.addFirst(5);
    dq.addLast(1);

    // Removing elements
    std::cout << dq.removeFirst() << std::endl; // Output: 5
    std::cout << dq.removeLast() << std::endl; // Output: 1
    std::cout << dq.removeFirst() << std::endl; // Output: 3
    std::cout << dq.removeLast() << std::endl; // Output: 7

    // Size and empty checks
    std::cout << "Size: " << dq.size() << std::endl; // Output: 0
    std::cout << "Empty: " << dq.isEmpty() << std::endl; // Output: 1

    // Adding elements again
    dq.addFirst(6);
    dq.addLast(4);
    dq.addFirst(2);
    dq.addLast(4);
    dq.addFirst(2);

    // Full check
    std::cout << "Full: " << dq.isFull() << std::endl; // Output: 1

    return 0;
}





