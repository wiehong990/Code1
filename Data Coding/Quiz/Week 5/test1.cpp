#include<stdio.h>

int main (){
	int count = 0;
	int n=0;

while (n != 0)
{
    n /= 10;
    count++;
}
if(count!=0){
   int numberArray[count];

   count = 0;    

   while (n != 0){
       numberArray[count] = n % 10;
       n /= 10;
       count++;
   }
}
	return 0;
}
