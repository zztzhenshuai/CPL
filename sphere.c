#include<stdio.h>
int main(void){
    const double PI=3.1415926;
    int radius=100;
    double surface_area=4*PI*radius*radius;
    double volume=4.0/3*PI*radius*radius*radius;
    printf("%-15.4f:surface_area\n%-15.4f:volume\n",surface_area,volume);
}
