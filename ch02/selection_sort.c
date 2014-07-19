#include <stdio.h>

void selection_sort(int *list, int listc);

int
main(int argc, char *argv[]) {
  int i;
  int c[] = { 5, 2, 4, 6, 1, 3 };

  selection_sort(c, 6);

  for (i = 0; i < 6; ++i) {
    printf("%d ", c[i]);
  }

  return 0;
}

void
selection_sort(int *list, int listc) {
  int i, j, smallest, temp;

  for (i = 0; i < listc - 1; ++i) {
    smallest = i;
    for (j = i + 1; j < listc; ++j) {
      if (list[j] < list[smallest]) {
        smallest = j;
      }
    }
    temp = list[i];
    list[i] = list[smallest];
    list[smallest] = temp;
  }
}
