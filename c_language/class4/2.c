#include<stdio.h>
#define MAX 1000

int main(){
	char c;
	int i,j,k;
	k=i=j=0;
	char strings[MAX];
	int LineEnd[MAX];
	int LineLength[MAX];
	int Min1,Min2;
	Min1=Min2=10000000;
	int Maxnum1,Maxnum2;
	Maxnum1=Maxnum2=0;
	while((c=getchar())!=EOF){
		strings[i]=c;	
		if(c=='\n'){
			LineEnd[j]=i;
			if(j!=0){
			LineLength[k]=LineEnd[j]-LineEnd[j-1];
			}
			else{
			LineLength[k]=LineEnd[j]+1;
			}
			j++;
			k++;
			
	}

		i++;
		}
	
	for(int s=0;s<k;s++){
		if(LineLength[s]>0){
		if(LineLength[s]<Min1){
			Min2=Min1;
			Min1=LineLength[s];
}	
		else{
			if (LineLength[s]<Min2){
			Min2=LineLength[s];}
		}
}
}
	for(int s=0;s<k;s++){
		if(LineLength[s]==Min1){
			Maxnum1=s;}
		else if(LineLength[s]==Min2){
			Maxnum2=s;}
		}

	for(int s=(Maxnum1== 0) ? 0 :LineEnd[Maxnum1-1]+1;s<=LineEnd[Maxnum1];s++){
		printf("%c",strings[s]);
		}
	
	for(int s=(Maxnum2== 0) ? 0 :LineEnd[Maxnum2-1]+1;s<=LineEnd[Maxnum2];s++){
		printf("%c",strings[s]);
		}

}


