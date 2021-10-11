#include <stdio.h>

int main(void) {
	int penny;
	int nickel;
	int dime;
	int quarter;
	int coin;

	printf("Please give a number of coins:");

	scanf("%d", &coin);
		quarter = coin/25;
		dime = (coin - quarter*25)/10;
        	nickel = (coin - quarter*25 - dime*10)/5;
		penny = coin - quarter*25 - dime*10 - nickel*5;

	printf("Quarter(s): %d, Dime(s): %d, Nickel(s): %d, Penny(s): %d\n", quarter, dime, nickel, penny);

return(0);
}
