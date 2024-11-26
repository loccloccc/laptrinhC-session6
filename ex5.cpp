#include<stdio.h>

int main()
{
	int  month , year ; 
	printf("\nMoi ban nhap thang : ");
	scanf("%d",&month);
	printf("\nMoi ban nhap nam : ");
	scanf("%d",&year);
	if(year%400==0 || (year%4==0 && year && 100 != 0))
	{
		switch(month)
		{
			case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
			printf("\nThang %d co 31 ngay.",month);
			break ; 
			case 4 : case 6 : case 9 : case 11:
			printf("\nThang %d co 30 ngay",month);
			break ; 
			case 2 :
			printf("\nThang %d co 29 ngay.",month);
			break ; 
		}
	}
	else
	{
		switch(month)
		{
			case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
			printf("\nThang %d co 31 ngay.",month);
			break ; 
			case 4 : case 6 : case 9 : case 11:
			printf("\nThang %d co 30 ngay",month);
			break ; 
			case 2 :
			printf("\nThang %d co 28 ngay.",month);
			break ; 
		}	
	}
}