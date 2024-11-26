#include<stdio.h>

int main()
{
	int answer;
	printf("Moi ban nhap so : ");
	scanf("%d",&answer);
	for(int i = 1 ; i <= answer ; i++)
	{
		if(answer%i==0)
		{
			printf("Uoc cua so da nhap la :%d\n",i);
		}
	}
}