#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c;
        scanf("%d %d",&a,&b);
        c=a%b;
        printf("%d\n",c);
    }
    return 0;
}
