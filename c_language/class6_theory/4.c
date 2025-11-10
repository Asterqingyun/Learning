/**
 * @brief 统计 x 的二进制表示中 1 的个数。
 * @param x 无符号整数
 * @return 1 的个数
 */
int count_ones(unsigned x)
{	int n=0;
	while(x!=0){
		if(x&1){
		n++;
}
		x>>1;
}
	return n;
}

