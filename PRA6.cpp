#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>

void DDA(int x1,int y1,int x2,int y2){
    float xinc,yinc,xnxt,ynxt,dx,dy,steps,i;
    dx = x2 - x1;
    dy = y2 - y1;


    if(abs(dx) >= abs(dy)){
        steps = abs(dx);
    }
    else{
        steps = abs(dy);
    }

    xinc = dx / steps;
    yinc = dy / steps;

    xnxt = x1;
    ynxt = y1;

    for ( i = 1; i <= steps; i++)
    {
        putpixel(floor(xnxt), floor(ynxt), GREEN);
        xnxt = xnxt + xinc;
        ynxt = ynxt + yinc;
    }
}

void Circle(int r , int xc , int yc){
    int x=0,y=r;
    int d = 3 - 2 * r;
    while(x <= y)
    {

        
    putpixel(xc + x,yc + y,RED);
    putpixel(xc - x,yc + y,RED);
    putpixel(xc + x,yc - y,RED);
    putpixel(xc - x,yc - y,RED);

    putpixel(xc + y,yc + x,RED);
    putpixel(xc - y,yc + x,RED);
    putpixel(xc + y,yc - x,RED);
    putpixel(xc - y,yc - x,RED);

    if(d < 0){
        d = d + 4 * x + 6;
        x++;
    }
    else if(d >= 0){

        d = d + 4 * (x -y) + 10;
        x++;
        y--;
    }
}
}




void main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "NULL");
    DDA(180, 100, 460, 100);
    DDA(460, 100, 460, 380);
    DDA(460, 380, 180, 380);
    DDA(180, 380, 180, 100);

    DDA(320, 130, 430, 240);
    DDA(430, 240, 320, 350);
    DDA(320, 350, 210, 240);
    DDA(210, 240, 320, 130);
    
    Circle(65, 320, 240);
    getch();
    closegraph();
}
