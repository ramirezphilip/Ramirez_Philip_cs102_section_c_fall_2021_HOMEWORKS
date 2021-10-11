#include <stdio.h>

int main(void) {
	int mins;
	int minute;
	int hour;
	printf("Please give a number of minutes:");
	scanf("%d", &mins);
	hour = mins/60;
	minute = mins - 60*hour;
	printf("%d hour(s) & %d minute(s)\n", hour, minute);

return(0);
}
