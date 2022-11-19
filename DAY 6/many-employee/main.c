#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[20];
    int age;
    int salary;
    int overtime;
    int deduction;
    float net_salary;

};
void  display_data(struct emp empolyee[])
{
    for(int i=0;i<5;i++)
    {
        printf("Employee Number %d ID is %d\n",i+1,empolyee[i].id);
        printf("Employee Number %d Name is %s\n",i+1,empolyee[i].name);
        printf("Employee Number %d Age is %d\n",i+1,empolyee[i].age);
        printf("Employee Number %d Salary is %d\n",i+1,empolyee[i].salary);
        printf("Employee Number %d Overtime is %d\n",i+1,empolyee[i].overtime);
        printf("Employee Number %d Detction is %d\n",i+1,empolyee[i].deduction);
        printf("****************************************************************\n");
    }

}
void take_date(struct emp empolyee[])
{
    for(int i =0;i<5;i++)
    {
        printf("Please Enter your ID\t");
        scanf("%d",&empolyee[i].id);
        printf("Please Enter your Name\t");
        scanf("%s",empolyee[i].name);
        printf("Please Enter your age\t");
        scanf("%d",&empolyee[i].age);
        printf("Please Enter your salary\t");
        scanf("%d",&empolyee[i].salary);
        printf("Please Enter your overtime\t");
        scanf("%d",&empolyee[i].overtime);
        printf("Please Enter your detction\t");
        scanf("%d",&empolyee[i].deduction);
    }
    system("cls");

}
int main()
{
    struct emp array[5];
    take_date(array);
    display_data(array);

    return 0;
}

