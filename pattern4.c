//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1
#include<stdio.h>
main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(k=5;k>i;k--)
		{
			printf("  ",k);
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
			{
				printf("1 ",j);
			}
			else
			{
				printf("0 ",j);
			}
		}
		printf("\n");
	}
}
