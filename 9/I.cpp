#include <bits/stdc++.h>

using namespace std;

const long long N = 2000010;
const long long ep = N / 2;

int mass1[N];
int mass2[N];

bool F(long long x) {
	if (x >= 0 && x <= N) {
		return true;
	}
	return false;
}

int main() {
	long long i, j, n, w;
	for (i = 0; i < N; ++i) {
		mass1[i] = N;
		mass2[i] = N;
	}


	cin >> n;
	vector<long long>v(n);
	for (i = 0; i < n; ++i) {
		cin >> v[i];
	}
	mass1[ep + v[0]] = 1;
	mass1[ep - v[0]] = 1;
	for (j = 1; j < n; ++j) {
		long long w = v[j];
		mass2[ep + w] = 1;
		mass2[ep - w] = 1;

		for (i = 0; i < N; ++i) {
			if (mass1[i] > 0) {
				mass2[i] = min(mass2[i], mass1[i]);
				if (F(i + w)) {
					mass2[i + w] = min(mass2[i + w], mass1[i] + 1);
				}
				if (F(i - w)) {
					mass2[i - w] = min(mass2[i - w], mass1[i] + 1);
				}
			}
		}
		swap(mass2, mass1);

	}
	if (mass1[ep] != N) {
		cout << mass1[ep];
	}
	else {
		cout << -1;
	}
	return 0;
}
