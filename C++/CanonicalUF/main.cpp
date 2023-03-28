#include <iostream>
#include "CanonicalUF.h"

using namespace std;

int main() {
	cout << "Enter the number of elements: ";
	int N, p, q;
	cin >> N;
	CanonicalUF uf{ N };
	while (cin >> p) {
		cin >> q;
		if (!uf.connected(p, q)) {
			uf.quickUnion(p, q);
			cout << p << " " << q << endl;
		}
		for (int i = 0; i < N; i++) {
			cout << i << ": " << uf.largest(i) << ", ";
		}
		cout << endl;
	}
}