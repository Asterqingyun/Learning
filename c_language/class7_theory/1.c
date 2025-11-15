/**
 * @brief 在有序数组 v 中查找值 x 的位置。
 * @param x 要查找的值
 * @param v 有序整数数组
 * @param n 数组长度
 * @return 如果找到，返回 x 在数组中的索引；否则返回 -1。
 */
int binsearch(int x, int v[], int n)
{
	int i=0;
	int j=n-1;
	int middle;
	while(i<=j){
		middle=(i+j)/2;
		if(v[middle]==x){
			return middle;
		}
		else if(v[middle]>x){
			j=middle-1;
		}
		else{
			i=middle+1;
		}
}
	return -1;
}
	
