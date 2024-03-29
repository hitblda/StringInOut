#pragma once
//#define  _CRT_SECURE_NO_WARNINGS 

#ifndef HEADER_H

typedef unsigned int u32;

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>

#define  ArrayNo 100

#define fastSortFN 
#define QUEEN

/*
char *a = NULL;
#define CHAR_NUM (sizeof(a)/sizeof(*a))
*/

//********************字符串长度测试********************/
int getlength(char* str);
int  charLenTest(char* str);
void StringSw(char* str, int len);   //利用指针对字符串逆序存储

//********************快排序********************/
int FindPos(int* a, int L, int H);
void QuickSort(int* a, int L, int H);
int intInput(int** data);
void fastSort();//返回值是字符串按空格转数字后,数字的个数

//********************字符串拼接查找********************/
int charIO_test2(char** arr);//字符串输入,在被调函数里面分配内存
void strStract(char* str1, char* str2);
int ViolentMatch(char* s, char** p);

//获取第一个参数,字符串str,空格的字符的个数结果从第二个参数输出
//将第一个参数中空格去除之后,再从第一个参数传出去
int get_non_space_cnt(/*inout */char** str,/*out*/ int* cnt_p);
//获取第一个参数,字符串,剔除头尾的空格,保留字符间的空格
int trimSpace(char** inbuf, char* outbuf);

int getMem(char** mem, int* len);
void freeMem(char** mem);

int get_mem(/*out */char** mem1, int* mem_len1, char** mem2, int* mem_len2); void free_mem(char** mem1, char** mem2);
void free_mem(char** mem1, char** mem2);

/************************************************************************/
/*			                    二级指针                                */
/************************************************************************/
char** getMem2Pointer(int num);
void freeMem2Pointer(char** array, int num);
void print2Pointer(char** str, int num);
void sort_array(char** array, int num);
//三级指针
void getMem3Pointer(char*** myArray, int num);
void freeMem3Pointer(char*** array, int num);

/************************************************************************/
/*                           字符串处理函数                             */
/************************************************************************/
int splitStr(char* str, char ch, char arr[][10], int* cnt);
int splitStrStack(char* str, char ch, char*** arr, int* cnt);

/************************************************************************/
/*                          指针数组,数组指针                           */
/************************************************************************/
void makeArray(int a[3][5]);
void printArray(int a[3][5]);

void makeArray3(int(*cube)[5][6], int row, int col, int height);
void printArray3(int a[][5][6], int row, int col, int height);

/************************************************************************/
/*                  找到字符数组里指定的字符串位置                      */
/************************************************************************/
int SearchKey(const char* table[], const int size, const char* key, int* pos);



/************************************************************************/
/*                          结构体数据处理                              */
/************************************************************************/
#define NAME_LEN  64

struct teacher
{
	int id;				//占4字节
	char* name;			//占4字节
	char tName[8];		//tName[10]占12字节,tName[1~4]占4字节,tName[5~8]占8字节
	struct teacher* p1; //占4字节
};

void copy_teacher_deep(struct teacher* to, struct teacher* from);
void print_teacher(struct teacher tp);


#endif



