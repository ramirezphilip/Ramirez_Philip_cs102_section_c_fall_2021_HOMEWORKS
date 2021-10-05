#include <stdio.h>
#define LINES_PER_CHAR 6

int main() {

const char* alphabet[][LINES_PER_CHAR]={

/*A*/{"  ###  "," #   # ","#######","#     #","#     #","#     #"},
/*B*/{"###### ","#      #","###### ","#      #","#      #","###### "},
/*E*/{"#######","#     ","#######","#      ","#      ","#######"},
/*O*/


};
int x,a;
char character[100];
int characterval=0;

printf("Enter capitol letters only:");
scanf("%s", character);

	for (x = 0; x < LINES_PER_CHAR; x++){
	for (a = 0; a < character[a]; a++){
	printf("%s  ", alphabet[character[a] - 'A'][x]);
	}
	printf("\n");
	}

return(0);

}
