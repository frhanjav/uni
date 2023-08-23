// WAP that checks if a string is a palindrome or not

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char string1[20];
	int i, length;
	int flag = 0;

	printf("Enter a string: ");
	scanf("%s", string1);

	char *str = string1;

	length = strlen(string1);

	for (int i = 0; string1[i]; i++)
	{
		string1[i] = tolower(string1[i]);
	}

	for (i = 0; i < length; i++)
	{
		if (string1[i] != string1[length - i - 1])
		{
			flag = 1;
			break;
		}
	}

	if (flag)
	{
		printf("%s is not a palindrome \n", string1);
	}
	else
	{
		printf("%s is a palindrome \n", string1);
	}
	return 0;
}