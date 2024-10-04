#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float v1, v2, v3, v4, media;

    printf("digite 4 valors do tipo real: ");
    scanf("%f%f%f%f", &v1, &v2, &v3, &v4);

    media = (v1 + v2 + v3 + v4) / 4;

    printf("A media aritmetrica e: %.2f\n", media);

    system("pause");
    return 0;    
}