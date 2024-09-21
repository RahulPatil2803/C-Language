#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[100];
	printf("Enter the string :");
	gets(str);
	//scanf("%s",str);
int count_vovels=0;
int count_consonants=0;
    strlwr(str);
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='0'||str[i]=='u')
		{
			count_vovels++;
		}
		if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='0'||str[i]=='u')||(str[i]>='0'&&str[i]<='9'))
		{
			count_consonants++;
		}
	}
	printf("\nVovels is %d",count_vovels);
		 printf("\nConsonent is %d",count_consonants);

int count_digit=0;	 
	 for(int i=0;i<strlen(str);i++)
{
	if(str[i]>='0'&&str[i]<='9')
	{
		count_digit++;
	}
}
	 printf("\nDigit is %d",count_digit);

int count_space=0;
for(int i=0;i<strlen(str);i++)
{
	if(str[i]==' ')
	{
		count_space++;
	}
}
	 printf("\nSpace is %d",count_space);

	return 0;
}	