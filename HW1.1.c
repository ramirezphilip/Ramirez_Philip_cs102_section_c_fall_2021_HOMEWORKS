#include <stdio.h>

int main()

{

float num[4];
int x;
float median=0, mode=0, mean=0;
float sum=0;

printf("Enter your values:");
for (x = 0; x <= 4; x++) {
    scanf("%f", &num[x]);
    sum=sum + num[x];
    mean=sum/4;
   /* printf("%f\n", num[x]);*/

}
   
    
printf("%f\n", mean);

return(0);

}

