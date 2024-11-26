#include<stdio.h>

int main()
{
	int number , tong = 0 ;
	for(int i = 1 ; i <= 5 ; i++)
	{
		printf("\nMoi ban nhap so thu %d :", i );
		scanf("%d",&number);
		
		if( number % 2 !=0 )
		{
			tong += number ; 
		}
	}
	
	printf("\nTong cac so le la :%d", tong );
	return 0 ; 
}