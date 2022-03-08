#include "cwstdio.h"

void get_char() {
	getchar();
	getchar();
	system("cls");
}

int inputMoney() {

	int flag = 0;

	while (!flag) {
		printf("-------------------------------\n");

		printf("우유 자판기\n");
		//Sleep(500); 
		printf("돈을 넣으세요!\n ");
		printf("-------------------------------\n");

		//Sleep(500); 
		printf("투입액(1000원~20000원) >>");

		scanf_s("%d", &money);

		if (money < 1000 || money > 20000) {
			printf("잘못 입력했습니다. \n");
		}
		else {
			printf("-------------------------------\n");
			printf("%d원 들어왔습니다.\n", money);
			printf("-------------------------------\n");

			return money;
		}

	}
}

void displayMenu() {
	printf("   ♥                        BEVERAGE                      ♥ \n");
	printf("   ♥                                                      ♥ \n");
	printf("   ♥         ○             (0)__(0)           ○         ♥ \n");
	printf("   ♥   ○          ○       ( 'ㅅ' )     ○          ○   ♥ \n");
	printf("   ♥                        (  oo  )o                     ♥ \n");
	printf("   ♥                         0----0                       ♥ \n");
	printf("   ♥------------------------------------------------------♥ \n");
	printf("   ♥                         M E N U                      ♥ \n");
	printf("   ♥------------------------------------------------------♥ \n");
	printf("   ♥                1. 기본 우유 (2,000원)                ♥ \n");
	printf("   ♥                2. 타로 우유 (2,000원)                ♥ \n");
	printf("   ♥                3. 딸기 우유 (3,000원)                ♥ \n");
	printf("   ♥                4. 초코 우유 (3,000원)                ♥ \n");
	printf("   ♥                5. 커피 우유 (4,000원)                ♥ \n");
	printf("   ♥                6. $$ 돈 추가 $$                      ♥ \n");
	printf("   ♥------------------------------------------------------♥ \n");
}

//void selectMenu() {
//	printf("1. 메뉴 선택\t");
//	printf("2. 자판기 끄기\n");
//
//	scanf_s("%d", &realMenu);
//
//	return;
//}
//void selectMenu2() {
//
//    selectMenu();
//	int flag = 0;
//
//	while (!flag) {
//		
//		switch (realMenu) {
//		case 1:
//			printf("메뉴 선택 누름.\n");
//			get_char();
//			menuChoice();
//			break;
//		case 2:
//			printf("자판기를 종료하겠습니까? (y or n)");
//			scanf_s("%c", &yn ,2);
//
//				if (yn == 'y')
//					flag = 1;
//
//				else if (yn == 'n') {
//					Sleep(500); printf("자판기를 다시 시작합니다...\n");
//					printf("+++++++++++++++++++\n");
//					menuChoice();
//				}
//				else {
//					printf("다시 입력! ");
//				}
//				break;
//			
//		default: break;
//		}
//	}
//	printf("프로그램 종료");
//	return;
//}

void calmilk(int mmilk) {
	if ((mmilk * menuNum) > money) {
		printf("돈이 부족합니다. (가격 : %d, 현재 잔액 : %d)", mmilk * menuNum, money);
	}
	else {
		totalMoney = mmilk * menuNum;
		change = money - totalMoney;
		money = change;
		printf("-------------------------------\n");
		printf("%s를 %d개 구매하였습니다.\n", tmp1.name, menuNum);
		printf("총 가격은 %d입니다.\n", totalMoney);
		printf("거스름돈은 %d입니다.\n", change);
		printf("-------------------------------\n");

	}
}

