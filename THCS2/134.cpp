#include <iostream>
using namespace std;

int n, m;
int check(int so)
{
  int sum = 0, tmp = so / 2;
  for (int i = 2; i < tmp; ++i)
  {
    if (so % i == 0)
    {
      sum = sum + i + so / i;
      tmp = so / i;
    }
    if (sum >= m)
      return 0;
  }
  if (m == sum + 1)
    cout << m << " ";
  return 0;
}

int main()
{
  cin >> n;
  for (int i = 1; i <= n; ++i)
  {
    if (i % 2 == 0)
    {
      m = i;
      check(i);
    }
  }
}