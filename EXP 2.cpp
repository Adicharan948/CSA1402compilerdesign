#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char input[30];
	int len;
	
	printf("Enter line of text");
	scanf("%[^\n]s",input);
	len=strlen(input);
	if(input[0]=='/' && input[1]=='/')
	{
		printf("single line comment");
	}
	else if(input[0]=='/' && input[1]=='*')
	{
		if(input[len-1]=='/' && input[len-2]=='*')
		{
			printf("multiline content");
		}
		else
		{
			printf("not a comment");
		}
	}
	getch();
	
	{
		printf("not a comment");
	}
	return 0;
	}
