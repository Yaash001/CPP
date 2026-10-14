
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm;
    int x1=100, y1=100, x2=150, y2=100, x3=125, y3=150;
    int x, y, i;
    float a, b, c, d, sh;

    initgraph(&gd, &gm, NULL);

    cout << "Original Triangle\n";
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    cout << "\n1. Translation";
    cout << "\n2. Scaling";
    cout << "\n3. Rotation";
    cout << "\n4. Reflection";
    cout << "\n5. Shearing";
    cout << "\nEnter choice: ";
    cin >> i;

    switch(i)
    {
        case 1:
            cout << "Enter tx and ty: ";
            cin >> a >> b;
            x1+=a; y1+=b;
            x2+=a; y2+=b;
            x3+=a; y3+=b;
            break;

        case 2:
            cout << "Enter sx and sy: ";
            cin >> a >> b;
            x1*=a; y1*=b;
            x2*=a; y2*=b;
            x3*=a; y3*=b;
            break;

        case 3:
            cout << "Enter angle: ";
            cin >> a;
            b = a * 3.14159 / 180;
            x = x1; y = y1;
            x1 = x*cos(b)-y*sin(b);
            y1 = x*sin(b)+y*cos(b);
            x = x2; y = y2;
            x2 = x*cos(b)-y*sin(b);
            y2 = x*sin(b)+y*cos(b);
            x = x3; y = y3;
            x3 = x*cos(b)-y*sin(b);
            y3 = x*sin(b)+y*cos(b);
            break;

        case 4:
            cout << "1. X-axis  2. Y-axis: ";
            cin >> c;
            if(c==1)
            {
                y1=480-y1; y2=480-y2; y3=480-y3;
            }
            else
            {
                x1=640-x1; x2=640-x2; x3=640-x3;
            }
            break;

        case 5:
            cout << "Enter shear factor: ";
            cin >> sh;
            x1=x1+sh*y1;
            x2=x2+sh*y2;
            x3=x3+sh*y3;
            break;

        default:
            cout << "Invalid choice";
            getch();
            closegraph();
            return;
    }

    setcolor(RED);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    getch();
    closegraph();
}
