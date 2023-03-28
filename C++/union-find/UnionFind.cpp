#include <iostream>
#include "UnionFind.h"

using namespace std;

int main() {
	cout << "Enter the number of elements: ";
	int N, p, q;
	cin >> N;
	UnionFind uf{ N };
	while (true) {
		cin >> p;
		cin >> q;
		if (!uf.connected(p, q)) {
			uf.union_(p, q);
			cout << p << " " << q << endl;
		}

	}
}