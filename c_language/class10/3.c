/**
* @brief Copy string from src to dest.
* @param dest Pointer to destination string.
* @param src Pointer to source string.
* @return Pointer to destination string.
* @example
*   char dest[100];
*   mystrcpy(dest, "Hello, World!");
*/
char *mystrcpy(char *dest, const char *src)
{
	for(int i=0;src[i]!='\0';i++){
		dest[i]=src[i];
}
	return dest[i];
}
