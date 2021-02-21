//N번째 큰 수
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	scanf("%d",&n);		//테스트 케이스 수
	int i,j,z,temp;
	int tt[n];		//각 테스트마다 큰 수 저장
	for(i=0;i<n;i++)
	{
		int *cc=(int*)malloc(sizeof(int)*10);		//정수 배열 동적할당
		for(j=0;j<10;j++)
		{
			scanf("%d",&cc[j]);		//정수 저장
		}
		for(j=0;j<10;j++)
		{
			for(z=0;z<9-j;z++)		//정수 내림차순 정렬
			{
				if(cc[z]<cc[z+1])
				{
					temp=cc[z];
					cc[z]=cc[z+1];
					cc[z+1]=temp;
				}
			}
		}
		tt[i]=cc[2];		
		free(cc);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",tt[i]);
	}
	return 0;
}
