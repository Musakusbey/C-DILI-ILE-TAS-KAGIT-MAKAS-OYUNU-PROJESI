#include <stdio.h>
#include <stdlib.h>

int main ( ){
	
	int T=1;
	
	int k=2;
	
	int m=3;
	
	int i;
	
	int oyuncu=0;
	
	int bilgisayar=0;
	
	int secim;
	
	srand(time(NULL));
	
	printf("Tas=1;Kagit=2,Makas=3");
	
	for(i=0;i<5;i++)
	{
		printf("seciminizi giriniz:");
		
		scanf("%d",&secim);
		
		int bilgisayar=rand()%3+1;
		
		if(secim==1)
		{
			if(bilgisayar==1)
			{
				printf("beraber bitti");
			}
			
			else if(bilgisayar==2)
			{
				printf("bilgisayar kazandi");
				
				bilgisayar=bilgisayar+1;
			}
			
			else if (bilgisayar==3)
			
				printf("oyuncu kazandi");
				
				oyuncu=oyuncu+1;
			
			
		}
		
		else if(secim==2)
		{
			if(bilgisayar==2)
			{
				printf("berabere bitti");
			}
			
			else if(bilgisayar==3)
			{
				printf("oyuncu kazandi");
				
				oyuncu=oyuncu+1;
			}
			
			else if (bilgisayar==1)
			
				printf("bilgisayar kazandi");
				
				bilgisayar=bilgisayar+1;
			
			
		}
		
		else if(secim==3)
		{
			
			if(bilgisayar==3)
			{
				printf("berabere bitti");
			}
			
			else if(bilgisayar==2)
			{
				printf("bilgisayar kazandi");
				
				bilgisayar=bilgisayar+1;
			}
			
			else if (bilgisayar==1)
			
				printf("oyuncu kazandi");
				
				oyuncu=oyuncu+1;
			
			
		}
		
		else
		{
			printf("hatali giris yaptiniz");
		}
		
	}
	
	if(bilgisayar>oyuncu)
	{
		printf("bilgisayar kazandi %d --- %d", bilgisayar,oyuncu);
	}
	
	else if(bilgisayar<oyuncu)
	{
		printf("oyuncu kazandi %d --- %d",oyuncu,bilgisayar);
	}
	
	else
	{
		printf("berabere kaldiniz");
	}
	
	return 0;
}
