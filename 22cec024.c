#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
void menu(void);
void Indians(void);
void pavbhaji(void) ;
void Paneer(void) ;
void  samosa(void) ;
void   chat(void) ;
void  gujthali(void);
void  panjthali(void) ;
void Americans(void) ;
void Italis(void);
void Chineses(void) ;
void Southis(void)  ;
void welcome(void) ;
void order(void) ;
void orderlist(void) ;
void main()
{
  welcome();
}
void orderlist()
{
    system("color C");
    FILE *fp;
    char fn[100],ft[100],ef[100] ;
    int flag ,tn;
    fp=fopen("menu1.txt","r");
    system("cls");
    printf("\n\n\n\t\t\t__________________ORDER LIST_________________");
    printf("\n");
    while(fscanf(fp,"%d %s %s %s",&tn,fn,ft,ef)!=EOF)
    {
      printf("\n\n\n\t\t\t------------------------------------------\n");
      printf("\n\n\n\t\t\tTable Number :%d\n",tn);
      printf("\n\n\n\t\t\t:Food name  : %s\n",fn);
      printf("\n\n\n\t\t\t Food Type  :%s\n",ft);
      printf("\n\n\n\t\t\t Extra food :%s\n",ef);
      printf("\n\n\n\t\t\t------------------------------------------");
      printf("\n\n");
    }
    Sleep(50);
    printf("\n\n\n\t\t\t press o for order , m for menu and w for welcome option:");
    switch(getch())
    {
     case 'o':
           order() ;
           break ;

    case 'w':
          welcome() ;
          break ;
    case 'm' :
        menu() ;
        break ;
}
fclose(fp);
}



void order()
{

  system("cls");
 system("color A");
printf("\n\n\n\t\t\t______________________PLEASE ORDER_____________________");
FILE *fp;
char fn[100];
char ft[100];
char ef[100];
int tn;
fp=fopen("menu1.txt","ab+");
if(fp==NULL)
 {
printf("\n\n\n\t\t\tFailed to create the required file.");
}
else
{
printf("\n\n\n\t\t\t Table Number :\t");
scanf("%d",&tn) ;
printf("\n\n\n\n\n\t\t\tFood Name :\t");
scanf("%s",&fn) ;
printf("\n\n\n\t\t\tFood Type :\t");
scanf("%s",&ft) ;
printf("\n\n\n\t\t\tExtra food :  \t");
scanf("%s",&ef) ;

fprintf(fp,"%d %s %s %s\n",tn,fn,ft,ef);
}
fclose(fp);
system("cls");
printf("\n\n\n\t\t\tDo you wanna order more food Press e  ,for  menu press 'f' and press 'd' for welcome option ");
Sleep(50);
fflush(stdin);
switch(getch())
{
    case 'e' :
    {
     order();
     break ;
    }
    case 'f' :
        {
            menu() ;
            break ;
        }
    case 'd'  :
        {
            welcome() ;
            break ;
        }
}
}



void welcome()
{
    system("color 8") ;
    system("cls") ;
    printf("\n\n\n\t\t\t______________________WELCOME TO CAFETERIA______________________") ;
    printf("\n\n\n\t\t\t1).Menu") ;
    printf("\n\n\n\t\t\t2).Order") ;
    printf("\n\n\n\t\t\t3).Order list") ;

    switch(getch())
    {
      case '1' :
            menu() ;
            break ;

       case '2' :
            order() ;
            break ;
       case '3' :
            orderlist() ;
            break ;

      default :
        printf("\n\n\n\t\t\tinvalid enter press 'e' for exit") ;
        switch(getch())
        {
          case 'e'  :
             welcome() ;
        }
    }
    }
