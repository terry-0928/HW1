#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    printf("�п�J�T�Ӿ�ơG\n");
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

    printf("�̤j�ȬO�G%d\n", largest);
    printf("�̤p�ȬO�G%d\n", smallest);

    return 0;
}
