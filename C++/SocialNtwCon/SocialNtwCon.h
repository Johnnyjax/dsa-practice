class SocialNtwCon {
public:
	SocialNtwCon(int N) {
		id = new int[N];
		sz = new int[N];
		allConnected = false;
		n = N;
		for (int i = 0; i < N; i++) {
			id[i] = i;
			sz[i] = 1;
		}
	}

	~SocialNtwCon() {
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
			sz[rootP] += sz[rootQ];
		}
		if (sz[rootP] == n || sz[rootQ] == n) {
			allConnected = true;
		}
	}

	bool isAllConnected() {
		return allConnected;
	}

	bool connected(int p, int q) {
		return root(p) == root(q);
	}



private:
	int* id;
	int* sz;
	int n;
	bool allConnected;
};