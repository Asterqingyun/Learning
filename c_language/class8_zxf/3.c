#include<stdio.h>
#define MAX 100
void reverse(char s[],int length){
    for(int i=0;i<length-i-1;i++){
        int temp=s[i];
        s[i]=s[length-i-1];
        s[length-i-1]=temp;
    }
}
char tranverse(int b,int remain){
    if(remain<=9){
        return remain+'0';        
    }
    else{
        return 'a'+remain-10;
    }
}
void itob(int n,char s[],int b){
   int i=0;
   if (n==0){

       s[i]='0';
       i++;
   }
   for(;n>0;i++){
       s[i]=tranverse(b,n%b);
       n/=b;
   }
   reverse(s,i);
    s[i]='\0';
}
void print_s(char s[]){
	for(int i=0;s[i]!='\0';i++){
		printf("%c",s[i]);
	}
}
int main(){
	int n,b;
	char s[MAX];
	while(scanf("%d %d",&n,&b)==2){
		itob(n,s,b);
		print_s(s);
		printf("\n");
		s[0]='\0';
	}
}

