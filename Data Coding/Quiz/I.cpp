#include<stdio.h>

int binarySearch(int y[], int a, int b, int x) 
{ 
    if (b >= a) { 
        int i = a + (b - a) / 2; 
        if (y[i] == x) 
            return i; 
        if (y[i] > x) 
            return binarySearch(y, a, i - 1, x); 
   return binarySearch(y, i + 1, b, x); 
    } 
   return -1; 
} 

int main()
{
    int a=0,b=0,y[100005]={0},x;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&y[i]);
    }
    for(int j=0;j<b;j++)
    {
        scanf("%d",&x);
    int i=binarySearch(y,1,a,x);
    if(i==-1)
    {
        printf("0\n");
    }
    else
    {
    int counter=0;
    while(y[i]==x)i--;
    i++;
    while(y[i]==x)
    {
        i++;
        counter++;
    }
    printf("%d\n",counter);
    }
    }
    return 0;
}

