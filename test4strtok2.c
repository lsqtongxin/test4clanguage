#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="- This, a sample string.";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str," .,-");
  int i = 0;
  printf ("the %d result string \"%s\" \n",i,str);
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " .,-");
    i++;
    printf ("the %d result string \"%s\" \n",i,str);
  }

  printf ("the last result string \"%s\" \n",str);

  for(int i=0;i<strlen(str);i++){
    printf ("the char is %c\n",str[i]);
  }

  return 0;
}
