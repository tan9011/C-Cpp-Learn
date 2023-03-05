#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int user = 1;
int stu = 0;
struct idandpassword
{
    /* data */
    char id[20];       // 账号
    char password[20]; // 密码
};

struct admin 
{
    char id[20];       // 账号
    char password[20]; // 密码
} ad = {"admin", "admin"};
struct User
{
    /* data */
    char id[20];       // 账号
    char password[20]; // 密码
}u[20]={{"user01","user01"}};
struct student
{
    /* data */
    char id[20];       // 账号
    char password[20]; // 密码
    char num[20];      //复试考号
    char name[10];     //姓名
    char academy[10];  //报考学院
    char type[10];     // 报考类别
    float course1;     //基础课1
    float course2;     //基础课2
    float course3;     //专业课1
    float course4;     //专业课2
    float preliminary; //初试总分
    float second;      //复试成绩
    float oral;        //口语成绩
    float comprehensive;//综合成绩
}s[20];
void delect()
{
    for (int i = 0; i < user; i++)
    {
        /* code */
        printf("%s,%s", u[i].id, u[i].password);
    }
    printf("请输入需要删除的账号\n");
    char id[20];
    scanf("%s", id);
    char p[20] = {0};
    for (int i = 0; i <= user; i++)
    {
        if(strcmp(id,u[i].id)==0)
        {
            int j;
            for (j = i; j < user-1; j++)
            {
                u[j] = u[j + 1];
            }
            strcpy(u[j].id, p);
            strcpy(u[j].password, p);
            break;
        }
    }
    for (int i = 0; i < user; i++)
    {
        /* code */
        printf("%s,%s", u[i].id, u[i].password);
    }
}
void addstudent(int n)
{
    printf("请输入学生考号\n");
    int t11, t12;
    char t1[5] = {0};
    char t2[3] = {0};
    char t3[4] = {0};
    while (1)
    {
        /* code */
        scanf("%s", s[n].num);
        t11 = 0;
        t12 = 0;
        if (strlen(s[n].num) != 9)
        {
            printf("输入的信息有误，请重新输入\n");
            continue;
        }
        for (int i = 0; i < 9; i++)
        {
            /* code */
            if (i < 4)
                t1[i] = s[n].num[i];
            else if (i >= 4 && i < 6)
            {
                t2[t11] = s[n].num[i];
                t11++;
            }
            else
            {
                t3[t12] = s[n].num[i];
                t12++;
            }
        }
        printf("%s%s%s", t1, t2, t3);
        if (strcmp(t1, "2021") != 0)
        {
            printf("输入的信息有误，请重新输入\n");
            continue;
        }
        if (strcmp(t2, "01") < 0 || strcmp(t2, "12") > 0)
        {
            printf("输入的信息有误，请重新输入\n");
            continue;
        }
        if (strcmp(t3, "001") < 0 || strcmp(t3, "999") > 0)
        {
            /* code */
            printf("输入的信息有误，请重新输入\n");
            continue;
        }
        break;
    }

    printf("请输入学生姓名\n");
    scanf("%s", s[n].name);
    printf("请输入报考类别\n");
    int q;
    scanf("%d", &q);
    if (q == 1)
    {
        /* code */
        strcpy(s[n].type, "学硕");
    }
    else if (q == 2)
    {
        /* code */
        strcpy(s[n].type, "专硕");
    }
    else
        strcpy(s[n].type, "非全日制");

    if (strcmp(t2, "01") == 0)
    {
        /* code */
        strcpy(s[n].academy, "通信学院");
    }
    else if (strcmp(t2, "02") == 0)
    {
        strcpy(s[n].academy, "计算机学院");
    }
    else if (strcmp(t2, "03") == 0)
    {
        strcpy(s[n].academy, "广电学院");
    }
    else if (strcmp(t2, "04") == 0)
    {
        strcpy(s[n].academy, "自动化学院");
    }
    else if (strcmp(t2, "05") == 0)
    {
        strcpy(s[n].academy, "经管学院");
    }
    else if (strcmp(t2, "06") == 0)
    {
        strcpy(s[n].academy, "研究生院");
    }
    else if (strcmp(t2, "07") == 0)
    {
        strcpy(s[n].academy, "外语学院");
    }
    else if (strcmp(t2, "08") == 0)
    {
        strcpy(s[n].academy, "安法学院");
    }
    else if (strcmp(t2, "09") == 0)
    {
        strcpy(s[n].academy, "体育学院");
    }
    else if (strcmp(t2, "10") == 0)
    {
        strcpy(s[n].academy, "传媒学院");
    }
    else if (strcmp(t2, "11") == 0)
    {
        strcpy(s[n].academy, "先进制造学院");
    }
    else if (strcmp(t2, "12") == 0)
    {
        strcpy(s[n].academy, "马克思主义学院");
    }
    printf("请输入基础课1成绩\n");
    scanf("%f", &s[n].course1);
    printf("请输入基础课2成绩\n");
    scanf("%f", &s[n].course2);
    printf("请输入专业课1成绩\n");
    scanf("%f", &s[n].course3);
    printf("请输入专业课2成绩\n");
    scanf("%f", &s[n].course4);
    printf("请输入复试成绩\n");
    scanf("%f", &s[n].second);
    printf("请输入口语成绩\n");
    scanf("%f", &s[n].oral);
    s[n].preliminary = s[n].course1 + s[n].course2 + s[n].course3 + s[n].course4;
    s[n].comprehensive = s[n].preliminary * 0.6 + s[n].second * 0.3 + s[n].oral * 0.1;
    strcpy(s[n].id, s[n].num);
    strcpy(s[n].password, s[n].num);
    printf("%s%s%s%s%.2f%.2f%.2f%.2f%.2f%.2f%.2f%.2f\n", s[n].num, s[n].name, s[n].academy, s[n].type, s[n].course1, s[n].course2, s[n].course3, s[n].course4, s[n].preliminary, s[n].second, s[n].oral, s[n].comprehensive);

}
void adduser(int m)
{
        /* code */
        printf("请输入系统管理员账号\n");
        scanf("%s", u[m].id);
        printf("请输入密码\n");
        scanf("%s", u[m].password);
        printf("添加成功\n");

}
void search()
{
    printf("请输入所查找账号\n");
    char name [10];
    scanf("%s", name);
    for (int i = 0; i < user; i++)
    {
        /* code */
        if(strcmp(name,u[i].id)==0)
            printf("1");
    }
    
}
void login(int i)
{
    char id[20];
    char password[20];
    if(i==1)
    {
        while (1)
        {
            /* code */
            printf("请输入账号\n");
            scanf("%s", id);
            printf("请输入密码\n");
            scanf("%s", password);
            if (strcmp(id, ad.id) != 0 || strcmp(password, ad.password) != 0)
            {
                printf("账号或者密码错误，请重新输入\n");
            }
            else
            {
                if (strcmp(ad.id, ad.password) == 0)
                {
                    printf("初次登录请修改密码\n");
                    scanf("%s", password);
                    strcpy(ad.password, password);
                }
                break;
            }
        }
    }
}
void adminLogin()
{
    login(1);
    while (1)
    {
        /* code */
        printf("1.增加系统操作员数据\n");
        printf("2.增加学生数据\n");
        printf("3.删除数据\n");
        printf("4.修改数据\n");
        printf("5.查询数据\n");
        int i;
        printf("请输入指令\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            adduser(user++);
            break;
        case 2:
            addstudent(stu++);
            break;
        case 3:
            delect();
            break;
        default:
            break;
        }
        if(i==0)
            break;
    }
}

int main()
{
    printf("--------欢迎来到成绩管理系统-----------\n");
    while (1)
    {
        /* code */
        printf("1.系统管理员登录\n");
        printf("2.系统操作员登录\n");
        printf("3.学生登录\n");
        printf("4.退出系统\n");
        int i;
        printf("请输入指令\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            /* code */ adminLogin();
            break;

        default:
            break;
        }
    }

    return 0;
}//加一个注释测试
