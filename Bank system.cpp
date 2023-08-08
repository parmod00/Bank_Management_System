//BANK MANAGEMENT SYSTEM

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

int opt,value,retrieve;
long int balance;
char name[20],f_name[30],address[50],email[40],mob_no[15];

//FUNCTION DECLERATIONS
void header();
void not_reg();
void menu();
void create_acc();
void deposit();
void check_bal();
void withdraw();
void interest();
void transfer();
void sorry();
int delay(int mili_sec);

//MAIN FUNCTION
int main()
{
	menu();
	return 0;
}

//MENU OPTIONS
void menu()
{
	system("cls");
	header();
	printf("\t\t\t\t|\t\t\t  Menu\t\t\t\t|\n");
	printf("\t\t\t\t|*******************************************************|\n");
	printf("\t\t\t\t|\t1. Create Account\t\t\t\t|\n");  
	printf("\t\t\t\t|\t2. Check Balance\t\t\t\t|\n");
	printf("\t\t\t\t|\t3. Deposit Money\t\t\t\t|\n");
	printf("\t\t\t\t|\t4. Withdraw Money\t\t\t\t|\n");
	printf("\t\t\t\t|\t5. Check Interest\t\t\t\t|\n");
	printf("\t\t\t\t|\t6. Money Transfer\t\t\t\t|\n");
	printf("\t\t\t\t|\t7. End\t\t\t\t\t\t|\n");
	printf("\t\t\t\t|\tChoose Any Option You want to Access\t\t|\n");
	printf("\t\t\t\t|*******************************************************|\n");
	do{
		printf("\t\t\t\t\t");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				create_acc();
				break;
			case 2:
				check_bal();
				break;
			case 3:
				deposit();
				break;
			case 4:
				withdraw();
				break;
			case 5:
				interest();
				break;
			case 6:
				transfer();
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("\t\t\t\t|*******************************************************|\n");
				printf("\t\t\t\t|\tPlease Enter Options between 1 to 6.\t\t|\n\t\t\t\t|\t\t     Thank You\t\t\t\t|\n");
				printf("\t\t\t\t|*******************************************************|\n");
				break;
		}
	}while(opt>5);
}

//CREATE ACCOUNT
void create_acc()
{
	int back;
	do
	{
		system("cls");
		header();
		printf("\t\t\t\t|\t\t     Create Account\t\t\t|\n");
		printf("\t\t\t\t*********************************************************\n");
		printf("\t\t\t\t\tEnter Your Name\t\t\t\t\t\n\t\t\t\t\t");
		scanf("%s",&name);
		printf("\t\t\t\t\tFather Name\t\t\t\t\t\n\t\t\t\t\t");
		scanf("%s",&f_name);
		printf("\t\t\t\t\tEnter Mobile Number\t\t\t\t\t\n\t\t\t\t\t");
		scanf("%s",&mob_no);
		printf("\t\t\t\t\tEnter Address\t\t\t\t\t\n\t\t\t\t\t");
		scanf("%s",&address);
		printf("\t\t\t\t\tEnter E-mail Address\t\t\t\t\t\n\t\t\t\t\t");
		scanf("%s",&email);
		printf("\t\t\t\t*********************************************************\n");
		printf("\t\t\t\t\tYour Name     : %s\n\t\t\t\t\tFather Name   : %s\n\t\t\t\t\tMobile Number : %s\n\t\t\t\t\tAddress       : %s\n\t\t\t\t\tEmail-id      : %s\n",name,f_name,mob_no,address,email);
		printf("\t\t\t\t*********************************************************\n\n");
		printf("\t\t\t    Would You Like To Submit Press 1 or for change the details press 2\n\t\t\t\t\t");
		scanf("%d",&value);
	}while(value!=1);
	printf("\t\t\t\t*********************************************************\n");
	printf("\t\t\t    You are succesfully registered now you can Access other feature\n\n");
	start:
	printf("\t\t\t\t\tPress 1 to go to menu\n\t\t\t\t\t");
	scanf("%d",&back);
	if(back==1)
		menu();
	else
		goto start;
}

//CHECK BALANCE
void check_bal()
{
	int back;
	system("cls");
	header();
	printf("\t\t\t\t|\t\t     Check Balance\t\t\t|\n");
	printf("\t\t\t\t*********************************************************\n");
	if(value!=1)
	{
		not_reg();
	}
	else if(balance==0)
	{
		int check;
		printf("\t\t\t\t\tSorry you don't have enough balance\n");
		printf("\t\t\t\t*********************************************************\n");
		start:
		printf("\t\t\t\t\tPress 1 to Menu\n\t\t\t\t\t");
		scanf("%d",&check);
		if(check==1)
			menu();
		else
			goto start;
	}
	else
	{
		printf("\t\t\t\t\tAccount Holder : %s\n",name);
		printf("\t\t\t\t\tMobile Number : %s\n",mob_no);
		printf("\t\t\t\t\tBalance = %ld\n",balance);
		printf("\t\t\t\t*********************************************************\n");
		begin:
		printf("\t\t\t\t\tPress 1 to go to Menu\n\t\t\t\t\t");
		scanf("%d",&back);
		if(back==1)
			menu();
		else
			goto begin;
	}
}

//DEPOSIT MONEY
void deposit()
{
	int back;
	system("cls");
	header();
	printf("\t\t\t\t|\t\t     Deopsit Money\t\t\t|\n");
	printf("\t\t\t\t*********************************************************\n");
	if(value!=1)
	{
		not_reg();
	}
	else
	{
		int bal;
		printf("\t\t\t\t\tEnter the amount you want to deposit\n\t\t\t\t\t");
		scanf("%d",&bal);
		balance +=bal;
		printf("\t\t\t\t\tThankyou for adding money\n");
		printf("\t\t\t\t*********************************************************\n");
		begin:
		printf("\t\t\t\t\tPress 1 to go to Menu\n\t\t\t\t\t");
		scanf("%d",&back);
		if(back==1)
			menu();
		else
			goto begin;
	}
}

