//_____/_____ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL _____\________//

//----------- C++ PROGRAM TO MAKE SCENERY WITH MOVING BOAT-----------------\\
/*________________________________________________________________________*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{

int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");    //Write the Path of BGI Folder

int a=200, b=-190;
int c=200, d=-190;

float x=0.5, y=0.5;
float m=0.5, n=0.5;

// USE LOOP TO MOVE BOAT
while(1)
{

int i=0;
while(i<450)
{
setcolor(10);
outtextxy(50,250,"PRESS e TO EXIT ");
setcolor(14);
outtextxy(50,265,"PRESS r TO MOVE RIGHT ");
setcolor(15);
outtextxy(50,280,"PRESS l TO MOVE LEFT ");
if(kbhit())
{
int key = getch();
if(key=='r')
{
i+=3;
}

if(key=='l')
{
i-=3;
}
if(key=='e')
{
exit (0);
}
}

// .........CLOUDS
//..........MIDDLE CLOUD
ellipse(200,30,60,240,10,15);
ellipse(225,20,345,165,20,15);
ellipse(262,27,340,160,20,15);
ellipse(268,42,230,50,20,10);
ellipse(226,46,163,340,31,15);
ellipse(300,21,20,182,21,19);
ellipse(325,31,290,100,21,15);
ellipse(299,45,228,20,33,11);

//........... LEFT CLOUD

ellipse(40,30,60,240,10,15);
ellipse(65,20,345,165,20,15);
ellipse(105,27,340,160,20,15);
ellipse(109,42,230,50,20,10);
ellipse(66,46,163,340,31,17);

//.............RIGHT CLOUD

ellipse(450,30,60,240,10,15);
ellipse(475,20,345,165,20,15);
ellipse(512,27,340,160,20,15);
ellipse(518,42,230,50,20,10);
ellipse(476,46,163,340,31,15);

//.......... Trees

//1 TREE CROWN

setcolor(WHITE);
setfillstyle(SOLID_FILL,2);
line(240+c,420+d,275+c,420+d);
line(240+c,420+d,245+c,405+d);
line(275+c,420+d,270+c,405+d);
line(245+c,405+d,240+c,405+d);
line(270+c,405+d,275+c,405+d);
line(240+c,405+d,245+c,390+d);
line(275+c,405+d,270+c,390+d);
line(245+c,390+d,240+c,390+d);
line(270+c,390+d,275+c,390+d);
line(240+c,390+d,258+c,370+d);
line(275+c,390+d,257+c,370+d);
floodfill(259+c,375+d,WHITE);

//1 TREE TRUNK

setcolor(WHITE);
setfillstyle(SOLID_FILL,4);
line(250+c,460+d,250+c,420+d);
line(265+c,460+d,265+c,420+d);
line(250+c,460+d,265+c,460+d);
line(250+c,420+d,265+c,420+d);
floodfill(255+c,441+d,WHITE);

// 2 TREE CROWN

setcolor(WHITE);
setfillstyle(SOLID_FILL,2);
line(240*m,420*n,275*m,420*n);
line(240*m,420*n,245*m,405*n);
line(275*m,420*n,270*m,405*n);
line(245*m,405*n,240*m,405*n);
line(270*m,405*n,275*m,405*n);
line(240*m,405*n,245*m,390*n);
line(275*m,405*n,270*m,390*n);
line(245*m,390*n,240*m,390*n);
line(270*m,390*n,275*m,390*n);
line(240*m,390*n,258*m,370*n);
line(275*m,390*n,257*m,370*n);
floodfill(259*m,375*n,WHITE);

//2 TREE TRUNK

setcolor(WHITE);
setfillstyle(SOLID_FILL,6);
line(250*m,460*n,250*m,420*n);
line(265*m,460*n,265*m,420*n);
line(250*m,460*n,265*m,460*n);
line(250*m,420*n,265*m,420*n);
floodfill(255*m,441*n,WHITE);

/* GRASS COLOR
setfillstyle(1,10);
floodfill(200,200,15);    */

// HOUSES

setcolor(15);
setfillstyle(1,13);
rectangle(500,200,570,300);
floodfill(551,299,15);

setcolor(15);
setfillstyle(1,14);
rectangle(510,270,530,300);
rectangle(550,290,535,270);
floodfill(511,299,15);


//..............1ST HOUSE

//1 TRIANGLE OF HOUSE

setcolor(WHITE);
setfillstyle(SOLID_FILL,YELLOW);
line(88+a,400+b,163+a,400+b);
line(100+a,370+b,88+a,400+b);
line(100+a,370+b,112+a,400+b);
line(100+a,370+b,150+a,370+b);
line(150+a,370+b,163+a,400+b);
floodfill(100+a,375+b,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,6);
line(88+a,400+b,163+a,400+b);
line(100+a,370+b,112+a,400+b);
line(100+a,370+b,112+a,400+b);
line(100+a,370+b,150+a,370+b);
line(150+a,370+b,163+a,400+b);
floodfill(105+a,375+b,WHITE);


