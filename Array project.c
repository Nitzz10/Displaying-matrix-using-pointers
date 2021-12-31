#include <stdio.h>
int main()
{
	int arr[3][3];
	int *p=&arr[0][0];
	int i,j,m,sum=0;
	{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("The matrix is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" %d ",*(p+(i*3)+j));		
	}
}
	return 0;
}
}
