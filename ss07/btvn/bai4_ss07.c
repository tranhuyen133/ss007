#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	
	do
	{
		int n,i,j,choice,sum=0,count=0,product=1;
		printf("\nNhap so nguyen n:");
	    scanf("%d",&n);
		printf("INTERGER NUMBER");
		printf("\n1.In ra day so co gia tri nho hon hoac bang n va tinh tong");
		printf("\n2.In ra va dem cac so chia het cho 3 nho hon n");
		printf("\n3.Kiem tra so co phai so nguyen to khong");
		printf("\n4.Kiem tra so co phai so hoan hao khong");
		printf("\n5.Tinh tong cac uoc so cua n");
		printf("\n6.Tinh giai thua n");
		printf("\n7.In ra so dao nguoc cua n");
		printf("\n8.In ra so nguyen to tu 1-n");
		printf("\n9.Thoat");
		printf("\nLua chon cua ban la:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(i=0;i<=n;i++)
				{
					printf("%d\t",i);
					sum+=i;
				}
				printf("\nTong la: %d",sum);
				break;
			case 2:
				for(i=0;i<n;i++)
				{
					if(i%3==0){
						count+=1;
						printf("%d",i);
					}
				}
				printf("\nSo phan tu chia het cho 3 la: %d",count);
				break;
			case 3:
				if(n==1){
					printf("n khong la so nguyen to");
				}
				else if(n==2){
					printf("n la so nguyen to");
				}
				else{
					for(i=2;i<sqrt(n);i++){
						if(n%i==0){
							count+=1;
						}
					if(count==0){
						printf("n la so nguyen to");
					}
					else{
						printf("n khong la so nguyen to");
					}
					}
				}
				break;
			case 4:
				for(i=1;i<=n;i++)
				{
					if(n%i==0){
						sum+=i;
					}
				}
				if(sum==n){
					printf("n la so hoan hao");
				}
				else{
					printf("n khong la so hoan hao");
				}
				break;
			case 5:
				for(i=1;i<=n;i++)
				{
					if(n%i==0){
						sum+=i;
					}
				}
				printf("%d",sum);
				break;
			case 6:
				for(i=1;i<=n;i++){
					product*=i;
				}
				printf("%d",product);
				break;
			case 7:
				while(n!=0){
					count=n%10;
					n=n/10;
					sum=sum*10+count;
				}
				printf("%d",sum);
				break;
			case 8:
				if(n==1){
					printf("INVALID");
				}
				else if(n==2){
					printf("2");
				}
				else{
					printf("2\t");
					for(j=3;j<=n;j++){
						count=0;
						for(i=2;i<=sqrt(j);i++){
						if(j%i==0){
							count+=1;
						}					
					    }
						if(count==0){
							printf("%d\t",j);
						}				
					}
				}
				break;
			case 9:
				exit(0);
			default:
				printf("Lua chon tu 1 den 9");
		}		
	}
	while(1==1);
}
