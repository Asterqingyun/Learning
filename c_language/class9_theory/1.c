   #include <stdio.h>

   /**
    * @brief Recursively print the decimal representation of an integer n.
    * @param n The integer to be printed.
    * @example
    *   printd(123); // prints "123"
    *   printd(-45); // prints "-45"
    */
   void printd(int n) {
   	if (n<0){
		putchar('-');
		n=-n;
	}
	if(!(n/10)){
		putchar( n+'0');
		return ;
	}
	printd(n/10);
	printf("this is the cycle for n%10 %d",n%10);
	putchar(n%10);
	
   }
int main(){
	printd(123);
	}
