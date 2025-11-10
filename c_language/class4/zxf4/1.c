#include <stdio.h>
int main(){
	char c;
	int nl,nt,ns;
	nl=nt=ns=0;
	while((c=getchar())!=EOF){
	if(c==' '){
		ns++;
		}
	else if(c=='\t'){
		nt++;
		}
	else if(c=='\n'){
		nl++;
		}	
	}		
	printf("%d %d %d",ns,nt,nl);
}
	