setcolor(WHITE);
setfillstyle(SOLID_FILL,1);
line(112+a,400+b,112+a,440+b);
line(88+a,440+b,112+a,440+b);
line(88+a,400+b,88+a,440+b);
line(112+a,440+b,163+a,440+b);
floodfill(90+a,402+b,WHITE);


setcolor(WHITE);
setfillstyle(SOLID_FILL,11);
line(163+a,400+b,163+a,440+b);
line(112+a,440+b,163+a,440+b);
line(112+a,400+b,112+a,440+b);
line(88+a,400+b,163+a,400+b);
floodfill(115+a,405+b,WHITE);

//1 HOUSE DOOR

setcolor(WHITE);
setfillstyle(SOLID_FILL,BROWN);
line(94+a,440+b,94+a,420+b);
line(106+a,440+b,106+a,420+b);
line(94+a,420+b,106+a,420+b);
floodfill(97+a,435+b,WHITE);


// 2 HOUSE

//2 TRIANGLE OF HOUSE
setcolor(WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
line(88*x,400*y,163*x,400*y);
line(100*x,370*y,88*x,400*y);
line(100*x,370*y,112*x,400*y);
line(100*x,370*y,150*x,370*y);
line(150*x,370*y,163*x,400*y);
floodfill(100*x,375*y,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,13);
line(88*x,400*y,163*x,400*y);
line(100*x,370*y,112*x,400*y);
line(100*x,370*y,112*x,400*y);
line(100*x,370*y,150*x,370*y);
line(150*x,370*y,163*x,400*y);
floodfill(105*x,375*y,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,4);
line(112*x,400*y,112*x,440*y);
line(88*x,440*y,112*x,440*y);
line(88*x,400*y,88*x,440*y);
line(112*x,440*y,163*x,440*y);
floodfill(90*x,402*y,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,11);
line(163*x,400*y,163*x,440*y);
line(112*x,440*y,163*x,440*y);
line(112*x,400*y,112*x,440*y);
line(88*x,400*y,163*x,400*y);
floodfill(115*x,405*y,WHITE);


//2 HOUSE DOOR

setcolor(WHITE);
setfillstyle(SOLID_FILL,YELLOW);
line(94*x,440*y,94*x,420*y);
line(106*x,440*y,106*x,420*y);
line(94*x,420*y,106*x,420*y);
floodfill(97*x,435*y,WHITE);

//..text
setcolor(1);
outtextxy(50,295,"Created By :- ROHIT TECH STUDY");

//...... MOUNTAIN

//1ST TRIANGLE

setcolor(WHITE);              //BOUNDARY COLOR OF MOUNTAIN

setfillstyle(SOLID_FILL,8); //ACTUAL COLOR OF MOUNTAIN
line(0,150,100,75);
line(100,75,200,150);

//2ND TRIANGLE
setcolor(WHITE);
setfillstyle(SOLID_FILL,7);
line(175,131,275,75);
line(275,75,375,150);

//3RD TRIANGLE
setcolor(WHITE);
setfillstyle(SOLID_FILL,8);
line(350,131,450,75);
line(450,75,550,150);

//4TH TRIANGLE
setcolor(WHITE);
setfillstyle(SOLID_FILL,7);
line(525,131,600,75);
line(600,75,750,180);

line(0,150,750,150);
floodfill(100,136,15);        //BOTTOM LINE OF MOUNTAIN
floodfill(275,136,15);        //2ND TRIANGLE
floodfill(450,136,15);        //3RD TRIANGLE
floodfill(600,136,15);        //4TH TRIANGLE

// SUN

setcolor(15);
setfillstyle(1,14);
arc(178,112,0,180,30);
floodfill(171,109,15);

// SKY COLOR
setfillstyle(1,11);
floodfill(50,50,15);

//.. RIVER and BOAT

setfillstyle(9,9);
rectangle(-5,320,700,640);
floodfill(400,400,15);

setcolor(15);
setfillstyle(1,14);
line(50+i,390,120+i,390);
line(50+i,390,40+i,370);
line(120+i,390,130+i,370);
line(130+i,370,40+i,370);
floodfill(105+i,375,15);

circle(105+i,345,9);
line(105+i,354,105+i,370);
line(105+i,355,90+i,365);

delay(20);
cleardevice();
}
}
getch();
}

/*---------------- I HOPE YOU LIKE THIS PROGRAMMING ---------------------*/

/*____________ LIKE __________ SHARE _________ SUBSCRIBE _________________*/




