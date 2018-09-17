#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h> 
#include<stdlib.h>
#define PASSWORDLEN 30
int main()
{
	char buf[101]={0};
	//密码缓冲区 
	char password[PASSWORDLEN]={0};
	char* p="-\|//";
	int i=0;
	char ch=0;

	printf("请输入验证密码(密码123):");	
	do
	{
		
		// getch可以接受键盘信号但是不显示在屏幕上 
		while((ch=getch())!=13) //遇到换行符就停下 
		{
			system("cls"); 
			int j=0;
			printf("请输入验证密码(密码123):");	
			if(ch==8)//backspace的acs码是8  删除一个密码 
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
			while(j<i)//根据我们输入密码的个数打印* 
			{
				printf("*");
				j++;
			}		
			
		}
		if(!strcmp(password,"123")) 
		{
			printf("\n");
			printf("验证成功\n");
			break;
		}
	
		//密码缓冲区重新初始化 
		memset(password,0,PASSWORDLEN); 
			system("cls");
		printf("密码错误!\n");
		i=0;
	}
	while(1);
	//改变颜色 
	system("color A8"); 
	printf("正在弹跳源码链接!\n"); 
	printf("加载中请等待\n"); 
	for(int j=0;j<100;j++)
	{
		buf[j]='#';

		printf("[%-100s][%c%d][%c]\r",buf,'%',j,p[j%5]);
		Sleep(20);
	 } 
	 printf("\n加载完毕\n");
	 system("start https://github.com/");
	return 0;
	
 } 
