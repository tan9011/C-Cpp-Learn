#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    /* data */
    char num[9];  // 学号
    char name[20];//姓名
    char academy[50];//学院
    float temperature; // 体温
    int iscough;  // 是否咳嗽
    int status;   // 健康状态
    char time[20]; // 时间
    char Date[20];      // 日期
};

void informationmanagement()
{
    FILE *fp;
    struct student a;
    char c[10];
    char m[4] = {'2','0','1','6'};
    char k[4] = {'2', '0', '1', '9'};
    char n[9] = {0};
    int i;
    printf("请输入学号\n");
    while (1)
    {
        /* code */
        scanf("%s",a.num);
        strcpy(n, a.num);
        if (strlen(a.num) != 9)
        {
            printf("输入的信息有误，请重新输入\n");
            continue;
        }
        else if (strcmp(m,n)>0||strcmp(n,k)>0)
        {
            /* code */
            printf("输入的信息有误，请重新输入\n");
            continue;
        }
        
        break;
    }
    char xueyuan[3] = {0};
    int l = 0;
    for (int j = 4; j < 6; j++)
    {
        
        /* code */
        xueyuan[l] = n[j];
        l++;
    }
    if (strcmp(xueyuan, "01") == 0)
    {
        /* code */
        strcpy(a.academy, "通信学院");
    }
    else if (strcmp(xueyuan, "02") == 0)
    {
        strcpy(a.academy, "计算机学院");
    }
    else if (strcmp(xueyuan, "03") == 0)
    {
        strcpy(a.academy, "广电学院");
    }
    else if (strcmp(xueyuan, "04") == 0)
    {
        strcpy(a.academy, "自动化学院");
    }
    else if (strcmp(xueyuan, "05") == 0)
    {
        strcpy(a.academy, "经管学院");
    }
    else if (strcmp(xueyuan, "06") == 0)
    {
        strcpy(a.academy, "研究生院");
    }
    else if (strcmp(xueyuan, "07") == 0)
    {
        strcpy(a.academy, "外语学院");
    }
    else if (strcmp(xueyuan, "08") == 0)
    {
        strcpy(a.academy, "安法学院");
    }
    else if (strcmp(xueyuan, "09") == 0)
    {
        strcpy(a.academy, "体育学院");
    }
    else if (strcmp(xueyuan, "10") == 0)
    {
        strcpy(a.academy, "传媒学院");
    }
    else if (strcmp(xueyuan, "11") == 0)
    {
        strcpy(a.academy, "先进制造学院");
    }
    else if (strcmp(xueyuan, "12") == 0)
    {
        strcpy(a.academy, "马克思主义学院");
    }
    printf("请输入姓名\n");
    scanf("%s",a.name); 
    printf("请输入体温\n");
    scanf("%f", &a.temperature);
    printf("是否咳嗽\n");
    scanf("%s", c);
    if(c=="是")
        a.iscough = 0;
    else
        a.iscough = 1;
    if (a.temperature>=37.3||a.iscough==0)
    {
        /* code */
        a.status = 0;
    }
    else
        a.status = 1;
    printf("%d%d", a.iscough, a.status);
    printf("请输入时间\n");
    scanf("%s",a.time);
    printf("请输入日期\n");
    scanf("%s",a.Date);
    if((fp=fopen("data1.txt","w"))==NULL)
    {
        printf("error");
        exit(0);
    }
    char t[10];
    fputs(a.num, fp);
    fputs("\n", fp);
    fputs(a.name, fp);
    fputs("\n", fp);
    fputs(a.academy, fp);
    fputs("\n", fp);
    sprintf(t, "%2.1f", a.temperature);
    fputs(t, fp);
    fputs("\n", fp);
    sprintf(t, "%d", a.iscough);
    fputs(t, fp);
    fputs("\n", fp);
    sprintf(t, "%d", a.status);
    fputs(t, fp);
    fputs("\n", fp);
    fputs(a.time, fp);
    fputs("\n", fp);
    fputs(a.Date, fp);
    fputs("\n", fp);
    fclose(fp);
    printf("\t学号\t    姓名\t   学院\t   体温\t   是否咳嗽\t   健康状态\t   时间\t   日期\n");
    printf("%s\t%s\t%s\t%2.1f\t%d\t%d\t%s\t%s\n",a.num,a.name,a.academy,a.temperature,a.iscough,a.status,a.time,a.Date);

}
int main()
{
    printf("-----2020学生返校健康系统管理-----\n");
    while (1)
    {
        /* code */
        
        int i;
        printf("****************************\n");
        printf("1.学生基本信息管理\n");
        printf("2.数据增加、修改\n");
        printf("3.数据查询与统计\n");
        printf("4.异常状况统计及预警\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:informationmanagement();break;

        default:
            break;
        }

        if(i==0)
            break;
        
    }
    printf("程序结束");
}