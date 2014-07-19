#include <stdio.h>
#define SIZE 10000
#define INF SIZE+1

void msort(int *list, int listc);

int
main(int argc, char *argv[]) {
  int i;
  int c[SIZE];

  for (i = 0; i < SIZE; i++) {
    c[i] = SIZE - i;
  }

  msort(c, SIZE);

  for (i = 0; i < SIZE; ++i) {
    printf("%d ", c[i]);
  }

  return 0;
}

void
merge(int *A, int p, int q, int r) {
  int n, i, j;
  int n1 = q - p, n2 = r - q + 1;
  int L[n1 + 1], R[n2 + 1];

  for (i = 0; i < n1; ++i)
    L[i] = A[p+i];
  L[i] = INF;

  for (i = 0; i < n2; i++)
    R[i] = A[q+i];
  R[i] = INF;

  i = j = 0;
  for (n = p; n < r + 1; ++n) {
    if (L[i] <= R[j]) {
      A[n] = L[i];
      i = i + 1;
    } else {
      A[n] = R[j];
      j = j + 1;
    }
  }
}

void
merge_sort(int *A, int p, int r) {
  int q;
  if (p < r) {
    q = (p + r + 1)/2;
    merge_sort(A, p, q - 1);
    merge_sort(A, q, r);
    merge(A, p, q, r);
  }
}

void
msort(int *A, int length) {
  merge_sort(A, 0, length - 1);
}
