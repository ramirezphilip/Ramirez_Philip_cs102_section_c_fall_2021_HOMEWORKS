#include <stdio.h>

int main(void) {
	float a;
	int b;
	char c;
	printf("Please give a decimal, an interger, and a character (IN THAT ORDER :D):\n");
	scanf("%f", &a);
	scanf("%d", &b);
	scanf("%s", c);
	printf("Decimal: %d   Interger: %f   Character: %d\n", a, b, c);
	
return(0);
}

