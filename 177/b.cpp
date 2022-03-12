#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  string s, t;
  cin >> s;
  cin >> t;
  int s_size = s.size();
  int t_size = t.size();
  int ans = t_size;
  rep(i, t_size)
  {
    rep2(j, i, s_size)
    {
      if (t[i] == s[j])
      {
        ans--;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

//1
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string S, T;
  cin >> S >> T;

  //答えansを仮置きする。
  //これが十分に大きくないと不正解となるので、
  //この値なら絶対に正しい答えが出る、という値を仮置きすること
  int ans = T.size();

  //Sの何文字目から調べるかを全探索する
  for (int start = 0; start <= S.size() - T.size(); start++)
  {
    int diff = 0;
    for (int i = 0; i < T.size(); i++)
    {
      if (T[i] != S[start + i])
      {
        diff++;
      }
    }
    ans = min(ans, diff);
  }

  cout << ans << endl;
}
