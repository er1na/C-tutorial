#include <stdio.h>
int main(void) {

	int stu = 0, i, score, j;

	do {
		puts("�l����1�`80�œ��͂��Ă�������");
		scanf("%d", &stu);  //�l�������
		printf("\n");
	} while (stu < 1 && stu > 80);  //1�`80�œ��͂���Ȃ�������J��Ԃ�

	int graph[80]; //�ő�v�f��80�̔z��graph���`

	printf("%d�l�̓_������͂��Ă�������\n", stu);

	for (i = 1; i <= stu; i++) {
	loop:  //goto������W�����v
		printf("%d�ԁF", i);
		scanf("%d", &score);  //i�l�ڂ̓_�������
		if (score < 0 || score > 100) {
			printf("0�`100�œ��͂��Ă�������\n");  
			goto loop;  //0�`100�œ��͂���Ȃ��������蒼��
		}
		graph[i] = score;  //�z��graph�ɓ_�����i�[
	}

	printf("�@�@ 100�F");
	for (i; i >= 1; i--) {
		if (graph[i] == 100) {
			printf("*");  //100�_�̐l�����o��
		}
	}

	printf("\n");

	int a = 99, b = 90;  

	for (j = 1; j <= 10; j++) {�@//90�`99�͈̔͂���0�`9�͈̔͂܂�

		printf("%3d�`%3d�F", b, a);  
		for (i; i <= stu; i++) {
			if (graph[i] <= a && graph[i] >= b) {  //�͈͂̒��ɂ��邩����
				printf("*");
			}
		}

		printf("\n");

		a -= 10;  
		b -= 10;  //����l�Ɖ����l�͈̔͂�ύX

		i = 1;  //�Y����i�̃��Z�b�g

	}

	return 0;

}