#include<stdio.h>
int main()
{
	char str[50],str1[50];
	int i,j,k;
	printf("enter your string 1::");
	gets(str);
	
	printf("your string is:: %s",str);
		
	
	printf("\n enter your string 2::");
	gets(str1);
	
	printf("\n your string is:: %s",str1);

	for(i=0;str[i] !='\0';i++);
	k=i;
	for(j=0;str1[j] !='\0';j++);
	
	for(i=0;i<=j;i++)
	
		str[k++] = str1[i];
	
	str[k]='\0';
	
	printf("\n %s",str);
}
