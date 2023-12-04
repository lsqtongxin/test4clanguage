#include <stdio.h>

FILE *log_fp = NULL;

void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    log_fp = fp;
    printf("log_file is not null");
  }else {
    printf("log_file is null\n");
    fputc('f',log_fp);   
    fputc('u',log_fp);   
    fputc('c',log_fp);   
    fputc('k',log_fp);
    fputc(' ',log_fp);
    fprintf(log_fp,"you\n");
  }
}
void main(){
   init_log(NULL);
}
