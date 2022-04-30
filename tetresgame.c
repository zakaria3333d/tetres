#include <stdio.h>
#include <conio.h>


void firstell(void);
void firstse3(void);
void firstpre(void);
void firststr(void);
void prnt(int);



char p[3][2]= {{'&','.'},{'&','.'},{'&','&'}};
char q[3][2]= {{'&','.'},{'&','&'},{'&',' '}};
char s[3][2]= {{'&','.'},{'&','&'},{'.','&'}};
char t[3][3]= {{'.','.','.'},{'.','.','.'},{'&','&','&'}}; 

int a,b,c,d,e,f; 

int main()
{
    char A[20][20];
    int sco =0;


    a=10;
    b=2;
    c=10;
    d=3;
    e=10;
    f=4; 

    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            A[i][j]='#';
            if(i==0|| j==0 || i==19|| j==19)
                printf("%c",A[i][j]);
            else
                printf(".");
        }
        printf("\n");
    }



    gotoxy(26,4);
    printf("your score :");
    gotoxy(26,8);
    printf("next shape :"); 

    

    while(1)
    {


          gotoxy(31,6);
          printf("%d",sco);

          gotoxy(26,10);
          prnt(sco);
        


        switch(sco%4)
        {
        case 0 :
            firstell();
            break; 

        case 1 :
            firstse3();
            break; 

        case 2 :
            firstpre();
            break;
            
        case 3 :
            firststr();
            break; 

        }



        while(1)
        {




                switch(getch())
                { 

                case('a') :
                                       
                                        if(a>2)
                                        {
                                                gotoxy(a,b);
                                                printf("...");
                                   
                                                gotoxy(--a,b);
                                                switch(sco%4)
                                                {
                                                case 0:
                                                printf("%c%c",p[0][0],p[0][1]);
                                                break;
            
                                                case 1:
                                                printf("%c%c",q[0][0],q[0][1]);
                                                break;
            
                                                case 2:
                                                printf("%c%c",s[0][0],s[0][1]);
                                                break;
            
                                                case 3:
                                                printf("%c%c%c",t[0][0],t[0][1],t[0][2]);
                                                break;
                                                }
            
                                                gotoxy(c,d);
                                                printf("...");
                               
                                                gotoxy(--c,d);
                                                switch(sco%4)
                                                {
                                                case 0:
                                                printf("%c%c",p[1][0],p[1][1]);
                                                break;
            
                                                case 1:
                                                printf("%c%c",q[1][0],q[1][1]);
                                                break;
            
                                                case 2:
                                                printf("%c%c",s[1][0],s[1][1]);
                                                break;
            
                                                case 3:
                                                printf("%c%c%c",t[1][0],t[1][1],t[1][2]);
                                                break;
                                                }
            
                                                gotoxy(e,f);
                                                printf("...");
                               
                                                gotoxy(--e,f);
                                                switch(sco%4)
                                                {
                                                case 0:
                                                printf("%c%c",p[2][0],p[2][1]);
                                                break;
            
                                                case 1:
                                                printf("%c%c",q[2][0],q[2][1]);
                                                break;
            
                                                case 2:
                                                printf("%c%c",s[2][0],s[2][1]);
                                                break;
            
                                                case 3:
                                                printf("%c%c%c",t[2][0],t[2][1],t[2][2]);
                                                break;
                                                }
                            
                                                break;
                                         }
                                         else 
                                                break; 

                case('d') :
                                       
                                         if(a<18)
                                         {
                                                gotoxy(a,b);
                                                printf("...");
                                   
                                                gotoxy(++a,b);
                                                switch(sco%4)
                                                {
                                                case 0:
                                                printf("%c%c",p[0][0],p[0][1]);
                                                break;
            
                                                case 1:
                                                printf("%c%c",q[0][0],p[0][1]);
                                                break;
            
                                                case 2:
                                                printf("%c%c",s[0][0],p[0][1]);
                                                break;
            
                                                case 3:
                                                
                                                printf("%c%c%c",t[0][0],t[0][1],t[0][2]);
                                                break;
                                                }
            
                                                gotoxy(c,d);
                                                printf("...");
                               
                                                gotoxy(++c,d);
                                                switch(sco%4)
                                                {
                                                case 0:
                                                printf("%c%c",p[1][0],p[1][1]);
                                                break;
            
                                                case 1:
                                                printf("%c%c",q[1][0],q[1][1]);
                                                break;
            
                                                case 2:
                                                printf("%c%c",s[1][0],s[1][1]);
                                                break;
            
                                                case 3:
                                                
                                                printf("%c%c%c",t[1][0],t[1][1],t[1][2]);
                                                break;
                                                }
            
                                                gotoxy(e,f);
                                                printf("...");
                               
                                                gotoxy(++e,f);
                                                switch(sco%4)
                                                {
                                                case 0:
                                                printf("%c%c",p[2][0],p[2][1]);
                                                break;
            
                                                case 1:
                                                printf("%c%c",q[2][0],q[2][1]);
                                                break;
            
                                                case 2:
                                                printf("%c%c",s[2][0],s[2][1]);
                                                break;
            
                                                case 3:
                                               
                                                printf("%c%c%c",t[2][0],t[2][1],t[2][2]);
                                                break;
                                                }
                            
                                                break;
                                           }
                                            else
                                                 break;


                case('s') :
                                       
                                   
                                                gotoxy(e,f);
                                                printf("..");
                                   
                                                gotoxy(e,++f);
                                                switch(sco%4)
                                                {
                                                case 0:
                                                printf("%c%c",p[2][0],p[2][1]);
                                                break;
            
                                                case 1:
                                                printf("%c%c",q[2][0],q[2][1]);
                                                break;
            
                                                case 2:
                                                printf("%c%c",s[2][0],s[2][1]);
                                                break;
            
                                                case 3:
                                                printf("%c%c%c",t[2][0],t[2][1],t[2][2]);
                                                break;
                                                }
            
                                                gotoxy(c,d);
                                                printf("..");
                               
                                                gotoxy(c,++d);
                                                switch(sco%4)
                                                {
                                                case 0:
                                                printf("%c%c",p[1][0],p[1][1]);
                                                break;
            
                                                case 1:
                                                printf("%c%c",q[1][0],q[1][1]);
                                                break;
            
                                                case 2:
                                                printf("%c%c",s[1][0],s[1][1]);
                                                break;
            
                                                case 3:
                                                printf("%c%c%c",t[1][0],t[1][1],t[1][2]);
                                                break;
                                                }
            
                                                gotoxy(a,b);
                                                printf("..");
                               
                                                gotoxy(a,++b);
                                                switch(sco%4)
                                                {
                                                 case 0:
                                                printf("%c%c",p[0][0],p[0][1]);
                                                break;
            
                                                case 1:
                                                printf("%c%c",q[0][0],p[0][1]);
                                                break;
            
                                                case 2:
                                                printf("%c%c",s[0][0],p[0][1]);
                                                break;
            
                                                case 3:
                                                printf("%c%c%c",t[0][0],t[0][1],t[0][2]);
                                                break;
                                                }
                            
                                                break;
                               
                                                



                }
              


            if(f>18) 

                break;
            

        }
        sco++; 

    } 

    return 0;
}



