#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char x[n][100];
    int a;
    for(i=0;i<n;i++)
    {
        scanf("%s",x[i]);
        a=strlen(x[i]);
        if(a<11)
            printf("%s\n",x[i]);
        else
            printf("%c%d%c\n",x[i][0],a-2,x[i][a-1]);
    }
    return 0;
}
