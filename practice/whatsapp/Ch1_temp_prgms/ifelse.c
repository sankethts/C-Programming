#if 0
#include <stdio.h>

int main()
{
	int num = 3;

	if (num < 5)
	{
		printf("num is smaller than 5\n");
	}
	else
	{
		printf("num is greater than 5\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int num = 3;

	if (num < 5); //The semicolon ends the if statement immediately, there is emplty statement inside it
	{
		printf("num is smaller than 5\n");
	}
	else //error, else without previous if
	{
		printf("num is greater than 5\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int num = 3;

	if (num < 5)
			printf("num is smaller than 5\n");
	printf("Emertxe\n");
	else// else without previous if
	{
			printf("num is greater than 5\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int num = 7;

		if (num < 5)
				printf("num is smaller than 5\n");
		else
				printf("num is greater than 5\n");
		printf("Emertxe\n");

		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int num = 6;

		if (num < 5)
				printf("num is smaller than 5\n");
		else (num > 5) //error
				printf("num is greater than 5\n");
		printf("Emertxe\n");

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int num = 11;

		if (num < 5)
				printf("num is smaller than 5\n");
		else (num > 5);   //(num > 5); treated as a useless expression statement, if removed ;, gives error
		printf("num is greater than 5\n");
		printf("Emertxe\n");

		return 0;
}
#endif
