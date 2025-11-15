/**
 * @brief 使用希尔排序算法对数组进行排序。
 * @param v 待排序的整数数组
 * @param n 数组长度
 */
void shellsort(int v[], int n)
{
	int length=n/2;
	int j;
	int middle;
	while(length>0){
		for(int i=0;i<n;i++){
			j=i;
			while((j>=length)&&(v[j]<v[j-length])){
				middle=v[j];
				v[j]=v[j-length];
				v[j-length]=middle;
				j-=length;
			}	
			
		}
	length/=2;
		
}
}

