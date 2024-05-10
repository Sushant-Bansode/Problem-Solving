#include <bits/stdc++.h>
using namespace std;
// #define long long long long

char solve()
{
  long long N;
  cin >> N;
  long long k = 26;
  long long freq = 1;
  while (N > k * freq)
  {
    N = N - (k * freq);
    freq = freq + 1;
  }

  long long ind = (N - 1) / freq;
  char ch = char(int('A') + ind);
  return ch;
}

int main()
{
  long long t;
  cin >> t;
  for (long long i = 1; i <= t; ++i)
  {
    char ch = solve();
    cout << "Case #" << i << ": " << ch << endl;
  }
  return 0;
}