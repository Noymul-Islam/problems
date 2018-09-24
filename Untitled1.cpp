#include<stdio.h>
#include<conio.h>
#include <graphics.h>
int main( )
{
initwindow(400, 300, "Untitled25.jpg");
circle(100, 50, 40);
while (!kbhit( ))
{
delay(200);
}
return 0;
}
