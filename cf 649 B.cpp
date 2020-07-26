#include<stdio.h>
int main()
{
    //fast;
    int n,k;

    while(scanf("%d%d",&n,&k)==2)
    {
        if(n<2)
        {
            printf("Total Number of Hawai Misti is : %d\n",n);
            continue;
        }

        int a=0,temp,i=1;
        a+=n;
        do
        {
            temp = n/k;
            if(i%2)
                temp+=1;
            else
                temp-=1;
            if(temp>0)
            {
               a+=temp;
               n=temp;
            }
            else
                break;
            i++;

        }while(temp>0);
        printf("Total Number of Hawai Misti is : %d\n",a);

    }

}


