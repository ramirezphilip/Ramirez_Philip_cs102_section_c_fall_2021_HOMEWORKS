#include <stdio.h>
#include <string.h>

int main(){

int x,a;
char str[2][20],t[20];

printf("Enter 3 strings:\n");
    for(x=0;x<3;x++){
    scanf("%s",str[x]);
    }
    for(x=0;x<3;x++){
        for(a=x+1;a<3;a++){
            if(strcmp(str[x],str[a])>0){
    strcpy(t,str[x]);
    strcpy(str[x],str[a]);
    strcpy(str[a],t);
                }
            }
       }

printf("\n");
for(x=0;x<3;x++){
printf("%s\n",str[x]);
}

return(0);
}
