
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
// vb <> = C !=
int main(){
	srand(time(NULL));
	int rnum = rand() % 100 + 1;
	int guess = 0;
	int time = 0;
	printf("猜數字遊戲\n");
	//printf("%d\n",rnum);
	while (time < 10){
		printf("請輸入1~100範圍內的一個數字(10次機會)\n");
		scanf("%d",&guess);
		time++;
		if ( guess > rnum){
			printf("猜小點\n"); 
		}else if (guess < rnum){
			printf("猜大點\n");
		}else {
			printf("猜中了!!!\n");
			break;
		}
	}
	printf("總共猜了%d次\n",time);
	if ( guess != rnum ){
		printf("正確答案是%d，機會用完了，沒猜中\n",rnum);
	}
	system("pause");
	return 0;
}

