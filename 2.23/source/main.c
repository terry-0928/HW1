#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    printf("請輸入三個整數：\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = num1;
    smallest = num1;

    if (num2 > largest) {
        largest = num2;
    }
    if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    printf("最大值是：%d\n", largest);
    printf("最小值是：%d\n", smallest);

    return 0;
}
