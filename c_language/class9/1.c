#define ERR '0'
#define MAX 100000
#include <ctype.h>
#include<stdio.h>
int pop(int stack[],int *space){
    if(*space==0){
        return ERR;
    }
    *space=(*space)-1;
    printf("I pop %d\n",stack[*space]);
    return stack[*space];
}
void push(int stack[],int *space,int num){
    stack[*space]=num;
    *space=(*space)+1;
    printf("I push %d\n",num);
}
int is_ope(char i){
    if ((i=='+')||(i=='-')||(i=='*')||(i=='/')||(i=='%')||(i=='&')||(i=='|')||(i=='^')||(i=='<')||(i=='>')){
        return 1;
    }
    else{
        return 0;
    }
}
int nibolan(char s[]){
    int num=0;
    int i=0;
    int stack[MAX]={0};
    int sign=1;
    int space=0;
    int num1,num2;
    while(s[i]!='\0'){
    if(s[i]=='-'&&isdigit(s[i+1])){
        sign=-1;
        i++;
    }
    if(isdigit(s[i])){
    while(isdigit(s[i])){
        num=num*10+s[i]-'0';
        i++;
    }
    push(stack,&space,sign*num);
    num=0;
    sign=1;
    }
    if(isspace(s[i])){
        i++;
    }
    if(is_ope(s[i])){
	printf("I am in the cycle,the space is %d\n",space);
        if((space)<2){
            return ERR;
        }
        switch (s[i]){
            case '+':
                
                 num1=pop(stack,&space);
                 num2=pop(stack,&space);
                push(stack,&space,num1+num2);
                break;
            case '-':
                 num1=pop(stack,&space);
                 num2=pop(stack,&space);
                push(stack,&space,-num1+num2);
                break;
            case '*':
                num1=pop(stack,&space);
                 num2=pop(stack,&space);
                push(stack,&space,num2*num1);
                break;
            case '/':
                 num1=pop(stack,&space);
                 num2=pop(stack,&space);
                push(stack,&space,num2/num1);
                break;
            case '%':
                 num1=pop(stack,&space);
                 num2=pop(stack,&space);
                push(stack,&space,num2%num1);
                break;
            case '&':
                 num1=pop(stack,&space);
                 num2=pop(stack,&space);
                push(stack,&space,num1&num2);
                break;
            case '|':
                 num1=pop(stack,&space);
                 num2=pop(stack,&space);
                push(stack,&space,num1|num2);
                break;
            case '^':
                num1=pop(stack,&space);
                 num2=pop(stack,&space);
                push(stack,&space,num1^num2);
                break;
            case '<':
                 num1=pop(stack,&space);
                 num2=pop(stack,&space);
                push(stack,&space,num2<<num1);
                break;
            case '>':
                 num1=pop(stack,&space);
                 num2=pop(stack,&space);
                push(stack,&space,num2>>num1);
                break;
        }
        if(s[i]=='>'||s[i]=='<'){
            i+=2;
        }
        else{
            i++;
        }
    }
    
    }
    if((space)!=1){
        return ERR;
    }
    return stack[space-1];
    
}
int main(){
    char s[MAX];
    int result;
    while(scanf("%s",s)==1){
    result=nibolan(s);
    if(result==ERR){
        printf("err\n");
    }
    else{
        printf("%d\n",result);
    }
    
}

}
