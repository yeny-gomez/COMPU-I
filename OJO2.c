#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>

#define M 8

#define ARRIBA 72
#define ABAJO 80
#define IZQUIERDA 75
#define DERECHA 77

using namespace std;

void gotoxy(int x, int y)
{
     HANDLE hcon;
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y = y;
     SetConsoleCursorPosition(hcon,dwPos);
}

void llenar(int m1[M][M]){
    
    int x,y;
     
    srand(time(0));
    
    for(x=0;x<M;x++){
    for(y=0;y<M;y++){
    
    m1[x][y]=rand()%10;
                     
    }                 
    }  
}

void matriz(int m1[M][M]){

    int x,y,posX=1,posY=1;
    char resp;
     
    do{
    system("cls");           
    
    printf("\n");
    for(x=0;x<M;x++){
    printf("\t\t");                
    for(y=0;y<M;y++){
    
    printf(" %d",m1[x][y]);
                     
    }                 
    printf("\n\n");
    }
    printf("\nDesplace el cursor con las flechas direccionales");
    printf("\n\nSeleccione una matriz con la tecla <<s>>");
    printf("\n\nSustituya los valores con la tecla <<enter>>");
    printf("\n\nPara Salir presione la tecla <<x>>");
    
    gotoxy(17+2*posY,1+2*posX);
    
    resp=getch();
    
    switch(resp)
    {
           case ARRIBA:    if(posX>1)
                           {
                              posX--;
                           }
                           break;
           case ABAJO:     if(posX<M-2)
                           {
                              posX++;
                           }
                           break;
           case IZQUIERDA: if(posY>1)
                           {
                               posY--;
                           }
                           break;
           case DERECHA:   if(posY<M-2)
                           {
                              posY++;
                           }
                           break;                                      
    }
    
    }while(resp!='x');
        
}



int main(int argc, char *argv[])
{
    int m1[M][M];

    llenar(m1);
             
    matriz(m1);
    
    return 0;
}

