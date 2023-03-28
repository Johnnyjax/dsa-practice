#include <iostream>

class QuickUnion {
public:
	QuickUnion(int N) {
		id = new int[N];
		for (int i = 0; i < N; i++) {
			id[i] = i;
		}
	}

	bool connected(int p, int q) {
		return root(p) == root(q);
	}

	void union_(int p, int q) {
		int rootp = root(p);
		int rootq = root(q);
		id[rootp] = rootq;
	}

	
private:
	int root(int n) {
		while (id[n] != n) {
			n = id[n];
		}
		return n;
	}
	int* id;
};