void firstell (void)
{ 

    a=10;
    b=2;
    c=10;
    d=3;
    e=10;
    f=4;


        gotoxy(a,b);
        printf("%c%c",p[0][0],p[0][1]);
       
        gotoxy(c,d);
        printf("%c%c",p[1][0],p[1][1]);
       
        gotoxy(e,f);
        printf("%c%c",p[2][0],p[2][1]);



}


void firstse3 (void)
{ 

    a=10;
    b=2;
    c=10;
    d=3;
    e=10;
    f=4;


         gotoxy(a,b);
        printf("%c%c",q[0][0],q[0][1]);
       
        gotoxy(c,d);
        printf("%c%c",q[1][0],q[1][1]);
       
        gotoxy(e,f);
        printf("%c%c",q[2][0],q[2][1]);



}


void firststr (void)
{ 

    a=10;
    b=2;
    c=10;
    d=3;
    e=10;
    f=4;


    gotoxy(a,b);
        printf("%c%c%c",t[0][0],t[0][1],t[0][2]);
      
        gotoxy(c,d);
        printf("%c%c%c",t[1][0],t[1][1],t[1][2]);
       
        gotoxy(e,f);
        printf("%c%c%c",t[2][0],t[2][1],t[2][2]);



}



void firstpre(void)
{
    a=10;
    b=2;
    c=10;
    d=3;
    e=10;
    f=4;


    gotoxy(a,b);
        printf("%c%c",s[0][0],s[0][1]);
       
        gotoxy(c,d);
        printf("%c%c",s[1][0],s[1][1]);
       
        gotoxy(e,f);
        printf("%c%c",s[2][0],s[2][1]);
}





void prnt (int j)
{ 

    switch(j%4)
    {
        case 3 :
        gotoxy(30,10);
        printf("%c%c",p[0][0],p[0][1]);
       
        gotoxy(30,11);
        printf("%c%c",p[1][0],p[1][1]);
       
        gotoxy(30,12);
        printf("%c%c.",p[2][0],p[2][1]);
        break;
        
        case 0 :
        gotoxy(30,10);
        printf("%c%c",q[0][0],q[0][1]);
       
        gotoxy(30,11);
        printf("%c%c",q[1][0],q[1][1]);
       
        gotoxy(30,12);
        printf("%c%c.",q[2][0],q[2][1]);
        break;
        
        case 1 :
        gotoxy(30,10);
        printf("%c%c",s[0][0],s[0][1]);
       
        gotoxy(30,11);
        printf("%c%c",s[1][0],s[1][1]);
       
        gotoxy(30,12);
        printf("%c%c.",s[2][0],s[2][1]);
        break;
        
        case 2 :
        gotoxy(30,10);
        printf("%c%c%c",t[0][0],t[0][1],t[0][2]);
    
        gotoxy(30,11);
        printf("%c%c%c",t[1][0],t[1][1],t[1][2]);
    
    
        gotoxy(30,12);
        printf("%c%c%c",t[2][0],t[2][1],t[2][2]);
        break;
        
    
    
    } 

}











    