void Southis()
{
    system("color 1") ;
    system("cls") ;
    printf("\n\n\n\t\t\t______________WELCOME TO SOUTHINDIAN FOOD________________") ;
    printf("\n\n\n\t\t\t1).  masala dosa                            ---50RS") ;
     printf("\n\n\n\t\t\t2). plan dosa                              ---50RS") ;
      printf("\n\n\n\t\t\t3).idly fry                               ---70RS") ;
       printf("\n\n\n\t\t\t4). vada fry                             ---120RS") ;
        printf("\n\n\n\t\t\t5). idli sambhar                        ---150RS") ;
         printf("\n\n\n\t\t\t6). vada sambhar                       ---175RS") ;

         printf("\n\n\n\n\n\t\t\tpress 'e' for exit") ;
         switch(getch())
    {

         case 'e' :
                  menu() ;
                  break ;
         default :
            system("cls");
             printf("\n\n\n\t\t\t please enter valid.\n\n\n\n\t\t\tenter e for exit");
            switch(getch())
            {
            case 'e' :
                  menu() ;
                  break ;
            }
            //getch();
    }
}
void Chineses()
{
   system("color 2") ;
    system("cls") ;
    printf("\n\n\n\t\t\t______________WELCOME TO CHINESE FOOD________________") ;
    printf("\n\n\n\t\t\t1).veg chowmain                                ---50RS") ;
     printf("\n\n\n\t\t\t2).masala chowmain                            ---50RS") ;
      printf("\n\n\n\t\t\t3).chili potato                              ---70RS") ;
       printf("\n\n\n\t\t\t4).gravi chili paneer                       ---120RS") ;
        printf("\n\n\n\t\t\t5).american bhel                           ---150RS") ;
         printf("\n\n\n\t\t\t6).special cheese masala maggi            ---175RS") ;

         printf("\n\n\n\n\n\t\t\tpress 'e' for exit") ;
         switch(getch())
    {

         case 'e' :
                  menu() ;
                  break ;
         default :
            system("cls");
             printf("\n\n\n\t\t\t please enter valid.\n\n\n\n\t\t\tenter e for exit");
            switch(getch())
            {
            case 'e' :
                  menu() ;
                  break ;
            }
            getch();
    }
}

void Italis()
{
    system("color 3") ;
    system("cls") ;
    printf("\n\n\n\t\t\t______________WELCOME TO ITALIAN FOOD________________") ;
    printf("\n\n\n\t\t\t1).plan pasta white               ---50RS") ;
     printf("\n\n\n\t\t\t2).plane pasta red               ---50RS") ;
      printf("\n\n\n\t\t\t3).veg red pasta                ---70RS") ;
       printf("\n\n\n\t\t\t4).veg white pasta             ---120RS") ;
        printf("\n\n\n\t\t\t5).mashroom pizza             ---150RS") ;
         printf("\n\n\n\t\t\t6).capsicum pizza            ---175RS") ;

         printf("\n\n\n\n\n\t\t\tpress 'e' for exit") ;
         switch(getch())
    {

         case 'e' :
                  menu() ;
                  break ;
         default :
            system("cls");
             printf("\n\n\n\t\t\t please enter valid.\n\n\n\n\t\t\tenter e for exit");
            switch(getch())
            {
            case 'e' :
                  menu() ;
                  break ;
            }
            getch();
    }

}
void Americans()
{
    system("color 4") ;
    system("cls") ;
    printf("\n\n\n\t\t\t______________WELCOME TO AMERICAN FOOD________________") ;
    printf("\n\n\n\t\t\t1).Cheese Burger                       ---50RS") ;
     printf("\n\n\n\t\t\t2).Cheese Pasta Burger                ---50RS") ;
      printf("\n\n\n\t\t\t3).vag cheese grill s/w special      ---70RS") ;
       printf("\n\n\n\t\t\t4).french fries                     ---120RS") ;
        printf("\n\n\n\t\t\t5).paneer pakoda                   ---150RS") ;
         printf("\n\n\n\t\t\t6).club s/w                       ---175RS") ;

         printf("\n\n\n\n\n\t\t\tpress 'e' for exit") ;
         switch(getch())
    {

         case 'e' :
                  menu() ;
                  break ;
         default :
            system("cls");
             printf("\n\n\n\t\t\t please enter valid.\n\n\n\n\t\t\tenter e for exit");
            switch(getch())
            {
            case 'e' :
                  menu() ;
                  break ;
            }
            getch();
    }

}
void Indians()
{
    system("color 5") ;
    system("cls") ;
    printf("\n\n\n\t\t\t______________WELCOME TO INDIAN FOOD________________") ;
    printf("\n\n\n\t\t\t1).PAV BHAJI") ;
     printf("\n\n\n\t\t\t2).PANEER") ;
      printf("\n\n\n\t\t\t3).SAMOSA") ;
       printf("\n\n\n\t\t\t4).CHAT") ;
        printf("\n\n\n\t\t\t5).GUJARATI THALI") ;
         printf("\n\n\n\t\t\t6).PANJABI THALI") ;

         printf("\n\n\n\n\n\t\t\t press 'e' for exit") ;
         switch(getch())
    {
         case '1' :
                pavbhaji() ;
                break ;
         case '2' :
                Paneer() ;
                break ;
         case '3' :
                samosa() ;
                break ;
         case '4' :
                chat() ;
                break ;
         case '5' :
                 gujthali();
                 break ;
         case '6' :
                  panjthali() ;
                  break ;
         case 'e' :
                  menu() ;
                  break ;
         default :
            system("cls");
            printf("\n\n\n\t\t\t please enter valid.\n\n\n\n\t\t\tenter e for exit");
            switch(getch())
            {
            case 'e' :
                  menu() ;
                  break ;
            }
            getch();
    }
}

