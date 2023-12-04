#include <stdio.h> /* printf */

int main(void)
{
  printf("\033[0mNormal text\033[0m\n");
  printf("\033[31mRed text\033[0m\n");
  printf("\033[4mUnderlined text\033[0m\n");
  printf("\033[37;104mGray on light blue\033[0m\n");
  printf("\033[1;37;44mBright white on blue\033[0m\n");
  printf("\033[37;44;1mBright white on blue\033[0m\n");
  printf("\033[1;37;41mBright white on light red\033[0m\n");
  printf("\033[5;93mBlinking yellow\033[0m\n");
  return 0;
}
