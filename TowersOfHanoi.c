#include <stdio.h>


void TowersOfHanoi(int n, char fromPeg, char toPeg, char sparePeg);
int step = 0;

int main() {
	printf("Welcome to Towers of Hanoi!\n");
	printf("Enter the number of disks >");
	int n;
	scanf("%d", &n);
	TowersOfHanoi(n, 'A', 'C', 'B');
}

void TowersOfHanoi(int n, char fromPeg, char toPeg, char sparePeg) {
	if (n == 1) {
		printf("Step %d) Move disk 1 from %c to %c\n",++step, fromPeg, toPeg);
	}
	else {
		TowersOfHanoi(n-1, fromPeg, sparePeg, toPeg);
		printf("Step %d) Move disk %d from %c to %c\n", ++step, n, fromPeg, toPeg);
		TowersOfHanoi(n-1, sparePeg, toPeg, fromPeg);
	}
}