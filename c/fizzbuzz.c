#include <stdio.h>

int main(int argc, char *argv[])
{
  int max = 100;
  char fizz[] = "fizz";
  char buzz[] = "buzz";
  int i;

  for (i = 0; i <= max; i++) {
    if (i % 3 == 0) {
      puts(fizz);
    } else if (i % 5 == 0) {
      puts(buzz);
    } else {
      printf("%d\n", i);
    }
  }
  return 0;
}
