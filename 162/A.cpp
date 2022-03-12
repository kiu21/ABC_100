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

  if (s.find("7") != string::npos) //findは()の文字列がなかったらnposを返す
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}