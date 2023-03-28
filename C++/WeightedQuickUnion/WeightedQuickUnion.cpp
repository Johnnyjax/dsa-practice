#include <iostream>
#include "WeightedQuickUnion.h"

using namespace std;

int main() {
	cout << "Enter the number of elements: ";
	int N, p, q;
	cin >> N;
	WeightedQuickUnion uf{ N };
	while (cin >> p) {
		cin >> q;
		if (!uf.connected(p, q)) {
			uf.quickUnion(p, q);
			cout << p << " " << q << endl;
		}

	}
}