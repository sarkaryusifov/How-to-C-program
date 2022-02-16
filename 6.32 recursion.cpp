#include<stdio.h>
#define SIZE 20
bool func_x(int a[SIZE], int x, int y);

int main(void)
{
	int i;
	int k;
	int array[SIZE]={};
array[0]=0;
	for(i=1;i<SIZE; i++)
	{
		array[i]=array[i-1]+2;
	}
	
	printf("Axtardiginiz ededi daxil edin:");
	scanf("%d", &k);

	func_x(array,k, 0);
	
}
bool func_x(int a[SIZE], int x, int y)
{
	int i;
	int n;
	if(y>SIZE)
	{
		printf("\n Teessuf:( Axtardiginiz eded tapilmadi.");
		return false;
	}	
	if(a[y]!=x)
	{
		func_x(a,x,y+1);
	}
	if(a[y]==x)
	{
	printf("\nAxtardiginiz eded tapildi: %d", a[y]);
	}
	return true;	
}