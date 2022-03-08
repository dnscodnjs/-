#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

//#define milk 2000
//#define taromilk 2000
//#define strawberrymilk 3000
//#define chocomilk 3000
//#define coffeemilk 4000

typedef struct
{
	int number;
	char name[30];
	int money;

}BEVERAGE;

BEVERAGE tmp1 = { 1, "기본 우유", 2000 };
BEVERAGE tmp2 = { 2, "타로 우유", 2000 };
BEVERAGE tmp3 = { 3, "딸기 우유", 3000 };
BEVERAGE tmp4 = { 4, "초코 우유", 3000 };
BEVERAGE tmp5 = { 5, "커피 우유", 4000 };


int money, plusMoney, choiceMenu, menuStore, menuNum, totalMoney, change, realMenu = 0;
char yn = 0;