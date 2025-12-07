#include <stdio.h>
/**
 * @brief Sort an array of integers using the quicksort algorithm.
 * @param v The array to be sorted.
 * @param n The length of the array.
 * @example
 *   int arr[] = {3, 6, 8, 10, 1, 2, 1};
 *   quick_sort(arr, 7); // arr is now sorted: {1, 1, 2, 3, 6, 8, 10}
 */
void swap(int *a1,int *b1){
	int temp=*a1;
	*a1=*b1;
	*b1=temp;
}
void quick_sorter(int v[],int left,int right){
	if(left>right){
		return ; 
	}
	int middle=(left+right)/2;
	int last=left;
	swap(v+left,v+middle);
	for(int i=left;i<=right;i++){
		if(v[i]<v[left]){
			last+=1;
			swap(v+last,v+i);
		}
	}
	swap(v+left,v+last);
	quick_sorter(v,left,last-1);
	quick_sorter(v,last+1,right);

}

void quick_sort(int v[], int n) {
	quick_sorter(v,0,n-1);	

}
int main(){
	int v[5]={1,2,4,5,3};
	quick_sort(v,5);
	for(int i=0;i<=4;i++){
		printf("%d ",v[i]);
	}
}
