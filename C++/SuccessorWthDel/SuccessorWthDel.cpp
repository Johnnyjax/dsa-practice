#include <iostream>
#include "SuccessorWthDel.h"

using namespace std;

int main() {
	cout << "Enter the number of elements: ";
	int N, p, q;
	cin >> N;
	SuccessorWthDel sd{ N };
	while (cin >> p) {
		sd.del(p);
		cout << sd.successor(p) << endl;
	}
}