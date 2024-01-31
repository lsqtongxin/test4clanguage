#include<stdio.h>
extern int x,y;
int foo(int a,int b);
__attribute__((constructor)) void a(){
    printf("hello\n");
}
__attribute__((destructor)) void b(){
    printf("world\n");
}
void main(){
    atexit(b);
    printf("%d + %d = %d\n",x,y,foo(x,y));
}
