#include<stdio.h>
void get_matrix(int n,int M[n][n]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&M[i][j]);
		}
	}
}
void times_matrix(int n,int M[n][n],int N[n][n],int Q[n][n]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){

			for(int k=0;k<n;k++){
				Q[i][j]+=M[i][k]*N[k][j];
				}
		}
	}
}	
			
void print_matrix(int n,int Q[n][n]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",Q[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int M[n][n];
	int N[n][n];
	int Q[n][n];
	get_matrix(n,M);
	get_matrix(n,N);
	times_matrix(n,M,N,Q);
	print_matrix(n,Q);
}


		
