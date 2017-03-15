#include<stdio.h>
#include<stdlib.h>
int main()
{
  int p;
  p = fork();
  if (p == 0)
  {
    printf("Hola, soy el proceso hijo con ID %d \n", getpid());
    printf("el proceso hijo tiene prioridad %d \n", nice()); 
	  exit(0);
  }
  else
  {
    printf("Hola, soy el proceso padre con ID %d \n", getpid());
    printf("el proceso padre tiene prioridad %d \n",nice());
    wait(0);
  }
  puts("Fin \n");
}
