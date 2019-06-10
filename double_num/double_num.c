#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

#define MAXLINE 80

int main(int argc, char *argv[])
{
	FILE *in = stdin;
	char buffer[MAXLINE + 1];
	long long numb;

	if (argc == 2)
	{
		in = fopen(argv[1], "r");

		if (!in)
		{
			exit(EXIT_FAILURE);
		}
	}

	while (fgets(buffer, MAXLINE, in))
	{
		numb = 2 * atoi(buffer);
		printf("%lld\n", numb);
	}

	if (in != stdin)
	{
		fclose(in);
	}
	exit(EXIT_SUCCESS);
}