//��������� ��� ����� - ��������� �� � main, ������ ��� � ��� �������, �� ������ �� �������� ���������, � ��� �� �� ������� �� �������//


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);

    int temp = x;
    x = y;
    y = temp;

    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}