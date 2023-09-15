#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0;
    a=rand()%100+1;
    int i=1;
    while(i<8)
    {
        int input=0;
        printf("请输入你猜的数字：");
        scanf("%d",&input);
        if(input>a)
        {
            printf("猜大了\n ");
            i++;
        }
        else if(input<a)
        {
            printf("猜小了\n");
            i++;
        }
        else
        {
            printf("猜对了\n");
            break;
        }
    }
    if(i==8)
    {
        printf("次数用尽，游戏结束\n");
    }

    return 0;
}
