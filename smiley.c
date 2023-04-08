#include<graphics.h>
int main()
{
    initwindow(700,600);

    setcolor(BLUE);
    circle(300,300,160);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(274,284,WHITE)

    setcolor(BLUE);
    circle(301,300,161);
    circle(302,300,162);
    circle(303,300,163);
    circle(304,300,164);
    circle(305,300,165);


    setcolor(BLACK);
    circle(240,260,45);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(230,260,BLACK);

    setcolor(BLACK);
    ellipse(240,325,0,360,4,10);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(240,325,BLACK)

    setcolor(BLACK);
    circle(240,260,45);
    circle(240,260,46);
    circle(240,260,47);


    setcolor(BLACK);
    ellipse(240,280,0,360,20,25);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(240,280,BLACK);


    setcolor(BLACK);
    circle(360,260,45);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(360,260,BLACK);

    setcolor(BLACK);
    ellipse(360,325,0,360,4,10);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(360,325,BLACK)

    setcolor(BLACK);
    circle(360,260,45);
    circle(360,260,46);
    circle(360,260,47);

    setcolor(BLACK);
    ellipse(360,280,0,360,20,25);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(360,280,BLACK);


    setcolor(BLACK);
    ellipse(300,390,0,180,70,40);
    ellipse(300,390,0,180,69,39);
    ellipse(300,390,0,180,68,38);
    ellipse(300,390,0,180,67,37);
    ellipse(300,390,0,180,66,36);
    ellipse(300,390,0,180,65,35);

    getch();
}
