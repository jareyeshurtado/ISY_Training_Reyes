#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  	int opt;
  	char* ptr;
  	long int number = 0;

  	while ((opt = getopt (argc, argv, "d:h:")) != -1)
  	{
		switch (opt)
		{
	  	case 'h':
	    	printf ("Decimal to hexadecimal conversion\n");
	    	number = strtol(optarg, &ptr, 10);
	    	printf("The number %ld in hexadecimal is 0x%lx\n", number,number);
	    	break;
	  	case 'd':
	    	printf ("Hexadecimal to decimal conversion\n");
	    	number = strtol(optarg, &ptr, 16);
	    	printf("The number 0x%lx in decimal is %ld\n", number,number);
			break;
		}
  	}
  	return 0;
}
