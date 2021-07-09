#include <stdio.h>

int main() {
  long long a, b, x;
  scanf("%lld%lld%lld", &a, &b, &x);
  if (a > 0) {
    printf("%lld\n", b / x - (a - 1) / x);
  } else {
    printf("%lld\n", b / x + 1);
  }
  return 0;
}
