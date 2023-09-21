#include <bits/stdc++.h> 
using namespace std;
const int N = 100005;
int t, n, q, x, y, z;
int a[N], b[N];
int cnt[N];
int f[N];
int find(int x) {
  if (f[x] == x) return x;
  return f[x] = find(f[x]);
}
int main() {
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      b[i] = a[i];
      cnt[i] = 1;
      f[i] = i;
    }
    sort(b + 1, b + n + 1);
    int m = unique(b + 1, b + n + 1) - b - 1;
    for (int i = 1; i <= n; i++) {
      a[i] = lower_bound(b + 1, b + m + 1, a[i]) - b;
    }
    cin >> q;
    while (q--) {
      cin >> x >> y;
      if (x == 1) {
        int u = find(y), v = find(z);
        if (u == v) continue;
        if (cnt[u] > cnt[v]) swap(u, v);
        f[u] = v;
        cnt[v] += cnt[u];
      } else if (x == 2) {
        cout << cnt[find(y)] << endl;
      } else if (x == 3) {
        int l = 1, r = n;
        while (l < r) {
          int mid = (l + r) / 2;
          if (b[a[mid]] >= y) r = mid;
          else l = mid + 1;
        }
        cout << r << endl;
      }
    }
  }
  return 0;
}
