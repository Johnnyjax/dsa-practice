#include <vector>

class UnionFind {
public:
	UnionFind(int N) {
		size = N;
		id = new int[N];
		for (int i = 0; i < N; i++) {
			id[i] = i;
		}
	}

	bool connected(int i, int j) {
		return id[i] == id[j];
	}

	void union_(int n, int m) {
		int ncpy = id[n];
		int mcpy = id[m];
		for (int i = 0; i < size; i++) {
			if (id[i] == ncpy) {
				id[i] = mcpy;
			}
		}
	}

private:
	int* id;
	int size;
};