void  panjthali()
{
     system("color 6") ;
    system("cls") ;
   printf("\n\n\n\t\t\t______________ITEM OF PANJABI THALI________________") ;


    printf("\n\n\n\t\t\t1).4 Roti   ") ;
    printf("\n\n\n\t\t\t2). 1Butter milk ") ;
    printf("\n\n\n\t\t\t3). 2 nan    ") ;
    printf("\n\n\n\t\t\t4). 4 papad ") ;
    printf("\n\n\n\t\t\t5).pickle ") ;
    printf("\n\n\n\t\t\t6).salad  ") ;
    printf("\n\n\n\t\t\t7). 1 lassi ") ;
    printf("\n\n\n\t\t\t8). masala and kadai paneer   ") ;
    printf("\n\n\n\t\t\t9).onion and tometo  ") ;
    printf("\n\n\n\t\t\t10). lemon ") ;
    printf("\n\n\n\t\t\t11).panjabi dal and jeera rice") ;


    printf("\n\n\n\t\t\ttotal price --- 275 RS") ;

    printf("\n\n\n\n\n\n\n\t\t\t press 'e' for exit ") ;

    switch(getch())
    {
       case 'e' :

        Indians() ;

        default :
           printf("\n\n\n\t\t\tenter valid\n\n\n\t\t\tpress 'e ' for exit") ;

           switch(getch())
    {
       case 'e' :

        Indians() ;
    }
    }

}
void gujthali()
{
     system("color a") ;
    system("cls") ;
   printf("\n\n\n\t\t\t______________ITEM OF GUJARATI THALI________________") ;


    printf("\n\n\n\t\t\t1).Roti   ") ;
    printf("\n\n\n\t\t\t2).Butter milk ") ;
    printf("\n\n\n\t\t\t3).chana    ") ;
    printf("\n\n\n\t\t\t4).papad ") ;
    printf("\n\n\n\t\t\t5).pickle ") ;
    printf("\n\n\n\t\t\t6).salad  ") ;
    printf("\n\n\n\t\t\t7).green veg. ") ;
    printf("\n\n\n\t\t\t8).undhiyu   ") ;
    printf("\n\n\n\t\t\t9).bhakhari  ") ;
    printf("\n\n\n\t\t\t10). potato   ") ;
    printf("\n\n\n\t\t\t11).sev tometa ") ;
    printf("\n\n\n\t\t\t12).dal-rice") ;

    printf("\n\n\n\t\t\t total price --- 275 RS") ;

    printf("\n\n\n\n\n\n\n\t\t\ tpress 'e' for exit ") ;

    switch(getch())
    {
       case 'e' :

        Indians() ;

        default :
           printf("\n\n\n\t\t\tenter valid\n\n\n\t\t\tpress 'e ' for exit") ;

           switch(getch())
    {
       case 'e' :

        Indians() ;
    }
    }

}

void chat()
{
     system("color b") ;
    system("cls") ;
    printf("\n\n\n\t\t\t______________CHOOSE chat________________") ;

    printf("\n\n\n\t\t\t1).samosa chat     ---30RS") ;
    printf("\n\n\n\t\t\t2). chinese samosa chat  ---40RS") ;
    printf("\n\n\n\t\t\t3).cheese chat   ---50RS") ;
    printf("\n\n\n\t\t\t4).papadi chat ---70RS") ;
    printf("\n\n\n\t\t\t5).chana chat  ---70RS") ;


    printf("\n\n\n\n\n\n\n\t\t\t press 'e' for exit ") ;

    switch(getch())
    {
       case 'e' :

        Indians() ;

        default :
           printf("\n\n\n\t\t\tenter valid\n\n\n\t\t\tpress 'e ' for exit") ;

           switch(getch())
    {
       case 'e' :

        Indians() ;
    }
    }
}