int menuChoice() {
	displayMenu();
	int flag = 0;
	while (!flag) {
		printf("메뉴를 선택하세요! >> \n");
		scanf_s("%d", &choiceMenu);

		if (choiceMenu > 6 || choiceMenu < 0) {
			printf("다시 입력하세요!\n ");
		}

		fflush(stdin);
		if (choiceMenu < 6 && choiceMenu > 0) {
			printf("몇 개 구매 하세요? >>");
			scanf_s("%d", &menuNum);
		}
		

		switch (choiceMenu) {

		case 1:
			if ((tmp1.money * menuNum) > money) {
				printf("돈이 부족합니다. (가격 : %d, 현재 잔액 : %d)", tmp1.money * menuNum, money);
			}
			else {
				totalMoney = tmp1.money * menuNum;
				change = money - totalMoney;
				money = change;
				printf("-------------------------------\n");
				printf("%s를 %d개 구매하였습니다.\n", tmp1.name, menuNum);
				printf("총 가격은 %d입니다.\n", totalMoney);
				printf("거스름돈은 %d입니다.\n", change);
				printf("-------------------------------\n");
			}
			get_char();
			break;
		case 2:
			if ((tmp2.money * menuNum) > money) {
				printf("돈이 부족합니다. (가격 : %d, 현재 잔액 : %d)", tmp2.money * menuNum, money);
			}
			else {
				totalMoney = tmp2.money * menuNum;
				change = money - totalMoney;
				money = change;
				printf("-------------------------------\n");
				printf("%s를 %d개 구매하였습니다.\n", tmp2.name, menuNum);
				printf("총 가격은 %d입니다.\n", totalMoney);
				printf("거스름돈은 %d입니다.\n", change);
				printf("-------------------------------\n");
			}
			get_char();
			break;
		case 3:
			if ((tmp3.money * menuNum) > money) {
				printf("돈이 부족합니다. (가격 : %d, 현재 잔액 : %d)", tmp3.money * menuNum, money);
			}
			else {
				totalMoney = tmp3.money * menuNum;
				change = money - totalMoney;
				money = change;
				printf("-------------------------------\n");
				printf("%s를 %d개 구매하였습니다.\n", tmp3.name, menuNum);
				printf("총 가격은 %d입니다.\n", totalMoney);
				printf("거스름돈은 %d입니다.\n", change);
				printf("-------------------------------\n");
			}
			get_char();
			break;
		case 4:
			if ((tmp4.money * menuNum) > money) {
				printf("돈이 부족합니다. (가격 : %d, 현재 잔액 : %d)", tmp4.money * menuNum, money);
			}
			else {
				totalMoney = tmp4.money * menuNum;
				change = money - totalMoney;
				money = change;
				printf("-------------------------------\n");
				printf("%s를 %d개 구매하였습니다.\n", tmp4.name, menuNum);
				printf("총 가격은 %d입니다.\n", totalMoney);
				printf("거스름돈은 %d입니다.\n", change);
				printf("-------------------------------\n");
			}
			get_char();
			break;
		case 5:
			if ((tmp5.money * menuNum) > money) {
				printf("돈이 부족합니다. (가격 : %d, 현재 잔액 : %d)", tmp5.money * menuNum, money);
			}
			else {
				totalMoney = tmp5.money * menuNum;
				change = money - totalMoney;
				money = change;
				printf("-------------------------------\n");
				printf("%s를 %d개 구매하였습니다.\n", tmp5.name, menuNum);
				printf("총 가격은 %d입니다.\n", totalMoney);
				printf("거스름돈은 %d입니다.\n", change);
				printf("-------------------------------\n");
			}
			get_char();
			break;

		case 6: MoneyPlus:
			fflush(stdin);
			printf("돈을 추가로 넣겠습니까? (y/n) >>");
			scanf("%c", &yn);
			//get_char();

			if (yn == 'y') {
				Sleep(500);
				printf("추가할 금액을 입력하세요.\n");
				scanf("%d", &plusMoney);
				money += plusMoney;
				printf("남은 돈은 %d입니다.", money);
				get_char();
				displayMenu();
				continue;
			}
			else if (yn == 'n') {
				Sleep(500);
				printf("자판기 계속 운영합니다...\n");
				get_char();
				Sleep(500);
				displayMenu();
				continue;
			}
			else {
				printf("잘못 입력하셨습니다.\n");
				goto MoneyPlus;
			}
			get_char();
			break;

		default:
			break;
		}

	Finish:
		//fflush(stdin);
		printf("자판기를 종료하시겠습니까?(y/n)>>");
		gets("%c", &yn);

		if (yn == 'y') {
			Sleep(500);
			printf("자판기 종료합니다...\n");
			Sleep(500);
			//printf("총 계산한 가격은 %d 이고, \n", money);
			printf("거스름돈은 %d입니다.", money);
			Sleep(500);
			break;
		}
		else if (yn == 'n') {
			Sleep(500);
			printf("자판기 계속 운영합니다...\n");
			Sleep(500);
			displayMenu();
			continue;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
			goto Finish;
		}
	}
	return 0;
}

int main() {

	inputMoney();
	//displayMenu();
	//selectMenu2();
	menuChoice();

	return 0;
}