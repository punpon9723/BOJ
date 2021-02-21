//검증수
//처음 5자리에 들어가는 5개의 숫자를 각각 제곱한 수의 합을 10으로 나눈 나머지
#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	f=(a*a+b*b+c*c+d*d+e*e)%10;
	printf("%d\n",f);
	return 0;
}
