#include<stdio.h>
int main(){
int c;
int ns,nl,no,state;
ns=nl=no=state=0;
while  ((c=getchar())!=EOF){
if(c==' '||c=='\t'){
state=0;
}
else{
if(state==0){
state=1;
if(c<='z'&&c>='a'){
ns++;
}
else if(c>='A'&&c<='Z'){
nl++;
}
else{
no++;
}
}
}

}
printf("this has %d big, %d small ,%d other",nl,ns,no);
}


