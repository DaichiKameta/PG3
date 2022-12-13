#include <stdio.h>
#include <functional>
#include <time.h>
#include <windows.h>

typedef void (*PFunc)();

void callback1() {
	printf("�����I�I\n");
}
void callback2() {
	printf("�s�����I�I\n");
}
void setTimeout(PFunc p, int wait) {
	Sleep(wait * 1000);
	p();
}

int main(int argc, const char* argv[]) {
	srand((int)time(NULL));

	printf("��������� < 1 > ������������< 0 >�����Ă�������\nA.");

	int a;

	scanf_s("%d", &a);

	std::function<int(int)>d = [](int) {return rand() % 6 + 1; };

	PFunc p;

	if (d(1) % 2 == a) {
		p = callback1;
	}
	else {
		p = callback2;
	}

	setTimeout(p, 3);

	return 0;
}