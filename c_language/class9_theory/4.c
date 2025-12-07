      #include <stdio.h>   

      /**
       * @brief Recursively print the hexadecimal representation of an integer n.
       *        The output starts with "0X". Negative numbers are printed in two's complement format.
       * @param n The integer to be printed.
       * @example
       *   itoh(255); // prints "0XFF"
       *   itoh(-1);  // prints "0XFFFFFFFF" (assuming 32-bit int)
       */
      void number(unsigned n1){
	if((n1>=0)&&(n1<=9)){
		putchar(n1+'0');
	}
	else{
		putchar(n1-10+'A');
	}
	}
      void itoh_un(unsigned n){
	 if(!(n/16)){
		printf("0X");
		number(n);
	}
	else{
		itoh_un(n/16);
		number(n%16);
	} 		
      void itoh(int n) {
         unsigned n1=n;
	 itoh_un(n1);
      }  
