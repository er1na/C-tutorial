#include <stdio.h>
int main(void) {

	int stu = 0, i, score, j;

	do {
		puts("人数を1～80で入力してください");
		scanf("%d", &stu);  //人数を入力
		printf("\n");
	} while (stu < 1 && stu > 80);  //1～80で入力されなかったら繰り返し

	int graph[80]; //最大要素数80の配列graphを定義

	printf("%d人の点数を入力してください\n", stu);

	for (i = 1; i <= stu; i++) {
	loop:  //goto文からジャンプ
		printf("%d番：", i);
		scanf("%d", &score);  //i人目の点数を入力
		if (score < 0 || score > 100) {
			printf("0～100で入力してください\n");  
			goto loop;  //0～100で入力されなかったらやり直し
		}
		graph[i] = score;  //配列graphに点数を格納
	}

	printf("　　 100：");
	for (i; i >= 1; i--) {
		if (graph[i] == 100) {
			printf("*");  //100点の人数を出力
		}
	}

	printf("\n");

	int a = 99, b = 90;  

	for (j = 1; j <= 10; j++) {　//90～99の範囲から0～9の範囲まで

		printf("%3d～%3d：", b, a);  
		for (i; i <= stu; i++) {
			if (graph[i] <= a && graph[i] >= b) {  //範囲の中にあるか調査
				printf("*");
			}
		}

		printf("\n");

		a -= 10;  
		b -= 10;  //上限値と下限値の範囲を変更

		i = 1;  //添え字iのリセット

	}

	return 0;

}