 #include<stdio.h>
 #include<string.h>


int main()
{
	int table[126];
	char t[100],p[25];
	int n,i,k,j,m,flag=0;

	printf("Enter the text : ");
	gets(t);
	n = strlen(t);
	printf("\n%d\n",n);

	printf("Enter the pattern : ");
	gets(p);
	m = strlen(p);
	printf("\n%d\n\n",m);

	// ----- construct shift table for the pattern ---------

	for(i=0;i<126;i++)  // ASCII code for characters 0-127.  This code assigns a number to a keyboard function.
		table[i] = m; // first initializing the shift table with the length of the pattern
	for(j=0;j<m-2;j++)
		table[p[j]] = m-1-j;   // update the table which is < than m

      // ------ shift table construction for the pattern ends -------

	i = m-1;  //index position of the text where the pattern's right end is pointing
	while(i<=n-1)   // till we reach the end of text string
	{
		k = 0;
		printf("\n %d %d %c %c",i,k,p[m-1-k],t[i-k]);// number of matched characters
		getch();
		while(k<=m-1 && p[m-1-k]==t[i-k])  // check whether the character of the pattern matches with the
					// character of the text and also k should be within m-1
			k++;
		if(k==m)        // if k reached the length of the pattern then the result is successful
		{
			printf("The position of the pattern is %d\n",i-m+1);   // i-(m-1)is equivalent to i-m+1
			flag = 1;
			break;
		}
		else
			i += table[t[i]];    // i is index position of the text where the pattern's right end is pointing
				// + table[t[i]] shift table value of that character. This tells how much should we shift

	}
	if(!flag)
		printf("Pattern is not found in the given text ");
}
