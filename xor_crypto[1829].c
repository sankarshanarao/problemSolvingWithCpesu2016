// Bit operations and bit shifting - XOR crypto

#include<stdio.h>
#include<string.h>

void encrypt(char e[], char key[]);
void decrypt(char * ePtr, char key[]);

main( )
{
	char string[] = "A boy is dancing";
	char key[] = "1234567";
	printf("Original string is: %s\n",string);

	encrypt(string, key);
	printf("Encrypted string is: %s\n", string);

	decrypt(string, key);
	printf("Decrypted string is: %s\n",string);
}

void encrypt(char e[], char key[])
{
	int len = strlen(e), i, j;
	for (i = 0, j = 0; i < len; i++)
	{  
		e[i] = e[i] ^ key[j++];
		if(j == strlen(key)) 
			j = 0;
	}
}

void decrypt( char * ePtr, char key[]) 
{
	int len = strlen(ePtr), i, j;
	for (i = 0, j = 0; i < len; i++)
	{
		ePtr[i] = ePtr[i] ^ key[j++];
		if(j == strlen(key)) 
			j = 0;
	}
}
