#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0;
    a=rand()%100+1;
    int i=1;
    while(i<8)
    {
        int input=0;
        printf("��������µ����֣�");
        scanf("%d",&input);
        if(input>a)
        {
            printf("�´���\n ");
            i++;
        }
        else if(input<a)
        {
            printf("��С��\n");
            i++;
        }
        else
        {
            printf("�¶���\n");
            break;
        }
    }
    if(i==8)
    {
        printf("�����þ�����Ϸ����\n");
    }

    return 0;
}
