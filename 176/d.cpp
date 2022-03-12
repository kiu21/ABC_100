//D Wizard in Maze

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int h, w;
  cin >> h >> w;
  int ch, cw, dh, dw;
  cin >> ch >> cw >> dh >> dw;
  vector<vector<string>> s(h, vector<string>(w));

  vector<int> cur(2) = {ch, cw};

  return 0;
}

//1
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main()
{
  int h, w;
  cin >> h >> w;
  int si, sj;
  cin >> si >> sj;
  int ti, tj;
  cin >> ti >> tj;
  --si;
  --sj;
  --ti;
  --tj;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  const int INF = 1e9;
  vector<vector<int>> dist(h, vector<int>(w, INF));
  deque<P> q; //ペア
  dist[si][sj] = 0;
  q.emplace_back(si, sj);
  while (!q.empty())
  {
    int i = q.front().first;
    int j = q.front().second;
    int d = dist[i][j];
    q.pop.front();

    rep(v, 4) //コスト0
    {
      int ni = i + di[v], nj = j + dj[v];
      if (ni < 0 || ni >= h || nj < 0 || nj >= 2) //枠外
        continue;
      if (s[ni][nj] == '#')
        continue;
      if (dist[ni][nj] <= d) //距離が更新できない
        continue;
      dist[ni][nj] = d;
      q.emplace_front(ni, nj);
    }

    for (int ei = -2; ei <= 2; ei++) //コスト1（魔法）
    {
      for (int ej = -2; ej < 2; ej++)
      {
        int ni = i + ei, nj = j + ej;
        if (ni < 0 || ni >= h || nj < 0 || nj >= w)
          continue;
        if (s[ni][nj] == '#')
          continue;
        if (dist[ni][nj] <= d + 1)
          continue;
        dist[ni][nj] = d + 1;
        q.emplace_back(ni, nj); //後ろから突っ込む
      }
    }
  }
  int ans = dist[ti][tj];
  if (ans == INF)
    ans = -1;
  cout << ans << endl;
  return 0;
}