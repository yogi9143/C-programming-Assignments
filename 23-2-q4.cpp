4.	Write a C program to find maximum occurring character in a string using loop. How to find highest
frequency character in a string using loop in C programming. Program to find the highest occurring
character in a string in C. Logic to find maximum occurring character in a string in C programming.

PROGRAM :  

#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100], result;
  	int i, len;
  	int max = -1;
  	int freq[256] = {0}; 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	len = strlen(str);
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("\n The Maximum Occurring Character in a Given String = %c ", result);
  	return 0;
}

OUTPUT :  Please Enter any String :  DHONI
The Maximum Occurring Character in a Given String = D 
