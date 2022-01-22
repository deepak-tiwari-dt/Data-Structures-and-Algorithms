/**
 *    author: deepaktiwari21
 *    created: 22.01.2022 1:16:29
 **/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void setIO()
{
  fast;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

int main()
{
  setIO();
  int T;
  cin >> T;
  while (T--)
  {
    int N, C;
    cin >> N >> C;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
      int X;
      cin >> X;
      sum += X;
    }
    if (sum <= C)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
