#include <stdio.h>

int Recoursive(int hour) {

	int startPay = 100;

	if (hour == 1) {
		return startPay;
	}
	return Recoursive(hour - 1) * 2 -50;

}

int main() {

	int hour = 8;
	int pay = 0;

	pay = Recoursive(hour);

	for (int i = 1; i < hour; i++) {
		pay = Recoursive(i);
		printf("%dŠÔ‚Å%d‰~\n", i, pay);
	}
	return 0;
}