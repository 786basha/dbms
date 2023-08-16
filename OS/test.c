#include<stdio.h>

int main()
{
    int f[100],n,val,i,j,k,st,len,ch;
    for(i=0;i<100;i++)
        f[i]=0;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("Enter values :");
    for(i=0;i<n;i++){
        scanf("%d",&val);
        f[val]=1;
    }
    X:printf("Enter ST and LEN values:");
    scanf("%d %d",&st,&len);
    k=len;
    for(j=st;j<(k+st);j++)
    {
        if(f[j]==0){
            f[j]=1;
            printf("\n %d -> %d",j,f[j]);
        }
        else{
            printf("\n %d ->> 'Alredy Allocated'",j);
            k++;
        }
    }
    printf("Continue 1 or Exit 0");
    scanf("%d",&ch);
    if (ch==1){
        goto X;
    }
    else
        return 0;
}