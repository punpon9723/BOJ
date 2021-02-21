//소트인사이드
//내림차순 정렬
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int t[10];
	int i;
	for(i=0;i<10;i++)
	{
		t[i]=n%10;
		n=n/10;
	}
	for(i=9;i>=0;i--)
	{
		if(t[i]!=0)
			break;
	}
	int k=i;
	int temp;
	for(i=0;i<=k;i++)
	{
		for(int j=0;j<k-i;j++)
		{
			if(t[j]<t[j+1])
			{
				temp=t[j];
				t[j]=t[j+1];
				t[j+1]=temp;
			}
		}
	}
	for(i=0;i<=k;i++)
		printf("%d",t[i]);
	return 0;
}
