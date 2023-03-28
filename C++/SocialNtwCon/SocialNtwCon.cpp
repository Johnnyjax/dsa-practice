#include <iostream>
#include "SocialNtwCon.h"

using namespace std;

int main() {
	cout << "Enter the number of elements: ";
	int N, p, q;
	cin >> N;
	SocialNtwCon uf{ N };
	while (!(uf.isAllConnected())) {
		cin >> p;
		cin >> q;
		if (!uf.connected(p, q)) {
			uf.quickUnion(p, q);
			cout << p << " " << q << endl;
		}
	}
	cout << "Nodes are connected" << endl;
	return 0;
}