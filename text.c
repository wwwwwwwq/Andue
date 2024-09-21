<<<<<<< HEAD
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
=======
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
>>>>>>> 11db3e23b77b846f31b7f7047f8a5142f25522b6
