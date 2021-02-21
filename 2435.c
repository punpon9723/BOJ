//기상청 인턴 신현수
//측정한 온도가 어떤 정수의 수열로 주어졌을 때, 연속적인 며칠 동안의 온도의 합이 가장 큰 값
#include <stdio.h>
int main(void)
{
	int i,j,n,k;
	scanf("%d %d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n+1-k;i++)
	{
		for(j=1;j<k;j++)
		{
			arr[i]+=arr[i+j];
		}
	}
	int max=arr[0];
	for(i=0;i<n+1-k;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	printf("%d\n",max);
	return 0;
}