//WITHDRAW MONEY
void withdraw()
{
	int back;
	system("cls");
	header();
	printf("\t\t\t\t|\t\t     Withdraw Money\t\t\t|\n");
	printf("\t\t\t\t*********************************************************\n");
	if(value!=1)
	{
		not_reg();
	}
	else if(balance==0)
	{
		sorry();
	}
	else
	{
		printf("\t\t\t\t\tHow much money you want to withdraw\n\t\t\t\t\t");
		scanf("%d",&retrieve);
		if(balance>=retrieve)
		{
			balance -=retrieve;
			printf("\t\t\t\t\tThankyou your balance is updated please check\n");
			printf("\t\t\t\t*********************************************************\n");
			begin1:
			printf("\t\t\t\t\tPress 1 to go to Menu\n\t\t\t\t\t");
			scanf("%d",&back);
			if(back==1)
				menu();
			else
				goto begin1;
		}
		else
		{
			sorry();
		}
	}
}

//CALCULATE INTEREST
void interest()
{
	int back;
	system("cls");
	header();
	printf("\t\t\t\t|\t\t     Interest On Money\t\t\t|\n");
	printf("\t\t\t\t*********************************************************\n");
	if(value!=1)
	{
		not_reg();
	}
	else if(balance==0)
	{
		sorry();
	}
	else
	{
		float ci,time;
		printf("\t\t\t\t       How many years interest you want to calculate\n\t\t\t\t\t");
		scanf("%f",&time);
		ci=balance*pow((1+0.005),4*time);
		ci=ci-balance;
		printf("\n\t\t    Total interset you will get in %.0f years Quarterly at the rate of 2 percent is : %.2f\n\n",time,ci);
		printf("\t\t\t\t*********************************************************\n");
		begin:
		printf("\t\t\t\t\t    Press 1 to go to menu\t\t\t\n\t\t\t\t\t    ");
		scanf("%d",&back);
		if(back==1)
			menu();
		else
			goto begin;
	}
}

//TRANSFER MONEY
void transfer()
{
	int back;
	system("cls");
	header();
	printf("\t\t\t\t|\t\t     Transfer Money\t\t\t|\n");
	printf("\t\t\t\t*********************************************************\n");
	if(value!=1)
	{
		not_reg();
	}
	else if(balance==0)
	{
		sorry();
	}
	else
	{
		int trans_money;
		printf("\t\t\t\t\tPlease enter the amount you want to transfer\n\t\t\t\t\t");
		scanf("%d",&trans_money);
		if(balance<trans_money)
			{
				sorry();
			}
		else
		{
			char send[100];
			begin:
			printf("\t\t\t\t\tEnter Account Number for transfer money\n\t\t\t\t\t");
			scanf("%s",&send);
			int len=strlen(send);
			if(len<12 || len>15)
			{
				printf("\n\t\t\t   Entered Account No. is not valid (Account no. length between 12 to 15)\n\n");
				goto begin;
			}
			for(int j=0;j<len;j++)
			{
				if(send[j]>=33 && send[j]<=47 || send[j]>='A' && send[j]<='Z' || send[j]>='a' && send[j]<='z')
				{
					printf("\n\t\t\t\t\tEntered Account No. is not valid\n");
					goto begin;
				}
			}
			printf("\n\t\t\t\t    0%%",name);
			for(int i=0;i<42;i++)
			{
				delay(1);
				printf("_");
				if(i==20)
					printf("50%%");
				if(i==41)
					printf("100%%\n\n");
			}
			balance -= trans_money;
			printf("\t\t\t\t\t\t    TRANSFER SUCCESSFUL...\n\n");
			printf("\t\t\t\t*********************************************************\n");
			start:
			printf("\t\t\t\t\t    Press 1 to go to menu\t\t\t\n\t\t\t\t\t    ");
			scanf("%d",&back);
			if(back==1)
				menu();
			else
				goto start;
		}		
	}
}

//FUNCTION FOR NOT REGISTERD PERSONS
void not_reg()
{
	printf("\t\t\t\t|\t    You are not Registered on system\t\t|\n");
	printf("\t\t\t\t*********************************************************\n");
	go:
	printf("\t\t\t\t\t    Press 1 to go to menu\t\t\t\n\t\t\t\t\t    ");
	int ba_ck;
	scanf("%d",&ba_ck);
	if(ba_ck==1)	
		menu();
	else
		goto go;
}

//FUNCTION FOR HEADING
void header()
{
	printf("\t\t\t\t _______________________________________________________\n");
	printf("\t\t\t\t|\t\t\t\t\t\t\t|\n");
	printf("\t\t\t\t|\t\tBank Management System\t\t\t|\n");
	printf("\t\t\t\t|\t\t\t\t\t\t\t|\n");
	printf("\t\t\t\t|*******************************************************|\n");
}

//FUNCTION FOR BALANCE IS NOT ENOUGH
void sorry()
{
	int check;
	printf("\t\t\t\t\tSorry you don't have enough balance\n");
	printf("\t\t\t\t*********************************************************\n");
	start:
	printf("\t\t\t\t\tPress 1 to Menu and press 2 to check balance\n\t\t\t\t\t");
	scanf("%d",&check);
	if(check==2)
		check_bal();
	else if(check==1)
		menu();
	else
		goto start;
}

//FUNCTION FOR DELAY
int delay(int mili_sec)
{
	int sec,start_time;
	sec = 1000*mili_sec;
	start_time = clock();
	while(clock()<start_time+sec)
		{
			
		}
}
