#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
int main(){
int temp=UPPER;
printf("celsius\tfahrenheit\n");
for(;temp>=LOWER;temp=temp-STEP){
int new_temp;
new_temp=temp*1.8+32;
printf("%d\t%d\n",temp,new_temp);
}
}
