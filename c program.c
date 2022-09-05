#include <stdio.h>
input(int *a,int i,int n)
{ 
   if(i<n)
    {
		scanf("%d", &a[i]);
        input(a,i+1,n);
    } 
}
output(int *a,int i,int n)
{ 
     if(i<n)
    {
        printf("%d  ", a[i]);
        output(a,i+1,n);
    } 
}
int main()
{
    int a[1000],i,n;  
    scanf("%d",&n);
    input(a,0,n);
    output(a,0,n);
    return 0;
}
