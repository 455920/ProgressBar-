#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h> 
#include<stdlib.h>
#define PASSWORDLEN 30
int main()
{
	char buf[101]={0};
	//���뻺���� 
	char password[PASSWORDLEN]={0};
	char* p="-\|//";
	int i=0;
	char ch=0;

	printf("��������֤����(����123):");	
	do
	{
		
		// getch���Խ��ܼ����źŵ��ǲ���ʾ����Ļ�� 
		while((ch=getch())!=13) //�������з���ͣ�� 
		{
			system("cls"); 
			int j=0;
			printf("��������֤����(����123):");	
			if(ch==8)//backspace��acs����8  ɾ��һ������ 
			{
				if(i>0)
				password[i--]=0;
			 } 
			 else
			{
				if(i<PASSWORDLEN)
				{
							password[i++]=ch;
				}	
		
			} 
			while(j<i)//����������������ĸ�����ӡ* 
			{
				printf("*");
				j++;
			}		
			
		}
		if(!strcmp(password,"123")) 
		{
			printf("\n");
			printf("��֤�ɹ�\n");
			break;
		}
	
		//���뻺�������³�ʼ�� 
		memset(password,0,PASSWORDLEN); 
			system("cls");
		printf("�������!\n");
		i=0;
	}
	while(1);
	//�ı���ɫ 
	system("color A8"); 
	printf("���ڵ���Դ������!\n"); 
	printf("��������ȴ�\n"); 
	for(int j=0;j<100;j++)
	{
		buf[j]='#';

		printf("[%-100s][%c%d][%c]\r",buf,'%',j,p[j%5]);
		Sleep(20);
	 } 
	 printf("\n�������\n");
	 system("start https://github.com/");
	return 0;
	
 } 
