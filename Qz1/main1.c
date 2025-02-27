
#include <stdio.h>

int main() {
  int i =3101;
  int addtional = i - 1500;
  if ( additional <= 0) {
    printf("70元\n");
  } else if (abbitional <= 100) {
    printf("80元/n");
  } else {
      int count = abbitional / 100;
      int remainder = (abbitional % 100)?1:0;
      int sum = (count+remainder)* 10 + 70;
      printf("%d元\n",sum);
  }

  return 0;
}
