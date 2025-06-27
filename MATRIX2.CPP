#include<stdio.h>
#include<conio.h>
main()
{
	int a[2][2],b[2][2],s[2][2],i,j,k,m[2][2];
	clrscr();
	printf("Enter A matrix:\n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			printf("Enter a[%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	printf("Enter B matrix:\n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			printf("Enter b[%d][%d] element:",i,j);
			scanf("%d",&b[i][j]);
		}
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			m[i][j]=0;
			for(k=0;k<2;k++)
				m[i][j]=m[i][j]+a[i][k]*b[k][i];
		}
	clrscr();
	printf("\n A matrix is:\n");
	for(i=0;i<2;i++)
	{
		printf("\n\n");
		for(j=0;j<2;j++)
			printf("\t%d",a[i][j]);
	}
	printf("\n B matrix is:\n");
	for(i=0;i<2;i++)
	{
		printf("\n\n");
		for(j=0;j<2;j++)
			printf("\t%d",b[i][j]);
	}
	printf("\n sum of A,B matrix is:\n");
	for(i=0;i<2;i++)
	{
		printf("\n\n");
		for(j=0;j<2;j++)
			printf("\t%d",s[i][j]);
	}
	printf("\n multiplication of A,B matrix is:\n");
	for(i=0;i<2;i++)
	{
		printf("\n\n");
		for(j=0;j<2;j++)
			printf("\t%d",m[i][j]);
	}
	getch();
	return 0;

}