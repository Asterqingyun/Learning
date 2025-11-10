#include<stdio.h>
int main(){
int nl=0;
char a;
a=getchar();
while(a!=EOF){
if (a=='\n'){
nl++;}
a=getchar();
}
printf("we have changed lines for %d times",nl);
}
