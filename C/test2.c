#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int user = 1;
struct admin // 系统管理员
{
    char id[20];//账号
    char password[20];//密码
}ad={"admin","admin"};
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
};
void delect()
{
    printf("请输入需要删除的账号\n");
    char id[10];
    scanf("%s", id);
    for (int i = 0; i <= user;i++)
    {
        if(strcmp(id,u[i].id)==0)
        {
            int j;
            for (j = i; j < user; j++)
            {
                u[j] = u[j + 1];
            }
            i--;
        }
    }
    
}
void add(int m)
{
    printf("请输入系统管理员账号\n");
    scanf("%s", u[m].id);
    printf("请输入密码\n");
    scanf("%s", u[m].password);
    printf("添加成功\n");
}
void adminLogin()
{
    char id[20];
    char password[20];
    while(1)
    {
        /* code */
        printf("请输入账号\n");
        scanf("%s", id);
        printf("请输入密码\n");
        scanf("%s", password);
        if (strcmp(id, ad.id) != 0&&strcmp(password,ad.password)!=0)
        {
            printf("账号或者密码错误，请重新输入\n");
        }
        else 
        {
            if(strcmp(id,"admin")==0)
            {
                printf("初次登录请修改密码\n");
                scanf("%s", password);
                strcpy(ad.password, password);
            }
            break;
        }
    }
    printf("%s", ad.password);
    while (1)
    {
        /* code */
        printf("1.增加数据\n");
        printf("2.删除数据\n");
        printf("3.修改数据\n");
        printf("4.查询数据\n");
        int i;
        printf("请输入指令\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            add(user++);
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
}