#include <stdio.h>
#include <string.h>
int O = 0;
#include <stdlib.h>
struct student
{
    /* data */
    char num[10];      // 学号
    char name[20];     // 姓名
    char academy[50];  // 学院
    float temperature; // 体温
    int iscough;       // 是否咳嗽
    int status;        // 健康状态
    char time[20];     // 时间
    char Date[20];     // 日期
} a[20];

void informationmanagement(int h)
{
    FILE *fp;
    char c[10];
    char m[4] = {'2', '0', '1', '5'};
    char k[4] = {'2', '0', '2', '0'};
    char n[9] = {0};
    int i;
    printf("请输入学号:");
    while (1)
    {
        /* code */
        scanf("%s", a[h].num);
        strcpy(n, a[h].num);
        if (strlen(a[h].num) != 9)
        {
            printf("输入的信息有误，请重新输入\n");
            continue;
        }
        else if (strcmp(m, n) > 0 || strcmp(n, k) > 0)
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
        strcpy(a[h].academy, "通信学院");
    }
    else if (strcmp(xueyuan, "02") == 0)
    {
        strcpy(a[h].academy, "计算机学院");
    }
    else if (strcmp(xueyuan, "03") == 0)
    {
        strcpy(a[h].academy, "广电学院");
    }
    else if (strcmp(xueyuan, "04") == 0)
    {
        strcpy(a[h].academy, "自动化学院");
    }
    else if (strcmp(xueyuan, "05") == 0)
    {
        strcpy(a[h].academy, "经管学院");
    }
    else if (strcmp(xueyuan, "06") == 0)
    {
        strcpy(a[h].academy, "研究生院");
    }
    else if (strcmp(xueyuan, "07") == 0)
    {
        strcpy(a[h].academy, "外语学院");
    }
    else if (strcmp(xueyuan, "08") == 0)
    {
        strcpy(a[h].academy, "安法学院");
    }
    else if (strcmp(xueyuan, "09") == 0)
    {
        strcpy(a[h].academy, "体育学院");
    }
    else if (strcmp(xueyuan, "10") == 0)
    {
        strcpy(a[h].academy, "传媒学院");
    }
    else if (strcmp(xueyuan, "11") == 0)
    {
        strcpy(a[h].academy, "先进制造学院");
    }
    else if (strcmp(xueyuan, "12") == 0)
    {
        strcpy(a[h].academy, "马克思主义学院");
    }
    printf("请输入姓名:");
    scanf("%s", a[h].name);
    printf("请输入体温:");
    scanf("%f", &a[h].temperature);
    printf("是否咳嗽:");
    scanf("%s", c);
    if (strcmp(c,"是")==0)
        a[h].iscough = 0;
    else
        a[h].iscough = 1;
    if (a[h].temperature >= 37.3 || a[h].iscough == 0)
    {
        /* code */
        a[h].status = 0;
    }
    else
        a[h].status = 1;
    printf("%d%d", a[h].iscough, a[h].status);
    struct student temp[20];
    for (int p = 0; p <= h; p++)
        temp[p] = a[h];
    printf("请输入时间:");
    scanf("%s", a[h].time);
    printf("请输入日期:");
    scanf("%s", a[h].Date);
    if ((fp = fopen("data1.txt", "w")) == NULL)
    {
        printf("error");
        exit(0);
    }
    char t[10];
    for (int y = 0; y <= h; y++)
    {
        fseek(fp, y * sizeof(struct student), 0);
        fprintf(fp, "%s%s%s%2.1f%d%d%s%s", a[y].num, a[y].name, a[y].academy, a[y].temperature, a[y].iscough, a[y].status, a[y].time, a[y].Date);
    }
    fclose(fp);
    printf("学号\t姓名\t学院\t体温\t是否咳嗽\t健康状态\t时间\t日期\n");
    printf("%s\t%s\t%s\t%2.1f\t%d\t%d\t%s\t%s\n", a[h].num, a[h].name, a[h].academy, a[h].temperature, a[h].iscough, a[h].status, a[h].time, a[h].Date);
}
void InsertorUpdate()
{
    char str[20];
    printf("请输入指令\n");
    scanf("%s", str);
    if (strcmp(str, "数据修改") == 0)
    {
        char m[20];
        printf("请输入需要修改信息的学生学号\n");
        scanf("%s", m);
        int j = -1;
        printf("%d", sizeof(a) / sizeof(struct student));
        for (int i = 0; i < sizeof(a) / sizeof(struct student); i++)
        {
            if (strcmp(m, a[i].num) == 0)
                j = i;
        }
        if (j == -1)
        {
            printf("未查找到该学号\n");
            exit(0);
        }
        else
        {
            printf("请输入需要修改的项\n");
            char n[20];
            scanf("%s", n);
            if (strcmp(n, "姓名") == 0)
            {
                printf("请输入要修改的值\n");
                scanf("%s", a[j].name);
            }
            if (strcmp(n, "体温") == 0)
            {
                printf("请输入要修改的值\n");
                scanf("%f", a[j].temperature);
            }
            if (strcmp(n, "是否咳嗽") == 0)
            {
                printf("请输入要修改的值\n");
                scanf("%d", a[j].iscough);
            }
            if (strcmp(n, "健康状态") == 0)
            {
                printf("请输入要修改的值\n");
                scanf("%d", a[j].status);
            }
            if (strcmp(n, "时间") == 0)
            {
                printf("请输入要修改的值\n");
                scanf("%s", a[j].time);
            }
            if (strcmp(n, "日期") == 0)
            {
                printf("请输入要修改的值\n");
                scanf("%s", a[j].Date);
            }
        }
    }

    else if (strcmp(str, "数据增加") == 0)
        informationmanagement(O++);
    else
        printf("error\n");
}
void searchAndinput()
{
    char n[10];
    char d[10]={0};
    int j = 0;
    int k = 0;
    printf("请输入学生学号：");
    scanf("%s", n);
    printf("请输入当前日期；");
    scanf("%s", d);
    char year[10];
    char month[10];
    char day[10];
    
    for (int i = 0; i < 8; i++)
    {
        if (i < 4)
            year[i] = d[i];
        else if (i >= 4 && i < 6)
        {
            month[j] = d[i];
            j++;
        }

        else
        {
            day[k] = d[i];
            k++;
        }
    }
    day[k] = '\0';
    int r = 0;
    struct student b[20];
    printf("截至%s年%s月%s日该生的健康管理信息为：\n", year, month, day);
    for (int i = 0; i < sizeof(a) / sizeof(struct student); i++)
    {
        if (strcmp(n, a[i].num) == 0 && strcmp(a[i].Date, d) < 0)
        {
            b[r++] = a[i];
            printf("学号：%s\n", n);
            printf("姓名：%s\n", a[i].name);
            printf("学院：%s\n", a[i].academy);
            printf("体温\t是否咳嗽\t健康状态\t时间\t日期\n");
            printf("%2.1f\t%d\t%d\t%s\t%s\n", a[i].temperature, a[i].iscough, a[i].status, a[i].time, a[i].Date);
        }
    }
    FILE *fp;
    if ((fp = fopen("data2.txt", "w")) == NULL)
    {
        printf("error");
        exit(0);
    }
    for (int y = 0; y < r; y++)
    {
        fseek(fp, y * sizeof(struct student), 0);
        fprintf(fp, "%s%s%s%2.1f%d%d%s%s", b[y].num, b[y].name, b[y].academy, b[y].temperature, b[y].iscough, b[y].status, b[y].time, b[y].Date);
    }
    fclose(fp);
}
void errostatus()
{   
    printf("请输入日期\n");
    char d[10];
    scanf("%s", d);
    int j = 0;
    FILE *fp;
    struct student c[20];
    for (int i = 0; i <= O; i++)
    {
        if (strcmp(a[i].Date, d) == 0)
        {
            if (a[i].status == 0)
            {
                c[j++] = a[i];
            }
                
        }
    }
    if ((fp = fopen("data3.txt", "w")) == NULL)
    {
        printf("error");
        exit(0);
    }
    for (int y = 0; y < j; y++)
    {
        fseek(fp, y * sizeof(struct student), 0);
        fprintf(fp, "%s%s%s%2.1f%d%d%s%s", c[y].num, c[y].name, c[y].academy, c[y].temperature, c[y].iscough, c[y].status, c[y].time, c[y].Date);
    }
    fclose(fp);

} 
void warning()
{
    int count = 0;
    struct student q[20];
    int j = 0;
    for (int i = 0; i < O; i++)
    {
        if(a[i].status==0)
        {
            for (int j = 0; j < O;j++)
            {
                if(a[j].status==0)
                {
                    if(strcmp(a[i].num,a[j].num)==0)
                    {
                        count++;
                    }
                }
            }
            if(count>=3)
            {
                q[j++] = a[i];
            }
        }
            
    }
    FILE *fp;
    if ((fp = fopen("data4.txt", "w")) == NULL)
    {
        printf("error");
        exit(0);
    }
    for (int y = 0; y < j; y++)
    {
        fseek(fp, y * sizeof(struct student), 0);
        fprintf(fp, "%s%s%s%2.1f%d%d%s%s", q[y].num, q[y].name, q[y].academy, q[y].temperature, q[y].iscough, q[y].status, q[y].time, q[y].Date);
    }
    fclose(fp);
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
        printf("4.异常状况统计\n");
        printf("5.预警\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            informationmanagement(O++);
            break;
        case 2:
            InsertorUpdate();
            break;
        case 3:
            searchAndinput();
            break;
        case 4:errostatus();
            break;
        case 5:
            warning();
            break;
        default:
            break;
        }

        if (i == 0)
            break;
    }
    printf("程序结束");
}