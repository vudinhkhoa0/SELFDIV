#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;

  vector<int> ans;
  for (int i = l; i <= r; ++i) {
    ans.emplace_back(i);
    int tmp = i;
    while (tmp) {
      int d = tmp % 10;
      tmp /= 10;
      if (d == 0 || (i % d)) {
        ans.pop_back();
        break;
      }
    }
  }

  cout << ans.size() << '\n';
  for (int i = 0, n = ans.size(); i < n; ++i) {
    cout << ans[i] << " \n"[i == n - 1];
  }

  return 0;
}
