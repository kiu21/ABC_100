//D ..(Double Dots)

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;
vector<int> to[100005];

int main()
{
  ll n, m;
  cin >> n >> m;
  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    --a;
    --b;                //配列番号にあわせる
    to[a].push_back(b); //ジャグ配列
    to[b].push_back(a);
  }

  queue<int> q;
  vector<int> dist(n, INF); //距離
  vector<int> pre(n, -1);   //親
  dist[0] = 0;
  q.push(0);
  while (!q.empty())
  {
    int v = q.front();
    q.pop();
    for (int u : to[v])
    {
      if (dist[u] != INF)
        continue;
      dist[u] = dist[v] + 1;
      pre[u] = v;
      q.push(u);
    }
  }

  cout << "Yes" << endl;
  rep(i, n)
  {
    if (i == 0)
      continue;
    int ans = pre[i];
    ans++;
    cout << ans << endl;
  }

  return 0;
}