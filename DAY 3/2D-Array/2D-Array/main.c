#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

struct emp
{
    int ID;
    char Name[10];
    float salary, overtime, Deduction;
};

COORD coord= {0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void textattr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}
int lower(char name1[20],char name2[20])
{
    char ch1[20];
    char ch2[20];
    for(int i=0; i<20; i++)
    {
        ch1[i] = tolower(name1[i]);
        ch2[i] = tolower(name2[i]);
    }
    if(strcmp(ch1,ch2)==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

struct emp set_employee(struct emp employee[])
{
    float temp;
    int id;
    printf("\nEnter employee ID : ");
    scanf("%d",&id);
    employee[id].ID=id;
    printf("\nEnter employee Name : ");
    scanf("%s",&employee[id].Name);
    printf("\nEnter employee salary : ");
    scanf("%f",&temp);
    employee[id].salary=temp;
    printf("\nEnter employee overtime : ");
    scanf("%f",&temp);
    employee[id].overtime=temp;
    printf("\nEnter employee Deduction : ");
    scanf("%f",&temp);
    employee[id].Deduction=temp;
}
struct emp newemp(struct emp employee[],int replace[])
{
    float temp;
    int id;
    printf("\nEnter employee ID : ");
    scanf("%d",&id);
    if(replace[id]!=1&&id<100)
    {
        employee[id].ID=id;
        printf("\nEnter employee Name : ");
        scanf("%s",&employee[id].Name);
        printf("\nEnter employee salary : ");
        scanf("%f",&temp);
        employee[id].salary=temp;
        printf("\nEnter employee overtime : ");
        scanf("%f",&temp);
        employee[id].overtime=temp;
        printf("\nEnter employee Deduction : ");
        scanf("%f",&temp);
        employee[id].Deduction=temp;
        replace[id]=1;
    }
    else
    {
        printf("\nThis id is unreplaceable if you want to add another Enter another ID :");
        int count=0;
        for(int i=1; i<100;)
        {
            if(replace[i]==0)
            {
                printf("\n We don't have no.%d to be set \n",i);
                break;
            }
            i++;
            if(i==100)
            {
                printf("No ID to be replaced");
            }
        }
        newemp(employee,replace);
    }
}

void display(struct emp emps)
{
    float net=emps.salary+emps.overtime-emps.Deduction;
    printf("\n**************************************\n");
    printf("Employee id  : %d\nEmployee name : %s\nEmployee net salary : %f",emps.ID,emps.Name,net);
}
void menu_with_employee()
{
    struct emp emps[100];
    int replace [100]={0};

    char arr[7][20]= {"New","Search By Id", "Search By Name", "Display", "Exit"};
    int location=0, flag=0;
    char ch;
    while(flag==0)
    {
        system("cls");
        for(int i=0; i<7; i++)
        {
            gotoxy(10,7+i);
            if(i==location)
                textattr(0x70);
            printf("%s",arr[i]);
            textattr(0x07);
        }
        ch = getch();
        switch(ch)
        {
        case -32:
            ch = getch();
            switch(ch)
            {
            case 72:
                location--;
                if(location<0)
                {
                    location=6;
                }
                break;
            case 80:
                location++;
                if(location>6)
                {
                    location=0;
                }
                break;
            }
            Beep(1200,100);
            break;
        case 13:
            switch(location)
            {
            case 0:
                newemp(emps,replace);
                printf("Ok");
                getch();
                Beep(1200,100);
                break;
            case 1:
            {
                set_employee(emps);
                printf("Ok");
                getch();
                Beep(1200,100);
                break;
            }
            case 2:
            {
                int id;
                printf("\nEnter Employee's ID : ");
                scanf("%d",&id);
                if(replace[id]==1)
                {
                    replace[id]=0;
                    printf("Ok");
                }
                else
                {
                    printf("\nNo Employee with this ID.");
                }
                getch();
                Beep(1200,100);
                break;
            }
            case 3:
            {
                int id;
                printf("\nEnter employee's ID : ");
                scanf("%d",&id);
                if(replace[id]==1)
                {
                    display(emps[id]);
                    printf("\n Ok\npress any key to continue....");
                    getch();
                }
                else
                {
                    printf("\n Enter Any Key to continue please!.");
                }
                getch();
                Beep(1200,100);
                break;
            }

            case 4:
            {
                char ch[20];
                _flushall();
                printf("\nEnter Employee's name : ");
                scanf("%s",&ch);
                for(int i=0; i<100; i++)
                {
                    if(replace[i]==1)
                    {
                        if(lower(emps[i].Name,ch)==0)
                        {
                            display(emps[i]);
                            break;
                        }
                    }
                    if(i==99)
                    {
                        printf("\nno employee with this ID press any key to continue.");
                    }
                }
                getch();
                Beep(1200,100);
                break;
            }
            case 5:
            {
                int count=0;
                for(int i=0; i<100; i++)
                {
                    if(replace[i]==1)
                    {
                        display(emps[i]);
                        count++;
                    }
                }
                Beep(1200,100);
                if(count==0)
                    printf("\nno employees.\nPress any key to continue");
                getch();
            }
            break;
            case 6:
                flag=1;
                Beep(1200,100);
                break;
            }
            break;
        }
    }
}

int main()
{
    menu_with_employee();
}

