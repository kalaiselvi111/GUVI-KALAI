#include <stdio.h>

int main(void) {
   char a;
   scanf("%c",&a);
   if((a>=65&&a<=91)||(a>=97&&a<=121))
   	printf("alphabet");
   	else
   	printf("not an alphabet");
   return 0;
}
