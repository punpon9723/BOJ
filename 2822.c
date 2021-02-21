//점수계산
#include <stdio.h>
int main(void)
{
	int n[2][8];			//8문제와 그 문제의 번호
	int i=0;
	for(i=0;i<8;i++)
	{
		n[0][i]=i+1;
		scanf("%d",&n[1][i]);
	}
	int j=0;
	int temp;
	for(i=0;i<8;i++)
	{
		for(j=0;j<7-i;j++)
		{
			if(n[1][j]<n[1][j+1])		//문제 내림차순 정렬 + 그에 따른 문제 번호도 문제에 맞춰 정렬
			{
				temp=n[1][j];
				n[1][j]=n[1][j+1];
				n[1][j+1]=temp;
				temp=n[0][j];
				n[0][j]=n[0][j+1];
				n[0][j+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(n[0][j]>n[0][j+1])		//문제 번호 내림차순 정렬
			{
				temp=n[0][j];
				n[0][j]=n[0][j+1];
				n[0][j+1]=temp;
			}
		}
	}
	int sum=0;
	for(i=0;i<5;i++)
	{
		sum+=n[1][i];			//상위 점수 합 총합
	}
	printf("%d\n",sum);
	for(i=0;i<5;i++)
	{
		printf("%d ",n[0][i]);	
	}
	printf("\n");
	return 0;
}
