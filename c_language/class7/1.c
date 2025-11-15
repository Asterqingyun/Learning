#include <stdio.h>
int at_judge(char a){
	if(a>='a'&&a<='z'){
		return 1;
	}
	else if(a>='A'&&a<='Z'){
		return 1;
	}
	else {
		return 0;
	}
}
int star_judge(char a){
	if(a>='0'&&a<='9'){
		return 1;
	}
	else{
		return 0;
	}
}
int strindex(char s[], char t[])
{   int i=0;
    int j=0;
	for(;s[i]!='\0';i++){
		for(int p=i;t[j]!='\0';j++,p++){
			if(t[j]=='@'){
				if(at_judge(s[p])){
					continue;
				}
				else {
					break;
				}
			}
			else if(t[j]=='*'){
				if(star_judge(s[p])){
					continue;
				}
				else{
					break;
				}
			}
			else{
				if(s[p]==t[j]){
				continue;
				}
				else{
				break;
				}
			}				
		}
	if(t[j]=='\0'){
	return i;
	
}
}
        return -1;
    
}

