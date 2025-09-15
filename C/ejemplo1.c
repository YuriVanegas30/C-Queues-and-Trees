#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ejemplo1() {
    int x = 5;
    int *p = &x;
    printf("Ejemplo 1: x = %d, *p = %d\n", x, *p);
}
void ejemplo2() {
    int x = 10;
    int *p = &x;
    *p = 20;
    printf("Ejemplo 2: x = %d\n", x);
}
void ejemplo3() {
    int arr[3] = {1, 2, 3};
    int *p = arr;
    printf("Ejemplo 3: Primer elemento = %d\n", *p);
}
void ejemplo4() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    printf("Ejemplo 4: Array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}
void ejemplo5() {
    int a = 10;
    int *p1 = &a;
    printf("Ejemplo 5: a = %d, *p1 = %d\n", a, *p1);
}
void ejemplo6() {
    int arr[4] = {5, 10, 15, 20};
    int *p = arr;

    printf("Ejemplo 6: ");
    for (int i = 0;  i < 4; i++) {
        printf("%d ", *(p + i));

    }
}
void ejemplo7() {
    int x = 30;
    int *p = &x;
    int **pp = &p;

    printf("Ejemplo 7: x = %d, *p = %d, **pp = %d\n", x, *p, **pp);
}
void ejemplo8() {
    int arr[3] = {1, 2, 3};
    int *p = arr;

    for (int i = 0; i < 3; i++) {
        *(p + i) = *(p + i) * 2;
    }

    printf("Ejemplo 8: ");
    for (int i = 0; i < 3; i++) {
        *(p + i )
        printf("%d ", arr[i]);
    }

int main() {
    ejemplo1();
    ejemplo2();
    ejemplo3();
    ejemplo4();
    ejemplo5();
    ejemplo6();
    ejemplo7();
    ejemplo8();

    return 0;

}
