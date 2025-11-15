#include <ctype.h>
#include <stdio.h>
double atof(char s[])
{	int i=0;
	double f=0;
	int power=1;
	int sign=1;
	int much=0;
	int time_or_divide=1;
	for(;isspace(s[i]);i++){
;
}
	if(s[i]=='+'){
		i++;
	}
	else if(s[i]=='-'){
		i++;
		sign=-1;
	}
	for(;isdigit(s[i]);i++){
		f=f*10+s[i]-'0';
	}
	if(s[i]=='.'){
		i++;
	}
	for(;isdigit(s[i]);i++){
		f=f*10+s[i]-'0';
		power*=10;
	}
	if(s[i]=='e'||s[i]=='E'){
		i++;
		if(s[i]=='+'){
		;
		}
		else if(s[i]=='-'){
		time_or_divide=0;
		i++;
		}
		for(;isdigit(s[i]);i++){
		much=much*10+s[i]-'0';
		}
	}
	for(int k=0;k<much;k++){
	    if(time_or_divide==1){
		power/=10;
	    }
	    else{
	        power*=10;
	    }
	}	
	return sign*f/power;
	
	

    
}

int main(){
	char c[]="123.5e-1";
	printf("%g",atof(c));
}
