#include <bits/stdc++.h>

using namespace std;

long long res(long long t, long long k, vector<long long>& v, long long start_time[]) {
  long long otv = 0;
  for (long long i = 0; i < k; ++i) {
    otv += (t - start_time[i]) / v[i];
  }
  return otv;
}

int main() {
  ios::sync_with_stdio(false);
  long long n, k, l, r, mid, copies = 1, time = 0;
  cin >> n >> k;
  ++n;
  vector<long long> op(k);
  for (long long i = 0; i < k; i++) {
    cin >> op[i];
  }
  sort(op.begin(), op.end());
  long long start_time[10];
  for (long long i = 0; i < 10; ++i) {
    start_time[i] = -1;
  }
  start_time[0] = 0;
  while (copies < min(n, k)) {
    time += 1;
    long long i = 0;
    while (i<copies) {
      if (((time - start_time[i]) % op[i] == 0) && (time != start_time[i])) {
        if (copies < k) {
          start_time[copies] = time;
          copies += 1;
        }
      }
      i += 1;
    }
  }
  if (copies >= n) {
    cout << time;
  } else {
    l = 0;
    r = n * op[0];
    while (l + 1 < r) {
      mid = (r + l) / 2;
      if (res(mid, k, op, start_time) >= n - 1) {
        r = mid;
      } else
        l = mid;
    }
    cout << r;
  }
};
