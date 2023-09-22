#include<stdio.h>
#include <math.h>
#include <ctype.h>

int main(void){
    char first_name[]="Tayu";
    char last_name[]="lo";
    char gender='m';
    int birth_year=1954;
    int birth_month=7;
    int birth_day=20;
    char weekday[]="Tuesday";
    int c_score=40;
    int music_score=99;
    int med_score=80;
    double mean=(c_score+music_score+med_score)/3;
    double sd=sqrt(pow(c_score-mean,2)+pow(music_score-mean,2)+pow(med_score-mean,2));
    int rank=10;
    printf("%s %s \t %c\n"
           "%.2d-%d-%d \t %.3s.\n"
           "%d \t %d \t %d\n"
           "%.1f \t %.2f \t %d%%\n",
           first_name,last_name,toupper(gender),
           birth_month,birth_day,birth_year,weekday,
           c_score,music_score,med_score,
           mean,sd,rank);


}
