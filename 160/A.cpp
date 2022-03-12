#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  string s;
  cin >> s;

  bool a = false, b = false;
  if (s[2] == s[3])
    a = true;
  if (s[4] == s[5])
    b = true;

  if (a and b)
  {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}