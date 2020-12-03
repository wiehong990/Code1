#include <stdio.h>

int gcd(int a, int b) {
  if (a == 0)
    return b;
  else
    return gcd(b%a,a);
}

int main(){
    int x,y,index=0,temp;
    int angka[100001],answer[100001];

    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        scanf("%d",&y);
        for(int j=0;j<y;j++){
            scanf("%d",&angka[j]);
        }
        index=0;
        for(int k=0;k<y;k++){
            for(int l=k+1;l<y;l++){
                answer[index]=gcd(angka[k],angka[l]);
                index++;
            }
        }
        temp=0;
        for(int m=0;m<index;m++){
            if(temp<answer[m]){
                temp=answer[m];
            }
        }
        printf("Case #%d: %d\n",i,temp);
    }
    return 0;
}
