#include <stdio.h>

int main(void) {
	int y;
	scanf("%d",&y);
	if(((y%4==0)&&(y%100!=0))||(y%400==0))
	printf("%d it is a leap year",y);
	else
	printf("%d is not a leap year",y);
	// your code goes here
	return 0;
}
