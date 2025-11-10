#include<stdio.h>
int main(){
	char string[100];
	int i=0;
	int status=0;
	char c;
	while((c=getchar())!=EOF){
		if(c!=' '&&c!='\t'){
			status=1;
			string[i]=c;
			i++;
			}
		else{
			if(status==1){
				string[i]=' ';
				status=0;
				i++;
				}
			}
		}
	
	for (int j=0;j<=i; j++){
		if(string[j]=='s'&&string[j+1]=='p'&&string[j+2]=='a'&&string[j+3]=='c'&&string[j+4]=='e'&&string[j+5]==' '){
string[j]=' ';
string[j+1]=string[j+2]=string[j+3]=string[j+4]='\0';}
		if(string[j]==' '||string[j]=='\t'){
			printf("\n");
}
		else{

		printf("%c",string[j]);
}
}
			

}

