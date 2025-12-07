      #include <stdio.h>
      #define MAX 10000
      /**
       * @brief Recursively compute the nth Fibonacci number.
      * @param n The index of the Fibonacci number to compute.
      * @return The nth Fibonacci number.
      * @example
      *   int result = fibonacci(5); // result == 5
      *   int result = fibonacci(10); // result == 55
      */
      int fibonacci(int n) {
      	int F[MAX];
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	if(F[n]){
		return F(n);
	}
	F[n]=fibonacci(n-1)+fibonacci(n-2);
	return F[n];
      }
