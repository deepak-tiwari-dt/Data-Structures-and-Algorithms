/**
 *    author: deepaktiwari21
 *    created: 27.01.2022 6:51:25
 *    Time complexity: O(1)
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T, Y, X, K, N, P, C;
  int ok;
  scanf("%d", &T);
  while (T--)
  {
    scanf("%d%d%d%d", &X, &Y, &K, &N);
    ok = 0;
    while (N--)
    {
      scanf("%d%d", &P, &C);
      if (K >= C && P >= X - Y)
        ok = 1;
    }
    puts(ok ? "LuckyChef" : "UnluckyChef");
  }
  return 0;
}