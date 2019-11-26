#include "header.h"


/************************************************************************/
/*		                  递归的字符串逆序                              */
/************************************************************************/
/*
	1,利用递归,将输入的字符,逆序输出
	2,利用数组将按字节输入的数据保存,然后正序输出

	注意,VC/VS 里面的scanf 是以回车键作为输入结束标志
	而代码里面可以根据不同通信协议的要求来指定,比如此处的#
	//修改为连续的两个 ## 为结束标志,其ASCII码为0x23 

	另外,字符串 是数组 + null character空字符,即 \0
	此处,以字符 c 的格式,通过数组输出!
*/

//void charInput(char* arr, int& i)
////void charInput(int arr[], int &i) //或者,这样也OK
//{
//	char a = 0;
//
//	scanf("%c", &a);
//	//arr[i++] = a;
//	if (a != '#')
//	{
//		arr[i++] = a;
//		charInput(arr, i);//此时串口中断又发生!!
//	}
//	else
//	{
//		arr[i++] = a; //保存结束标志字节
//	}
//
//	if (a != '#')
//	{
//		printf("%c", a);
//	}
//}
void charInput(char* arr, int& i)
//void charInput(int arr[], int &i) //或者,这样也OK
{
	char a = 0;
	static char flag = 0;

	scanf("%c", &a);
	arr[i++] = a;
	if (flag ==1 )   //已经收到一个#,再收到一个#时
	{
		if (a != '#')
		{
			flag = 0;
			charInput(arr, i);//此时串口中断又发生!!
		}
		flag = 0;
	} 
	else
	{
		if (a == '#')
		{
			flag = 1;
		}
		charInput(arr, i);//此时串口中断又发生!!
	}

}

void charIO_test(char * arr, int& i)
{

	printf("输入字符串[以#结束]\n");
	charInput(arr, i);
	printf("\n");
	printf("字符串有%d个元素\n", i);
	printf("打印字符串元素:\n");

	int num;
	for (num = 0; num < i;)
	{
		printf("%c", arr[num++]);
	}
	printf("\n");
}

/////////////////////////////////////////////////////////////


void main(void)
{
//	unsigned int lenStr = 0;
//
//	int num[ArrayNo] = {0};
//	char *arr =(char *)num;  //
///************************************************************************/
///*	意图:以字符串输入,		                                            */
///*将输入的ASCII值 以空格键为区分 保存到数组,以进行排序                  */
///************************************************************************/
//
//	int i = 0;
//	printf("******************************************************\n");
//	//printf("为了方便排序,请输入0~255内的数字以表示相应ASCII码\n");
//	charIO_test(arr,i);//字符输入,输出
//
//	printf("输入字符串个数i的值是: %d\n", i);
//
//	lenStr = charLenTest(arr);//数组\字符 长度计算
//	printf("lenStr = charLenTest(arr) 的值是:  %d\n", lenStr);
//	StringSw(arr,lenStr);

	fastSort();  //快速排序

	system("pause");
}