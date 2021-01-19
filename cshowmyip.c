#include <stdio.h>
#include <stdlib.h>
int main()
{
   system("clear");
   printf("==========================================\n");
   printf(" \t     C Show My IP                      \n");
   printf("==========================================\n");
   printf("     Author : Rahat Khan Tusar(rkt)       \n");
   printf("    Github  : https://github.com/r3k4t    \n");
   printf("==========================================\n"); 
   printf("\n");
   system("curl https://ipinfo.io/json");
   printf("\n");
   return 0;
}
