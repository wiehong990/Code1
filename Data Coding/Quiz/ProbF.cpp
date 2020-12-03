#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp=fopen("testdata.in", "r");
	char str[1001];
	int x;
	
	fscanf(fp, "%d\n", &x);
	
	for(int y=1; y<=x; y++)
	{
		int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, ii=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0, x=0, y=0, z=0;
		fscanf(fp, "%[^\n]\n", &str);
		
		for(int i=0; i<strlen(str); i++)
		{
			if(str[i]=='A' || str[i]=='a')
			{
				a++;
			}
			if(str[i]=='B' || str[i]=='b')
			{
				b++;
			}
			if(str[i]=='C' || str[i]=='c')
			{
				c++;
			}
			if(str[i]=='D' || str[i]=='d')
			{
				d++;
			}
			if(str[i]=='E' || str[i]=='e')
			{
				e++;
			}
			if(str[i]=='F' || str[i]=='f')
			{
				f++;
			}
			if(str[i]=='G' || str[i]=='g')
			{
				g++;
			}
			if(str[i]=='H' || str[i]=='h')
			{
				h++;
			}
			if(str[i]=='I' || str[i]=='i')
			{
				ii++;
			}
			if(str[i]=='J' || str[i]=='j')
			{
				j++;
			}
			if(str[i]=='K' || str[i]=='k')
			{
				k++;
			}
			if(str[i]=='L' || str[i]=='l')
			{
				l++;
			}
			if(str[i]=='M' || str[i]=='m')
			{
				m++;
			}
			if(str[i]=='N' || str[i]=='n')
			{
				n++;
			}
			if(str[i]=='O' || str[i]=='o')
			{
				o++;
			}
			if(str[i]=='P' || str[i]=='p')
			{
				p++;
			}
			if(str[i]=='Q' || str[i]=='q')
			{
				q++;
			}
			if(str[i]=='R' || str[i]=='r')
			{
				r++;
			}
			if(str[i]=='S' || str[i]=='s')
			{
				s++;
			}
			if(str[i]=='T' || str[i]=='t')
			{
				t++;
			}
			if(str[i]=='U' || str[i]=='u')
			{
				u++;
			}
			if(str[i]=='V' || str[i]=='v')
			{
				v++;
			}
			if(str[i]=='W' || str[i]=='w')
			{
				w++;
			}
			if(str[i]=='X' || str[i]=='x')
			{
				x++;
			}
			if(str[i]=='Y' || str[i]=='y')
			{
				y++;
			}
			if(str[i]=='Z' || str[i]=='z')
			{
				z++;
			}
		}
		printf("Case #%d:\n", y);
		printf("A : %d, B : %d, C : %d, D : %d, E : %d\n", a, b, c, d, e);
		printf("F : %d, G : %d, H : %d, I : %d, J : %d\n", f, g, h, ii, j);
		printf("K : %d, L : %d, M : %d, N : %d, O : %d\n", k, l, m, n, o);
		printf("P : %d, Q : %d, R : %d, S : %d, T : %d\n", p, q, r, s, t);
		printf("U : %d, V : %d, W : %d, X : %d, Y : %d\n", u, v, w, x, y);
		printf("Z : %d\n\n", z);
	}
	fclose(fp);
}
