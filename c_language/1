#include <stdio.h>
int replacePart(int x, int y, int p, int len)
{
	int y_thing=0;
	int x_last=0;
	int result=0;
	int y1111=0;
	int x11011=0;
	int weight=1;
	int middle_y=0;
	for(int i=0;i<len;i++){
		y1111=y1111+weight;
		weight=2*weight;
	}
	y_thing=y&y1111;
	weight=1;
	for(int j=0;j<p-len+1;j++){
		x11011=x11011+weight;
		weight=2*weight;
	
}
	weight=1;
	for(int j=0;j<1+p;j++){
		weight=weight*2;
	}
	for(int j=p+1;j<=32;j++){
		x11011=x11011+weight;
		weight=weight*2;
		printf("this is x11011:%d\n",x11011);
		
		
	}
	x_last=x&x11011;
	
	middle_y=y_thing<<(p-len+1);
	printf("middle y:%d\n",middle_y);
	result=x_last|middle_y;
	printf("this is x11011 and this is middle_y:%d,%d",x11011,middle_y);
}
int main (){
	printf("%d\n",replacePart(12990275,8400657,14,4));
}
	
	
