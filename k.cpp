#include<stdio.h>

int main( ){
    int arr1[60] = {0, 1, 2, [49]=49, 50, 51, 52};
    printf("arr1[52]=%d\n", arr1[52]);
    printf("arr1[56]=%d", arr1[56]);
}