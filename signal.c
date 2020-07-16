#include <stdio.h>
#include <signal.h>

sighandler_t ret;

void sighandl(int arg){
  printf("---------SIGINT-----------\n");
  signal(SIGINT,ret);
}

int main(){
  ret = signal(SIGINT,sighandl);
  while(1);
  return 0;
}
