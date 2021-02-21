//나무 조각
//오름차순 정렬 과정 출력
#include <stdio.h>
int main(void)
{
	int a[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp;
	while(1)
	{
		for(i=0;i<4;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				for(j=0;j<5;j++)
				{
					printf("%d ",a[j]);
				}
				printf("\n");
			}	
			if(a[0]==1&&a[1]==2&&a[2]==3&&a[3]==4&&a[4]==5)
				break;
		}
	}
	return 0;
}
