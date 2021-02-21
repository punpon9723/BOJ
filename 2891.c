//카약과 강풍
#include <stdio.h>
int main(void)
{
	int n,s,r;
	scanf("%d %d %d",&n,&s,&r);		//참가 팀 수, 카약 손상된 팀 수, 카약 하나 더 있는 팀 수
	int ss[s];		//카약이 손상된 팀의 번호
	int i;
	for(i=0;i<s;i++)
	{
		scanf("%d",&ss[i]);
	}
	int rr[r];
	for(i=0;i<r;i++)
	{
		scanf("%d",&rr[i]);		//카약 하나 더 가져온 팀 번호
	}
	int j;
	int t=s;
	for(i=0;i<s;i++)
	{
		for(j=0;j<r;j++)
		{
			if(ss[i]==rr[j])		//손상팀=하나더팀
			{
				t-=1;
				rr[j]=99;		//99는 명단에서 제외하기 위한 임의 수
			}
			else if(ss[i]==rr[j]-1)		//손상팀=하나더팀 전
			{
				t=t-1;
				rr[j]=99;
				break;
			}
			else if(ss[i]==rr[j]+1)		//손상팀==하나더팀 후
			{
				t-=1;
				rr[j]=99;
				break;
			}
			else
				continue;
		}
	}
	printf("%d\n",t);		//출발 불가능 팀 수 
	return 0;
}
