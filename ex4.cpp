#include<stdio.h>
#include<math.h>

int main()
{
	float a , b , c , denta , x ,x1,x2; 
	printf("\nMoi ban nhap so thu nhat:");
	scanf("%f",&a);
	printf("\nMoi ban nhap so thu hai:");
	scanf("%f",&b);
	printf("\nMoi ban nhap so thu ba:");
	scanf("%f",&c);
	printf("\nPhuong trinh %f.1x^2 + %.1fx +%.1f",a,b,c);
	denta=b*b-4*a*c;
	printf("\nDelta:%.1f",denta);
	if(a!=0 && b!=0 && c!=0)
	{	
		if(denta > 0)
		{
			x1 = (-b+sqrt(denta))/(2*a);
			x2 = (-b-sqrt(denta))/(2*a);
			printf("\nPhuong trinh cos 2 nghiem x1 = %.1f va x2 = %.1f .", x1 , x2);
		}
		else if(denta == 0)
		{
			x = -b/(2*a);
			printf("\nPhuong trinh co nghien kep la : %.1f",x);
		}
		else
		{
			printf("\nPhuong trinh vo nghiep.");
		}
	}
	else if( a==0 && b != 0 && c!=0 )
	{
		x = -b/c;
		printf("\nPhuong trinh co nghiem la : %.1f " , x);
	}
	else if( a!=0 && b==0 && c !=0 )
	{
		x1 =sqrt(c/a);
		x2 =-sqrt(c/a);
		printf("\nPhuong trinh co nghiem x1 = %.1f va x2 = %.1f ",x1,x2);
	}
	else if(a == 0 && b==0 && c != 0)
	{
		printf("\nPhuong trinh vo nghiem");
	}
	else
	{
		printf("\nPhuong trinh vo so nghhiem");
	}

	return 0 ;
}	






