#include <stdio.h>

int main() {
    int number;

    printf("�п�J�@�Ӿ��: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d �O����\n", number);
    }
    else {
        printf("%d �O�_��\n", number);
    }

    return 0;
}