void samosa()
{
     system("color c") ;
    system("cls") ;
     printf("\n\n\n\t\t\t______________CHOOSE samosa________________") ;

    printf("\n\n\n\t\t\t1).samosa         ---20RS") ;
    printf("\n\n\n\t\t\t2).paneer samosa   ---30RS") ;
    printf("\n\n\n\t\t\t3).cheese samosa   ---50RS") ;
    printf("\n\n\n\t\t\t4).panjabi samosa  ---70RS") ;
    printf("\n\n\n\t\t\t5).chinese samosa  ---70RS") ;

    printf("\n\n\n\n\n\n\n\t\t\t press 'e' for exit ") ;

    switch(getch())
    {
       case 'e' :

        Indians() ;

        default :
           printf("\n\n\n\t\t\tenter valid\n\n\n\t\t\tpress 'e ' for exit") ;

           switch(getch())
    {
       case 'e' :

        Indians() ;
    }
    }
}

void Paneer()
{
      system("color d") ;
    system("cls") ;
     printf("\n\n\n\t\t\t______________CHOOSE PANEER________________") ;

    printf("\n\n\n\t\t\t1).paneer        ---70RS") ;
    printf("\n\n\n\t\t\t2).masala paneer ---100RS") ;
    printf("\n\n\n\t\t\t3).paneer bhurji ---90RS") ;
    printf("\n\n\n\t\t\t4).paneer kadai  ---120RS") ;
    printf("\n\n\n\t\t\t5).paneer tufani ---90RS") ;


    printf("\n\n\n\n\n\n\n\t\t\t press 'e' for exit ") ;

    switch(getch())
    {
       case 'e' :

        Indians() ;
        default :
           printf("\n\n\n\t\t\tenter valid\n\n\n\t\t\tpress 'e ' for exit") ;

           switch(getch())
    {
       case 'e' :

        Indians() ;
    }
    }

}
void pavbhaji()
{
    system("color A") ;
    system("cls") ;
     printf("\n\n\n\t\t\t______________CHOOSE PAVBHAJI________________") ;

    printf("\n\n\n\t\t\t1).pavbhaji        ---60RS") ;
    printf("\n\n\n\t\t\t2).paneer pavbhaji ---90RS") ;
    printf("\n\n\n\t\t\t3).cheese pavbhaji ---90RS") ;
    printf("\n\n\n\t\t\t4).masala pav      ---50RS") ;
    printf("\n\n\n\t\t\t5).extra pav       ---20RS") ;


    printf("\n\n\n\n\n\n\n\t\t\t press 'e' for exit ") ;

    switch(getch())
    {
       case 'e' :

        Indians() ;


       default :
           printf("\n\n\n\t\t\tenter valid\n\n\n\t\t\tpress 'e ' for exit") ;

           switch(getch())
    {
       case 'e' :

        Indians() ;
    }
    }

}

void menu()
{
    system("color B") ;
    system("cls") ;
    printf("\n\n\n\t\t\t____________________________WELCOME TO MENU_______________________________") ;
    printf("\n\n\n\n\t\t\t1.Indian snacks");
    printf("\n\n\n\n\t\t\t2.American snacks");
     printf("\n\n\n\n\t\t\t3.Italian snacks");
    printf("\n\n\n\n\t\t\t4.Chinese snacks") ;
    printf("\n\n\n\n\t\t\t5.South Indian snacks") ;

    printf("\n\n\n\n\n\t\t\t press 'o' for order and press 'd'for welcome option") ;
    switch(getch())
{
case '1':
 Indians();
 break;
case '2':
 Americans();
 break;
case '3':
 Italis();
 break;
 case '4':
 Chineses() ;
 break ;
 case '5' :
    Southis() ;
    break ;
 case 'o' :
      order() ;
      break ;
 case 'd' :
      welcome() ;
      break ;

default:
system("cls");
 printf("\n\n\n\t\t\t please enter valid.\n\n\n\n\t\t\tenter e for exit ");
            switch(getch())
            {
            case 'e' :
                  menu() ;
                  break ;

            }
           getch();
}
}

