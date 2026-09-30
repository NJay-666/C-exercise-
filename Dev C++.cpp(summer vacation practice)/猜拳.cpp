
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int rnum(){
	srand(time(NULL));
	int num = rand() % 3;
	return num;
}

int main(){
	int cguess;
	int pguess;
	int win = 0;
	int guess = 0;
	while (true){
		printf("請輸入剪刀(0)石頭(1)布(2)離開遊戲(6)\n");
		scanf("%d",&pguess);
		
		if (pguess == 6){
			printf("掰掰\n");
			break;
		}
		cguess = rnum();
		printf("電腦出拳%d\n",cguess);
		guess++;
		if (cguess == pguess){
			printf("平手\n");
			continue;
		}
		switch (pguess){
			case 0://剪刀 
				if (cguess == 2){
					printf("你贏了\n");
					win++;
				}else{
					printf("你輸了\n");
				}
				break;
			case 1://石頭 
				if (cguess == 0){
					printf("你贏了\n");
					win++;
				}else{
					printf("你輸了\n");
				}
				break;
			case 2://布 
				if (cguess == 1){
					printf("你贏了\n");
					win++;
				}else{
					printf("你輸了\n");
				}
				break;
			default://其他 
				printf("不要亂輸入\n");
		}
	}
	printf("總共玩了%d次，贏了%d次\n",guess,win);
	system("pause");
	return 0;
}
