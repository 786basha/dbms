#include<stdio.h>

int main()
{
    int f[100],k,n,val,i,j,st,len,c;
    char ch;
    for(i=0;i<100;i++)
    f[i]=0;
    printf("Enter No of blocks are already allocated:");
    scanf("%d",&n);
    printf("Enter block numbers that are allocated :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&val);
        f[val]=1;
    }
    X:printf("Enter the Starting index block && Length:");
    scanf("%d %d",&st,&len);
    k=len;
    for(j=st;j<(k+st);j++)
    {
        if(f[j]==0){
            f[j]=1;
            printf("\n %d -> %d",j,f[j]);
        }
        else
        {
            printf("\n %d -> File alredy Allocated...",j);
            k++;
        }
    }
    printf("\n Do you Want to continue Y || else N ");
    scanf("%s",&ch);
    if(ch=='Y')
        goto X;
    else
        return 0;
}