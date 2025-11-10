#include<stdio.h>
#define MAX 100
int main(){
	int nw;
	int state;
	char c;
	int i=0;	
	state=0;
	nw=0;
	char string[MAX];
	while((c=getchar())!=EOF){
		if(c==' '||c=='\t'||c=='\n'){
			state=0;
			string[i]=c;
			i++;
		}else{
	if(state==0){
		if(c>='a'&&c<='z'){
			string[i]=c-32;
		}
		else{
			string[i]=c;
		}
		i++;
		state=1;
			}
	else{
		if(c>='A'&&c<='Z'){
			string[i]=c+32;
		}
		else{
			string[i]=c;
		}
		i++;
}

}
}

	for(int k=0;k<i;k++){
		printf("%c",string[k]);
		}
}
		
		
		
