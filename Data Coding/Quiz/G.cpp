#include<stdio.h>

int main(){
    int a,i,b,j,k,tempe,l,index=1,x[10000];
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++){
        scanf("%d",&x[i]);
    }

    for(i=0;i<a-1;i++)
    {
        for(k=0;k<a-i-1;k++)
        {
            if(x[k]>x[k+1])
            {
            tempe = x[k];
            x[k]=x[k+1];
            x[k+1]=tempe;
            }
        }
    }

    for(j=0;j<b;j++){
        scanf("%d",&l);
        printf("%d\n",x[l-1]);
    }


    return 0;
}
