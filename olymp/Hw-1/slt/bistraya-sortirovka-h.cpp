#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void Swap( int &a, int &b )
{
  int tmp = a;

  a = b;
  b = tmp;
}

int abs( int a )
{
  if (a < 0)
    return -a;

  return a;
}

int min( int a, int b )
{
  if (a < b)
    return a;

  return b;
}
int main( void )
{
  vector<string> s;
  while (true)
  {
    string a, b;

    cin >> a >> b;
    if (a.empty() && b.empty())
      break;

    s.push_back(b);
  }

  sort(s.begin(), s.end());

  int size = s.size();

  for (int i = 0; i < size; i++)
    cout << i + 1 << ". " << s[i] << '\n';

  return 0;
}