#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{

  int n;
  cin >> n;
  vector<int> m(n + 1, 0);
  for (int i = 2; i <= n; i++)
  {
    int a;
    cin >> a;
    m[a]++;
  }
  for (int i = 1; i <= n; i++)
  {
    cout << m[i] << endl;
  }
  return 0;
}