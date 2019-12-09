/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int n,r,max=0;
	scanf("%d",&n);
	while(n!=0)
	{
	    r=n%10;
	    if(r>max)
	    max=r;
	    n=n/10;
	}
	printf("%d\t",max);
	return 0;
}

