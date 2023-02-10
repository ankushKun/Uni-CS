#include <stdio.h>

int main(){
    // calculate area of circle using pointers
    float radius, area;
    float *radiusPtr, *areaPtr;
    radiusPtr = &radius;
    areaPtr = &area;
    printf("Enter radius of circle: ");
    scanf("%f", radiusPtr);
    *areaPtr = 3.14 * (*radiusPtr) * (*radiusPtr);
    printf("Area of circle is: %f", *areaPtr);
    return 0;
}
