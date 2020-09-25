#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{ t = x; x = y; y = x; } while(0)


int main(void) {
	int x;
	int y;
	int t;

	printf(" 두 수를 입력하세요. ");
	scanf_s("%d", &t);

}
void ary_reverse(int a[], int n)
{
	
	int i;
	for (i = 0; i < n / 2; i++) {
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
