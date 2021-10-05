#include <stdio.h>

int main(){

float num[4];
int x;
float mean=0;
float sum=0;

printf("Enter your values:");

    for (x = 0; x <= 4; x++) {
scanf("%f", &num[x]);    
sum=sum + num[x];
  
}

int mode (float i[], int e){
    int maxVal = 0;
    int maxCount = 0;
    int a, n;

    for (a = 0; a < e; a++) {
        int count = 0;
    for (n = 0; n < e; n++) {
        if (i[n] == i[a]){
            count++; }
    }
    if (count > maxCount) {
        maxCount = count;
        maxVal = i[a];
    }
}
    return maxVal;
}
    int e = 5;
    for(int a=0; a < 5; a++) {
   /* scanf("%d", &num[a]);*/
}
mean=sum/5;
printf("mean = %f\n", mean);
printf("mode = %d\n", mode(num,e));

int p=0 , t=0 , temp=0;



for(p=0 ; p<5 ; p++) {
    for(t=0 ; t<5-1 ; t++) {
        if(num[t]>num[t+1])
{
        temp = num[t];
        num[t] = num[t+1];
        num[t+1] = temp;
}
}
}
    printf("median = %.0f\n", num[2]);



  return(0);
}
