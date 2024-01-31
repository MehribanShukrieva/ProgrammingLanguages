#include <stdio.h>
int main() {

  int i, n;

  // set first and second terms
  int t1 = 0, t2 = 1;

  // set the next term 
  int nextTerm = t1 + t2;

  // get number of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print other terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}

