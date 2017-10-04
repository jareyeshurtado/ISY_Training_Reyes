#include <stdio.h>
#include <string.h>

void *memcopy(void* str1, const void* str2, int n)
{
	char* pstr1 = str1;
	const char* pstr2 = str2; 
	for (int i = 0; i < n ; i++)
	{
		*(pstr1+i) = *(pstr2 + i); 
	}
}

int main () {

    const char src[50] = "This is my first memcopy function ever created";
    char dest[50] = "Buffer to be changed after memcopy function";

	const int source[4] = {1,2,3,4};
	int final[4] = {0};

	/*Strings memcopy*/
    printf("Before memcpy dest = %s\n", dest);  //Before
    memcopy(dest, src, sizeof(src));			//memcopy
    printf("After memcpy dest = %s\n", dest);	//After


	/*Numbers memcopy*/
	printf("Before:\n");
	for (int i = 0; i < 4 ; i++)
	{
		printf("%i\t", final[i]);				//Before
	}
	memcopy(final,source,sizeof(source));		//memcopy
	printf("\nAfter:\n");
	for (int i = 0; i < 4 ; i++)
	{
		printf("%i\t", final[i]);				//After
	}
	printf("\n");
   
    return(0);
}

