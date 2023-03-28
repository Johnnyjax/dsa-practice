
class WeightedQuickUnion {
public:
	WeightedQuickUnion(int N) {
		id = new int[N];
		sz = new int[N];

		for (int i = 0; i < N; i++) {
			id[i] = i;
			sz[i] = 1;
		}
	}

	~WeightedQuickUnion() {
		delete id;
		delete sz;
	}

	int root(int i) {
		while (id[i] != i) {
			id[i] = id[id[i]];
			i = id[i];
		}
		return i;
	}

	void quickUnion(int p, int q) {
		int rootP = root(p);
		int rootQ = root(q);

		if (rootP == rootQ) return;
		if (sz[rootP] < sz[rootQ]) {
			id[rootP] = rootQ;
			sz[rootQ] += sz[rootP];
		}
		else {
			id[rootQ] = rootP;
			sz[rootP] = rootQ;
		}
	}

	bool connected(int p, int q) {
		return root(p) == root(q);
	}



private:
	int* id;
	int* sz;
};