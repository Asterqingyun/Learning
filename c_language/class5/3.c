#include<stdio.h>
void PrintNear(char letter){
	if(letter>='c'&&letter<='x'){
		printf("%c %c %c %c %c",letter-2,letter-1,letter,letter+1,letter+2);
	}
	else if(letter=='a'){
		printf("%c %c %c %c %c",'y','z','a','b','c');
		}
	
	else if(letter=='b'){
		printf("%c %c %c %c %c",'z','a','b','c','d');
		}
	
	else if(letter=='y'){
		printf("%c %c %c %c %c",'w','x','y','z','a');
		}
	else if(letter=='z'){
		printf("%c %c %c %c %c",'x','y','z','a','b');
}
}
int main(){
	char letter;
	letter=getchar();
	PrintNear(letter);
}	
