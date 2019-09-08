#include <cstdio>
#include <vector>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> seq(n);
  for (int i = 0; i < n; ++i) scanf("%d", &seq[i]);

  int ret = 0;
  for (int i = 0; i+2 < n; ++i)
    if (seq[i] == 1 && seq[i+1] == 0 && seq[i+2] == 0)
      ++ret;

  printf("%d\n", ret);

  return 0;
}
