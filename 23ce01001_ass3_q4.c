#include<stdio.h>
int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates for point 1 (x1 y1):\n");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates for point 2 (x2 y2):\n");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates for point 3 (x3 y3):\n");
    scanf("%d %d", &x3, &y3);

    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        printf("The points lie on the same straight line.\n");
    } 
    else {
        printf("The points do not lie on the same straight line.\n");
    }

    return 0;
}