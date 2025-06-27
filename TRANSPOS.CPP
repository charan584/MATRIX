#include<stdio.h>
#include<conio.h>
main()
{
	int ar,ac,tr,tc,a[4][4],t[4][4],i,j;
	clrscr();
	printf("Enter matrix order:");
	scanf("%d%d",&ar,&ac);
	printf("\n Enter a matrix:");
	for(i=0;i<ar;i++)
		for(j=0;j<ac;j++)
		scanf("%d",&a[i][j]);
	tr=ac;
	tc=ar;
	for(i=0;i<tr;i++)
		for(j=0;j<tc;j++)
		t[i][j]=a[j][i];
	printf("\n A matrix :\n");
	for(i=0;i<ar;i++)
	{
		printf("\n\n");
		for(j=0;j<ac;j++)
		printf("\t%d",a[i][j]);
	}
	printf("\n Transpose matrix:\n");
	for(i=0;i<tr;i++)
	{
		printf("\n\n");
		for(j=0;j<tc;j++)
		printf("\t%d",t[i][j]);
	}
	getch();
	return 0;
}