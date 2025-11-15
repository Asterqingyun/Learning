void reverse(int length;char s[]){
	for(int j=0,k=length;j<k;j++,k++){
		int m=s[j];
		s[j]=s[k];
		s[k]=m;
	}
	}
	
void itoh(int x, char s[])
{
	int buma=~x+1;
	int number=0;
	int i=0;
	while(buma!=0){
		number=buma%16;
		buma/=16;
		if(number>=10&&number<=15){
			s[i]='A'+number-10;
		}
		else{
			s[i]='0'+number;
		}
		i++;	
	}
	reverse(i,s);
		
	    
}
