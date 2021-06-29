#include<stdio.h>

int main()
{ int i,j,k,x=0,len;
    char str[100];
    scanf("%s",str);
    for(len=0;str[len];len++);
    if(len%2)
    {
        int mid=len/2;
        for(i=len;i>0;i--)
        {
            for(j=0;j<i;j++)
            {
            if(x+j<=len-2)
                printf("  ");
             
            for(k=0;k<=x;k++)
            {
                 if(x+j>len-2&&x+j<=len)
                if(mid+k>len-1)
                    printf("%c ",str[(mid+k)-len]);
                else
                printf("%c ",str[mid+k]);
            }
            }
            printf("\n");
            x++;
        }
    }
    printf("Invalid Input - Input should be odd letter count");
    return 0;
}