#include <stdio.h>

void insertion_sort(int *list, int listc);

int
main(int argc, char *argv[]) {
  int i;
  int c[] = { 5, 2, 4, 6, 1, 3 };

  insertion_sort(c, 6);

  for (i = 0; i < 6; ++i) {
    printf("%d ", c[i]);
  }

  return 0;
}

void
insertion_sort(int *list, int listc) {
  int i, j, key;

  for (j = 1; j < listc; ++j) {
    key = list[j];
    i = j - 1;
    while (i >= 0 && list[i] > key) {
      list[i+1] = list[i];
      i = i - 1;
    }
    list[i+1] = key;
  }
}
