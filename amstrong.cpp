/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int n,r,sum=0,num;
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
	}
        if(num==sum)
        printf("amstrong");
        else
        printf("not amstrong");
	return 0;
}
