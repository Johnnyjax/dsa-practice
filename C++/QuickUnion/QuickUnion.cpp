#include <iostream>
#include "QuickUnion.h"

using namespace std;

int main() {
	cout << "Enter the number of elements: ";
	int N, p, q;
	cin >> N;
	QuickUnion uf{ N };
	while (true) {
		cin >> p;
		cin >> q;
		if (!uf.connected(p, q)) {
			uf.union_(p, q);
			cout << p << " " << q << endl;
		}

	}
}