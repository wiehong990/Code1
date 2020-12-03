#include<stdio.h>
int main()
{
   int i,anjay,x[100001];
   int k;
   int a,j;
   scanf("%d\n",&a);
   for(j=1;j<=a;j++){

   scanf("%d",&anjay);
   x[0]=1;x[2]=2;
   x[1]=1;
   /* Calculate Fibb*/
  int sum=x[0]+x[1];
 //printf("The sum :\n");
 printf("Case #%d: ",j);
 if (anjay == 1)
 {
     printf("%d\n",x[anjay-1]);
 }
 else if(anjay == 2)
 {
     printf("2\n");
 }
     else
     {
   for(i=2;i<anjay;i++){
      x[i]=(x[i-1]+x[i-2])%1000000009;

       sum=(sum+x[i])%1000000009;
       }
   printf("%d\n",sum);
     }
   }
   return 0;
}
