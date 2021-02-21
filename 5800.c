//성적 통계
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	scanf("%d",&n);		//반 개수
	int i;
	int j;
	int nn[n];		//반별 학생수 저장
	int ans[n][3];		//Max, Min, Lg 저장
	for(i=0;i<n;i++)
	{
		scanf("%d",&nn[i]);
		int *class=(int*)malloc(sizeof(int)*nn[i]);		//점수 저장공간
		for(j=0;j<nn[i];j++)
		{
			scanf("%d",&class[j]);				//점수 저장
		}
		for(j=0;j<nn[i];j++)
		{
			for(int z=0;z<(nn[i]-1-j);z++)
			{
				if(class[z]<class[z+1])			//점수 내림차순 정렬
				{
					int temp=class[z];
					class[z]=class[z+1];
					class[z+1]=temp;
				}
			}
		}
		int lg=class[0]-class[1];
		for(j=1;j<nn[i]-1;j++)
		{
			if((class[j]-class[j+1])>lg)
				lg=class[j]-class[j+1];		//Lg 찾기
		}
		ans[i][0]=class[0];
		ans[i][1]=class[nn[i]-1];
		ans[i][2]=lg;
		free(class);
	}
	for(i=0;i<n;i++)
	{
		printf("Class %d\n"i+1);
		printf("Max %d, Min %d, Largest gap %d\n",ans[i][0],ans[i][1],ans[i][2]);
	}
	return 0;
}
