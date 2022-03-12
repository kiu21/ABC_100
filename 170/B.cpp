//Crane and Turtle

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;
  bool a = false;
  for (int i = 0; i < (x + 1); i++)
  {
    if (2 * i + 4 * (x - i) == y)
    {
      a = true;
      break;
    }
  }
  if (a)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else
  {
    cout << "No" << endl;
    return 0;
  }
}
