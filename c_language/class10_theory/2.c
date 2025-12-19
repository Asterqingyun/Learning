/**
* @brief Print all permutations of numbers from 1 to n.
* @param n The upper bound of numbers to permute (positive).
* @example
* permute(3);
* // Expected output:
* // 1 2 3
* // 1 3 2
* // 2 1 3
* // 2 3 1
* // 3 1 2
* // 3 2 1
*/
#define MAX 10000
int buf[MAX];
int isconflicted(int i,int begin){
	for(int j=0;j<begin;j++){
		if(buf[j]==i){
			return 1;
		}
	}
	return 0;
}

void output(int buf[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",buf[i]);
	}
	printf("\n");
}
void permute(int n)
{
        void permute_from(int begin,int end);
	permute_from(0,n);	
}
void permute_from(int begin,int n){
	void output(int buf[],int n);
	int isconflicted(int i,int begin);
	if (begin==n){
		output(buf,n);	
	}
	for(int i=1;i<=n;i++){
		if (!isconflicted(i,begin)){
		buf[begin]=i;
		permute_from(begin+1,n);
	}
	}
}
