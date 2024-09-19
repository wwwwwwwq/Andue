# include<stdio.h>
// 辗转相除法就搞定了喵
int main()
{
	int m,n,t=1;
	scanf("%d %d",&m,&n);
	while(t)
	{
		t=m%n;
		m=n;
		n=t;
	 } 
	 printf("%d",m);
	 return 0;
}
