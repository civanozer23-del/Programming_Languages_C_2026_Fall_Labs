#include <stdio.h>
int is_prime(int n) {
  if (n < 2) {
    return 0;
  }
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}
int main() {
  int n;

  printf("enter n:");
  scanf("%d", &n);

  if (n < 2) {
    printf("error: n must be at least 2.\n");
  } else {
    printf("prime numbers: ");
    for (int i = 2; i <= n; i++) {
      if (is_prime(i)) {
        printf("%d ", i);
      }
    }
    printf("\n");
  }
  return 0;
}