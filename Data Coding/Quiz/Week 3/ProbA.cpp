#include <stdio.h>

int main()
{
  int t = 0, n = 0;
  long long int total = 0;
  size_t p[10000], q[10000];
  scanf("%d", &t);
  for(int x = 1; x <= t; x++)
  {
    scanf("%d", &n);
    for(int y = 0; y < n; y++)
    {
      scanf("%ld", &p[y]);
    }
    for(int dx = 0; dx < n; dx++)
    {
      scanf("%ld", &q[dx]);
    }
    for(int dy = 0; dy < n; dy++)
    {
      total = total + p[dy] * q[dy];
    }
    printf("Case #%d: %lld\n", x, total);
    total = 0;
  }
}
