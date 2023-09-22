#include <stdio.h>

int main(void) {
    int radius=10;
    const double PI=3.14;
    //const:constant常量
    double circumference=2*PI*radius;
    double area=PI*radius*radius;
    printf("radius=%d\ncircumference=%f\narea=%f",radius,circumference,area);
//%d:decimal %f:double
//%.2f:precision
}
