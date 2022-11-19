#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <menu.h>
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void textatrr(int i){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}
// disp array now hav arubish data
int disp[3][4];
int main()
{
    char ch,menu[row][col] = {"New","Diplay","Exit"},nestedMenu[row][col] = {"Article","News","Papers"};
    int i,pos=0,flag=0;
    label:
    do{
        for(i=0;i<row;i++){
            gotoxy(10,5+i);
            // change color of item in menu
            if(i==pos){
                textatrr(0x71);
                _cprintf("%s",menu[pos]);
            }else{
                textatrr(0x07);
                _cprintf("%s",menu[i]);
            }
        }

        ch = getch();
        switch(ch){
            // here you have an extend value
            case exntendKey:
                ch = getch();
                switch(ch){
                    // HOME
                    case  home:
                        pos = 0;
                        Beep(1000,100);
                        break;
                    // UP
                    case up:
                        pos--;
                        if(pos<0){
                            pos = row - 1;
                        }
                        Beep(1000,100);

                        break;
                    // Down
                    case down:
                        pos++;
                        if(pos>2){
                            pos = 0;
                        }
                        Beep(1000,100);
                        break;
                    case escape:
                        pos = 2;
                        Beep(1200,100);
                        break;
                }
                break;
            // here your value is enter
            case enter:
                switch(pos){
                    case 0:
                        system("cls");
                        enter_data();
                        system("cls");



                        break;

                    case 1:
                        system("cls");
                        summ();
                        avg();
                        // To Stop Buffer
                        getch();
                        system("cls");
                        break;

                    case 2:
                        flag = 1;
                        Beep(1000,100);
                        break;
                }

            // here your value is Escape
            case escape:
                pos = 2;
                Beep(1200,100);
                break;
        }
    }while(flag==0);

    return 0;
}
void enter_data()
{
    int i, j;
    for(i=0; i<3; i++) {
        for(j=0;j<4;j++) {
             printf("Enter value for student[%d]and subject[%d]:", i+1, j+1);
             scanf("%d", &disp[i][j]);
            }
        }
}
void summ()
{
    int i,j,sum=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            sum += disp[i][j];
        }
        printf("Student num %d summation degree is %d\n",i+1,sum);
        sum = 0;
    }

}
void avg()
{
    int f,s,sumOfDegree=0;
    for(f=0;f<3;f++){
        for(s=0;s<4;s++){
            sumOfDegree += disp[s][f];
        }
        printf("This Subject %d Average is %d\n",f+1,sumOfDegree/3);
    }
}
