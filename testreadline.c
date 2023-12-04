#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
// gcc -o testreadline testreadline.c -lreadline
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("Myshell-nemu $ ");
  if(strlen(line_read)==0){
  	printf("this is a blank string, length is 0\n");
  }

  if (line_read && *line_read) {
    add_history(line_read);
  }
  return line_read;
}

int main(void)
{
    for (char *str; (str = rl_gets()) != NULL; ) {
	// 此时str是一个空串, "",但这不是NULL
    }
}
