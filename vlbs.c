#include<GL/glut.h>
#include<string.h>

int i,flag=0,flagb=1,flags=0,flagt=0,flagp=0,flagw=1,flagx=0;
float a=0.0f,b=0.0f,c=0.0f,m=0.0f,n=0.0f,o=0.0f,p=0.0f,q=0.0f,r=0.0f,x=0.0f,y=0.0f,z=0.0f,a1=0.0,a2=0.0,a3=0.0;
float j;

void *currentfont;

void setFont(void *font)
{
	currentfont=font;
}
void drawstring(char string[],float x1,float y1,float z1)
{
    int i,j;
	j=strlen(string);
	glRasterPos3f(x1,y1,z1);
	for (i=0;i<j;i++)
	{
        glutBitmapCharacter(currentfont, string[i]);
	}
}

void screen1()
{
    glClearColor(0.5,0.2,0.8,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,1.0,1.0);
    char str1[]="COORG  INSTITUTE  OF  TECHNOLOGY";
    drawstring(str1,-0.5,0.9,0.0);
    glColor3f(0.9,0.9,0.9);
    char str2[]="DEPARTMENT  OF  COMPUTER  SCIENCE  AND  ENGINEERING";
    drawstring(str2,-0.7,0.8,0.0);
    glColor3f(0.8,0.8,0.8);
    char str3[]="A  MINI  PROJECT  ON";
    drawstring(str3,-0.3,0.7,0.0);
    glColor3f(1.0,0.7,0.7);
    char str4[]="-*-   VERTICAL  LIFT  BRIDGE  SIMULATION   -*-";
    drawstring(str4,-0.65,0.6,0.0);
    glColor3f(0.2,0.8,0.5);
    char str5[]="BY  :";
    drawstring(str5,-0.5,0.5,0.0);
    glColor3f(1.0,1.0,0.0);
    char str6[]="AMAL  KURIAKOSE     (4CI14CS010)";
    drawstring(str6,-0.5,0.4,0.0);
    char str7[]="M  ARJUN  PRADEEP   (4CI14CS038)";
    drawstring(str7,-0.5,0.3,0.0);
    glColor3f(0.2,0.8,0.5);
    char str8[]="GUIDES  :";
    drawstring(str8,-0.5,0.1,0.0);
    glColor3f(1.0,1.0,0.0);
    char str9[]="Mr . BHARATH    (Asst.prof. Dept of CSE)";
    drawstring(str9,-0.5,0.0,0.0);
    char str10[]="Mr . RAVISHANKAR   (Asst.prof. Dept of CSE)";
    drawstring(str10,-0.5,-0.1,0.0);
    glColor3f(1.0,0.9,1.0);
    char str11[]="INSTRUCTIONS ";
    drawstring(str11,-0.3,-0.5,0.0);
    char str12[]="----------------";
    drawstring(str12,-0.35,-0.55,0.0);
    char str13[]=" * * *   PRESS     -ENTER -     TO  START  AND     -ESC-     TO EXIT   * * *";
    drawstring(str13,-0.9,-0.7,0.0);
    char str14[]="PRESS     -S-     TO  START  ANIMATION   AND  PRESS    -T-     TO  STOP  ANIMATION";
    drawstring(str14,-1.05,-0.85,0.0);
    glFlush();
}

void screen3()
{
    glClearColor(1.0,0.5,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,0.0,0.0);
    char str1[]=" * * *  THANK YOU  * * * ";
    drawstring(str1,-0.2,0.2,0.0);
    char str2[]=" ------------------------- ";
    drawstring(str2,-0.3,0.1,0.0);
    glFlush();
}

void water()
{
    glBegin(GL_QUADS);
    glColor3f(0.0,0.4,0.7);
    glVertex3f(-5.0,-0.415,5.0);
    glVertex3f(5.0,-0.415,5.0);
    glVertex3f(5.0,-0.415,-5.0);
    glVertex3f(-5.0,-0.415,-5.0);
    glEnd();
}

void lines()
{
    float t1,t2;
    glBegin(GL_LINES);
    for(t1=0.0;t1<=10.0;t1+=0.4)
    {
     for(t2=0.0;t2<=10.0;t2+=0.4)
     {
       glColor3f(0.7,0.7,0.7);
       glVertex3f(-5.0+t2,-0.41,-4.5+t1);
       glVertex3f(-4.95+t2,-0.41,-4.5+t1);
     }
    }
    glEnd();
}

void base()
{
    float i;
    for(i=0.0;i<1.0;i+=0.8)
    {
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.1);  //front
    glVertex3f(-0.5+i,-0.4,0.2);
    glVertex3f(-0.3+i,-0.4,0.2);
    glVertex3f(-0.3+i,-0.25,0.2);
    glVertex3f(-0.5+i,-0.25,0.2);

    glColor3f(0.3,0.3,0.3);  //left
    glVertex3f(-0.5+i,-0.4,0.2);
    glVertex3f(-0.5+i,-0.4,-0.2);
    glVertex3f(-0.5+i,-0.25,-0.2);
    glVertex3f(-0.5+i,-0.25,0.2);

    glColor3f(0.1,0.1,0.1);  //back
    glVertex3f(-0.5+i,-0.4,-0.2);
    glVertex3f(-0.3+i,-0.4,-0.2);
    glVertex3f(-0.3+i,-0.25,-0.2);
    glVertex3f(-0.5+i,-0.25,-0.2);

    glColor3f(0.3,0.3,0.3);  //right
    glVertex3f(-0.3+i,-0.4,0.2);
    glVertex3f(-0.3+i,-0.4,-0.2);
    glVertex3f(-0.3+i,-0.25,-0.2);
    glVertex3f(-0.3+i,-0.25,0.2);

    glColor3f(0.5,0.5,0.5);  //top
    glVertex3f(-0.5+i,-0.25,0.2);
    glVertex3f(-0.3+i,-0.25,0.2);
    glVertex3f(-0.3+i,-0.25,-0.2);
    glVertex3f(-0.5+i,-0.25,-0.2);
    glEnd();
    }
}

void earth()
{
    float i;
    for(i=0.0;i<4.0;i+=3.5)
    {
    glBegin(GL_QUADS);
    glColor3f(0.0,0.6,0.0);
    glVertex3f(-3.0+i,-0.4,0.17);  //front
    glVertex3f(-0.5+i,-0.4,0.17);
    glVertex3f(-0.5+i,-0.25,0.17);
    glVertex3f(-3.0+i,-0.25,0.17);

    glVertex3f(-3.0+i,-0.4,-0.17); //back
    glVertex3f(-0.5+i,-0.4,-0.17);
    glVertex3f(-0.5+i,-0.25,-0.17);
    glVertex3f(-3.0+i,-0.25,-0.17);

    glColor3f(0.0,0.5,0.0);   //top
    glVertex3f(-3.0+i,-0.25,0.17);
    glVertex3f(-0.5+i,-0.25,0.17);
    glVertex3f(-0.5+i,-0.25,-0.17);
    glVertex3f(-3.0+i,-0.25,-0.17);
    glEnd();
    }
}

void pillars()
{
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(-0.35,-0.25,0.2);
    glVertex3f(-0.31,-0.25,0.2);
    glVertex3f(-0.31,0.2,0.2);
    glVertex3f(-0.35,0.2,0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(-0.35,-0.25,0.2);
    glVertex3f(-0.35,-0.25,0.15);
    glVertex3f(-0.35,0.2,0.15);
    glVertex3f(-0.35,0.2,0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(-0.35,-0.25,0.15);
    glVertex3f(-0.31,-0.25,0.15);
    glVertex3f(-0.31,0.2,0.15);
    glVertex3f(-0.35,0.2,0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(-0.31,-0.25,0.2);
    glVertex3f(-0.31,-0.25,0.15);
    glVertex3f(-0.31,0.2,0.15);
    glVertex3f(-0.31,0.2,0.2);
    //back
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(-0.35,-0.25,-0.2);
    glVertex3f(-0.31,-0.25,-0.2);
    glVertex3f(-0.31,0.2,-0.2);
    glVertex3f(-0.35,0.2,-0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(-0.35,-0.25,-0.2);
    glVertex3f(-0.35,-0.25,-0.15);
    glVertex3f(-0.35,0.2,-0.15);
    glVertex3f(-0.35,0.2,-0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(-0.35,-0.25,-0.15);
    glVertex3f(-0.31,-0.25,-0.15);
    glVertex3f(-0.31,0.2,-0.15);
    glVertex3f(-0.35,0.2,-0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(-0.31,-0.25,-0.2);
    glVertex3f(-0.31,-0.25,-0.15);
    glVertex3f(-0.31,0.2,-0.15);
    glVertex3f(-0.31,0.2,-0.2);
    //top
    glColor3f(0.2,0.2,0.5);
    glVertex3f(-0.35,0.2,0.3);
    glVertex3f(-0.31,0.2,0.3);
    glVertex3f(-0.31,0.25,0.3);
    glVertex3f(-0.35,0.25,0.3);

    glColor3f(0.3,0.3,0.5);
    glVertex3f(-0.35,0.2,0.3);
    glVertex3f(-0.35,0.2,-0.3);
    glVertex3f(-0.35,0.25,-0.3);
    glVertex3f(-0.35,0.25,0.3);

    glColor3f(0.2,0.2,0.5);
    glVertex3f(-0.35,0.2,-0.3);
    glVertex3f(-0.31,0.2,-0.3);
    glVertex3f(-0.31,0.25,-0.3);
    glVertex3f(-0.35,0.25,-0.3);

    glColor3f(0.3,0.3,0.5);
    glVertex3f(-0.31,0.2,0.3);
    glVertex3f(-0.31,0.2,-0.3);
    glVertex3f(-0.31,0.25,-0.3);
    glVertex3f(-0.31,0.25,0.3);

    glColor3f(0.3,0.3,0.6);
    glVertex3f(-0.35,0.25,0.3);
    glVertex3f(-0.31,0.25,0.3);
    glVertex3f(-0.31,0.25,-0.3);
    glVertex3f(-0.35,0.25,-0.3);
    //top piller
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(-0.35,0.25,0.2);
    glVertex3f(-0.31,0.25,0.2);
    glVertex3f(-0.31,0.35,0.2);
    glVertex3f(-0.35,0.35,0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(-0.35,0.25,0.2);
    glVertex3f(-0.35,0.25,0.15);
    glVertex3f(-0.35,0.35,0.15);
    glVertex3f(-0.35,0.35,0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(-0.35,0.25,0.15);
    glVertex3f(-0.31,0.25,0.15);
    glVertex3f(-0.31,0.35,0.15);
    glVertex3f(-0.35,0.35,0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(-0.31,0.25,0.2);
    glVertex3f(-0.31,0.25,0.15);
    glVertex3f(-0.31,0.35,0.15);
    glVertex3f(-0.31,0.35,0.2);
    //back
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(-0.35,0.25,-0.2);
    glVertex3f(-0.31,0.25,-0.2);
    glVertex3f(-0.31,0.35,-0.2);
    glVertex3f(-0.35,0.35,-0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(-0.35,0.25,-0.2);
    glVertex3f(-0.35,0.25,-0.15);
    glVertex3f(-0.35,0.35,-0.15);
    glVertex3f(-0.35,0.35,-0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(-0.35,0.25,-0.15);
    glVertex3f(-0.31,0.25,-0.15);
    glVertex3f(-0.31,0.35,-0.15);
    glVertex3f(-0.35,0.35,-0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(-0.31,0.25,-0.2);
    glVertex3f(-0.31,0.25,-0.15);
    glVertex3f(-0.31,0.35,-0.15);
    glVertex3f(-0.31,0.35,-0.2);
    glEnd();

    //right side
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(0.35,-0.25,0.2);
    glVertex3f(0.31,-0.25,0.2);
    glVertex3f(0.31,0.2,0.2);
    glVertex3f(0.35,0.2,0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(0.35,-0.25,0.2);
    glVertex3f(0.35,-0.25,0.15);
    glVertex3f(0.35,0.2,0.15);
    glVertex3f(0.35,0.2,0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(0.35,-0.25,0.15);
    glVertex3f(0.31,-0.25,0.15);
    glVertex3f(0.31,0.2,0.15);
    glVertex3f(0.35,0.2,0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(0.31,-0.25,0.2);
    glVertex3f(0.31,-0.25,0.15);
    glVertex3f(0.31,0.2,0.15);
    glVertex3f(0.31,0.2,0.2);
    //back
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(0.35,-0.25,-0.2);
    glVertex3f(0.31,-0.25,-0.2);
    glVertex3f(0.31,0.2,-0.2);
    glVertex3f(0.35,0.2,-0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(0.35,-0.25,-0.2);
    glVertex3f(0.35,-0.25,-0.15);
    glVertex3f(0.35,0.2,-0.15);
    glVertex3f(0.35,0.2,-0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(0.35,-0.25,-0.15);
    glVertex3f(0.31,-0.25,-0.15);
    glVertex3f(0.31,0.2,-0.15);
    glVertex3f(0.35,0.2,-0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(0.31,-0.25,-0.2);
    glVertex3f(0.31,-0.25,-0.15);
    glVertex3f(0.31,0.2,-0.15);
    glVertex3f(0.31,0.2,-0.2);
    //top
    glColor3f(0.2,0.2,0.5);
    glVertex3f(0.35,0.2,0.3);
    glVertex3f(0.31,0.2,0.3);
    glVertex3f(0.31,0.25,0.3);
    glVertex3f(0.35,0.25,0.3);

    glColor3f(0.3,0.3,0.5);
    glVertex3f(0.35,0.2,0.3);
    glVertex3f(0.35,0.2,-0.3);
    glVertex3f(0.35,0.25,-0.3);
    glVertex3f(0.35,0.25,0.3);

    glColor3f(0.2,0.2,0.5);
    glVertex3f(0.35,0.2,-0.3);
    glVertex3f(0.31,0.2,-0.3);
    glVertex3f(0.31,0.25,-0.3);
    glVertex3f(0.35,0.25,-0.3);

    glColor3f(0.3,0.3,0.5);
    glVertex3f(0.31,0.2,0.3);
    glVertex3f(0.31,0.2,-0.3);
    glVertex3f(0.31,0.25,-0.3);
    glVertex3f(0.31,0.25,0.3);

    glColor3f(0.3,0.3,0.6);
    glVertex3f(0.35,0.25,0.3);
    glVertex3f(0.31,0.25,0.3);
    glVertex3f(0.31,0.25,-0.3);
    glVertex3f(0.35,0.25,-0.3);
    //top piller
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(0.35,0.25,0.2);
    glVertex3f(0.31,0.25,0.2);
    glVertex3f(0.31,0.35,0.2);
    glVertex3f(0.35,0.35,0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(0.35,0.25,0.2);
    glVertex3f(0.35,0.25,0.15);
    glVertex3f(0.35,0.35,0.15);
    glVertex3f(0.35,0.35,0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(0.35,0.25,0.15);
    glVertex3f(0.31,0.25,0.15);
    glVertex3f(0.31,0.35,0.15);
    glVertex3f(0.35,0.35,0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(0.31,0.25,0.2);
    glVertex3f(0.31,0.25,0.15);
    glVertex3f(0.31,0.35,0.15);
    glVertex3f(0.31,0.35,0.2);
    //back
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(0.35,0.25,-0.2);
    glVertex3f(0.31,0.25,-0.2);
    glVertex3f(0.31,0.35,-0.2);
    glVertex3f(0.35,0.35,-0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(0.35,0.25,-0.2);
    glVertex3f(0.35,0.25,-0.15);
    glVertex3f(0.35,0.35,-0.15);
    glVertex3f(0.35,0.35,-0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(0.35,0.25,-0.15);
    glVertex3f(0.31,0.25,-0.15);
    glVertex3f(0.31,0.35,-0.15);
    glVertex3f(0.35,0.35,-0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(0.31,0.25,-0.2);
    glVertex3f(0.31,0.25,-0.15);
    glVertex3f(0.31,0.35,-0.15);
    glVertex3f(0.31,0.35,-0.2);
    glEnd();
    //slops front
    glBegin(GL_QUADS);
    glColor3f(0.8,0.6,0.5);
    glVertex3f(-0.6,-0.25,0.17);
    glVertex3f(-0.5,-0.25,0.17);
    glVertex3f(-0.35,0.2,0.17);
    glVertex3f(-0.35,0.25,0.17);
    //BACK
    glVertex3f(-0.6,-0.25,-0.17);
    glVertex3f(-0.5,-0.25,-0.17);
    glVertex3f(-0.35,0.2,-0.17);
    glVertex3f(-0.35,0.25,-0.17);
    //right front
    glVertex3f(0.6,-0.25,0.17);
    glVertex3f(0.5,-0.25,0.17);
    glVertex3f(0.35,0.2,0.17);
    glVertex3f(0.35,0.25,0.17);
    //Back
    glVertex3f(0.6,-0.25,-0.17);
    glVertex3f(0.5,-0.25,-0.17);
    glVertex3f(0.35,0.2,-0.17);
    glVertex3f(0.35,0.25,-0.17);
    glEnd();
}

void bridge()
{
    glBegin(GL_QUADS);
    glColor3f(0.1,0.2,0.3);
    glVertex3f(-0.3,-0.25,0.15);
    glVertex3f(0.3,-0.25,0.15);
    glVertex3f(0.3,-0.23,0.15);
    glVertex3f(-0.3,-0.23,0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(-0.3,-0.25,0.15);
    glVertex3f(-0.3,-0.25,-0.15);
    glVertex3f(-0.3,-0.23,-0.15);
    glVertex3f(-0.3,-0.23,0.15);

    glColor3f(0.1,0.2,0.3);
    glVertex3f(-0.3,-0.25,-0.15);
    glVertex3f(0.3,-0.25,-0.15);
    glVertex3f(0.3,-0.23,-0.15);
    glVertex3f(-0.3,-0.23,-0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(0.3,-0.25,0.15);
    glVertex3f(0.3,-0.25,-0.15);
    glVertex3f(0.3,-0.23,-0.15);
    glVertex3f(0.3,-0.23,0.15);

    glColor3f(0.3,0.3,0.4);
    glVertex3f(-0.3,-0.23,0.15);
    glVertex3f(0.3,-0.23,0.15);
    glVertex3f(0.3,-0.23,-0.15);
    glVertex3f(-0.3,-0.23,-0.15);
    glEnd();
    //pillers
    //left front
    glBegin(GL_QUADS);
    glColor3f(0.3,0.2,0.1);
    glVertex3f(-0.3,-0.23,0.15);
    glVertex3f(-0.28,-0.23,0.15);
    glVertex3f(-0.28,0.1,0.15);
    glVertex3f(-0.3,0.1,0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(-0.3,-0.23,0.15);
    glVertex3f(-0.3,-0.23,0.12);
    glVertex3f(-0.3,0.1,0.12);
    glVertex3f(-0.3,0.1,0.15);

    glColor3f(0.3,0.2,0.1);
    glVertex3f(-0.3,-0.23,0.12);
    glVertex3f(-0.28,-0.23,0.12);
    glVertex3f(-0.28,0.1,0.12);
    glVertex3f(-0.3,0.1,0.12);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(-0.28,-0.23,0.15);
    glVertex3f(-0.28,-0.23,0.12);
    glVertex3f(-0.28,0.1,0.12);
    glVertex3f(-0.28,0.1,0.15);
    glEnd();
    //right front
    glBegin(GL_QUADS);
    glColor3f(0.3,0.2,0.1);
    glVertex3f(0.3,-0.23,0.15);
    glVertex3f(0.28,-0.23,0.15);
    glVertex3f(0.28,0.1,0.15);
    glVertex3f(0.3,0.1,0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(0.3,-0.23,0.15);
    glVertex3f(0.3,-0.23,0.12);
    glVertex3f(0.3,0.1,0.12);
    glVertex3f(0.3,0.1,0.15);

    glColor3f(0.3,0.2,0.1);
    glVertex3f(0.3,-0.23,0.12);
    glVertex3f(0.28,-0.23,0.12);
    glVertex3f(0.28,0.1,0.12);
    glVertex3f(0.3,0.1,0.12);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(0.28,-0.23,0.15);
    glVertex3f(0.28,-0.23,0.12);
    glVertex3f(0.28,0.1,0.12);
    glVertex3f(0.28,0.1,0.15);
    glEnd();
    //left back
    glBegin(GL_QUADS);
    glColor3f(0.3,0.2,0.1);
    glVertex3f(-0.3,-0.23,-0.15);
    glVertex3f(-0.28,-0.23,-0.15);
    glVertex3f(-0.28,0.1,-0.15);
    glVertex3f(-0.3,0.1,-0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(-0.3,-0.23,-0.15);
    glVertex3f(-0.3,-0.23,-0.12);
    glVertex3f(-0.3,0.1,-0.12);
    glVertex3f(-0.3,0.1,-0.15);

    glColor3f(0.3,0.2,0.1);
    glVertex3f(-0.3,-0.23,-0.12);
    glVertex3f(-0.28,-0.23,-0.12);
    glVertex3f(-0.28,0.1,-0.12);
    glVertex3f(-0.3,0.1,-0.12);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(-0.28,-0.23,-0.15);
    glVertex3f(-0.28,-0.23,-0.12);
    glVertex3f(-0.28,0.1,-0.12);
    glVertex3f(-0.28,0.1,-0.15);
    glEnd();
    //right back
    glBegin(GL_QUADS);
    glColor3f(0.3,0.2,0.1);
    glVertex3f(0.3,-0.23,-0.15);
    glVertex3f(0.28,-0.23,-0.15);
    glVertex3f(0.28,0.1,-0.15);
    glVertex3f(0.3,0.1,-0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(0.3,-0.23,-0.15);
    glVertex3f(0.3,-0.23,-0.12);
    glVertex3f(0.3,0.1,-0.12);
    glVertex3f(0.3,0.1,-0.15);

    glColor3f(0.3,0.2,0.1);
    glVertex3f(0.3,-0.23,-0.12);
    glVertex3f(0.28,-0.23,-0.12);
    glVertex3f(0.28,0.1,-0.12);
    glVertex3f(0.3,0.1,-0.12);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(0.28,-0.23,-0.15);
    glVertex3f(0.28,-0.23,-0.12);
    glVertex3f(0.28,0.1,-0.12);
    glVertex3f(0.28,0.1,-0.15);
    glEnd();
    //top left
    glBegin(GL_QUADS);
    glColor3f(0.4,0.3,0.2);
    glVertex3f(-0.3,0.1,0.15);
    glVertex3f(-0.28,0.1,0.15);
    glVertex3f(-0.28,0.13,0.15);
    glVertex3f(-0.3,0.13,0.15);

    glColor3f(0.5,0.3,0.2);
    glVertex3f(-0.3,0.1,0.15);
    glVertex3f(-0.3,0.1,-0.15);
    glVertex3f(-0.3,0.13,-0.15);
    glVertex3f(-0.3,0.13,0.15);

    glColor3f(0.4,0.3,0.2);
    glVertex3f(-0.3,0.1,-0.15);
    glVertex3f(-0.28,0.1,-0.15);
    glVertex3f(-0.28,0.13,-0.15);
    glVertex3f(-0.3,0.13,-0.15);

    glColor3f(0.5,0.3,0.2);
    glVertex3f(-0.28,0.1,0.15);
    glVertex3f(-0.28,0.1,-0.15);
    glVertex3f(-0.28,0.13,-0.15);
    glVertex3f(-0.28,0.13,0.15);
    glEnd();

    //top right
    glBegin(GL_QUADS);
    glColor3f(0.4,0.3,0.2);
    glVertex3f(0.3,0.1,0.15);
    glVertex3f(0.28,0.1,0.15);
    glVertex3f(0.28,0.13,0.15);
    glVertex3f(0.3,0.13,0.15);

    glColor3f(0.5,0.3,0.2);
    glVertex3f(0.3,0.1,0.15);
    glVertex3f(0.3,0.1,-0.15);
    glVertex3f(0.3,0.13,-0.15);
    glVertex3f(0.3,0.13,0.15);

    glColor3f(0.4,0.3,0.2);
    glVertex3f(0.3,0.1,-0.15);
    glVertex3f(0.28,0.1,-0.15);
    glVertex3f(0.28,0.13,-0.15);
    glVertex3f(0.3,0.13,-0.15);

    glColor3f(0.5,0.3,0.2);
    glVertex3f(0.28,0.1,0.15);
    glVertex3f(0.28,0.1,-0.15);
    glVertex3f(0.28,0.13,-0.15);
    glVertex3f(0.28,0.13,0.15);
    glEnd();
    //sides front
    glBegin(GL_QUADS);
    glColor3f(0.4,0.3,0.5);
    glVertex3f(-0.28,-0.15,0.15);
    glVertex3f(0.28,-0.15,0.15);
    glVertex3f(0.28,-0.12,0.15);
    glVertex3f(-0.28,-0.12,0.15);

    glVertex3f(-0.28,-0.15,0.12);
    glVertex3f(0.28,-0.15,0.12);
    glVertex3f(0.28,-0.12,0.12);
    glVertex3f(-0.28,-0.12,0.12);
    //back
    glVertex3f(-0.28,-0.15,-0.15);
    glVertex3f(0.28,-0.15,-0.15);
    glVertex3f(0.28,-0.12,-0.15);
    glVertex3f(-0.28,-0.12,-0.15);

    glVertex3f(-0.28,-0.15,-0.12);
    glVertex3f(0.28,-0.15,-0.12);
    glVertex3f(0.28,-0.12,-0.12);
    glVertex3f(-0.28,-0.12,-0.12);
    glEnd();
    //top
    glBegin(GL_QUADS);
    glColor3f(0.4,0.3,0.5);
    glVertex3f(-0.28,0.1,0.15);
    glVertex3f(0.28,0.1,0.15);
    glVertex3f(0.28,0.13,0.15);
    glVertex3f(-0.28,0.13,0.15);

    glVertex3f(-0.28,0.1,0.12);
    glVertex3f(0.28,0.1,0.12);
    glVertex3f(0.28,0.13,0.12);
    glVertex3f(-0.28,0.13,0.12);
    //back
    glVertex3f(-0.28,0.1,-0.15);
    glVertex3f(0.28,0.1,-0.15);
    glVertex3f(0.28,0.13,-0.15);
    glVertex3f(-0.28,0.13,-0.15);

    glVertex3f(-0.28,0.1,-0.12);
    glVertex3f(0.28,0.1,-0.12);
    glVertex3f(0.28,0.13,-0.12);
    glVertex3f(-0.28,0.13,-0.12);
    glEnd();
    //house
    glColor3f(0.8,0.1,0.1);
    glPushMatrix();
    glTranslatef(0.0,0.25,0.0);
    glutSolidCube(0.25);
    glPopMatrix();
    glBegin(GL_QUADS); //WINDOW
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-0.05,0.18,0.16);
    glVertex3f(0.05,0.18,0.16);
    glVertex3f(0.05,0.25,0.16);
    glVertex3f(-0.05,0.25,0.16);
    glEnd();

    glBegin(GL_TRIANGLES);  //ROOF
    glColor3f(1.0,0.8,0.0);
    glVertex3f(-0.16,0.35,0.16);
    glVertex3f(0.16,0.35,0.16);
    glVertex3f(0.0,0.5,0.0);

    glVertex3f(-0.16,0.35,0.16);
    glVertex3f(-0.16,0.35,-0.16);
    glVertex3f(0.0,0.5,0.0);

    glVertex3f(-0.16,0.35,-0.16);
    glVertex3f(0.16,0.35,-0.16);
    glVertex3f(0.0,0.5,0.0);

    glVertex3f(0.16,0.35,0.16);
    glVertex3f(0.16,0.35,-0.16);
    glVertex3f(0.0,0.5,0.0);
    glEnd();
}

void track()
{
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    //left
    glVertex3f(-3.0,-0.23,0.12);
    glVertex3f(-0.3,-0.23,0.12);

    glVertex3f(-3.0,-0.23,0.1);
    glVertex3f(-0.3,-0.23,0.1);

    glVertex3f(-3.0,-0.23,-0.12);
    glVertex3f(-0.3,-0.23,-0.12);

    glVertex3f(-3.0,-0.23,-0.1);
    glVertex3f(-0.3,-0.23,-0.1);
    //right
    glVertex3f(3.0,-0.23,0.12);
    glVertex3f(0.3,-0.23,0.12);

    glVertex3f(3.0,-0.23,0.1);
    glVertex3f(0.3,-0.23,0.1);

    glVertex3f(3.0,-0.23,-0.12);
    glVertex3f(0.3,-0.23,-0.12);

    glVertex3f(3.0,-0.23,-0.1);
    glVertex3f(0.3,-0.23,-0.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    for(j=0.0;j<=2.6;j+=0.1)
    {
        glVertex3f(-3.0+j,-0.23,0.1);
        glVertex3f(-3.0+j,-0.23,-0.1);
    }
    for(j=0.0;j<=3;j+=0.1)
    {
        glVertex3f(0.3+j,-0.23,0.1);
        glVertex3f(0.3+j,-0.23,-0.1);
    }
    glEnd();
}

void ship()
{
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);   //base
    glVertex3f(-0.2,-0.4,-3.5);
    glVertex3f(0.2,-0.4,-3.5);
    glVertex3f(0.2,-0.3,-3.5);
    glVertex3f(-0.2,-0.3,-3.5);

    glColor3f(0.8,0.8,1.0);
    glVertex3f(-0.2,-0.4,-3.5);
    glVertex3f(-0.2,-0.4,-4.8);
    glVertex3f(-0.2,-0.3,-5.0);
    glVertex3f(-0.2,-0.3,-3.5);

    glColor3f(0.8,0.8,0.8);
    glVertex3f(-0.2,-0.4,-4.8);
    glVertex3f(0.2,-0.4,-4.8);
    glVertex3f(0.2,-0.3,-5.0);
    glVertex3f(-0.2,-0.3,-5.0);

    glColor3f(0.8,0.8,1.0);
    glVertex3f(0.2,-0.4,-3.5);
    glVertex3f(0.2,-0.4,-4.8);
    glVertex3f(0.2,-0.3,-5.0);
    glVertex3f(0.2,-0.3,-3.5);

    glColor3f(1.0,0.8,1.0);
    glVertex3f(-0.2,-0.3,-3.5);
    glVertex3f(0.2,-0.3,-3.5);
    glVertex3f(0.2,-0.3,-5.0);
    glVertex3f(-0.2,-0.3,-5.0);
    //top
    glColor3f(1.0,0.0,0.7);
    glVertex3f(-0.18,-0.3,-3.7);
    glVertex3f(0.18,-0.3,-3.7);
    glVertex3f(0.18,-0.2,-3.7);
    glVertex3f(-0.18,-0.2,-3.7);

    glColor3f(1.0,0.0,0.5);
    glVertex3f(-0.18,-0.3,-3.7);
    glVertex3f(-0.18,-0.3,-4.8);
    glVertex3f(-0.18,-0.2,-4.8);
    glVertex3f(-0.18,-0.2,-3.7);

    glColor3f(1.0,0.0,0.7);
    glVertex3f(-0.18,-0.3,-3.7);
    glVertex3f(0.18,-0.3,-4.8);
    glVertex3f(0.18,-0.2,-4.8);
    glVertex3f(-0.18,-0.2,-3.7);

    glColor3f(1.0,0.0,0.5);
    glVertex3f(0.18,-0.3,-3.7);
    glVertex3f(0.18,-0.3,-4.8);
    glVertex3f(0.18,-0.2,-4.8);
    glVertex3f(0.18,-0.2,-3.7);

    glColor3f(1.0,0.1,0.8);
    glVertex3f(-0.18,-0.2,-3.7);
    glVertex3f(0.18,-0.2,-3.7);
    glVertex3f(0.18,-0.2,-4.8);
    glVertex3f(-0.18,-0.2,-4.8);
    glEnd();
    //front
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.5,0.7);
    glVertex3f(-0.2,-0.4,-3.5);
    glVertex3f(-0.2,-0.3,-3.5);
    glVertex3f(0.0,-0.15,-2.2);

    glColor3f(0.5,0.8,0.7);
    glVertex3f(-0.2,-0.4,-3.5);
    glVertex3f(0.2,-0.4,-3.5);
    glVertex3f(0.0,-0.15,-2.2);

    glColor3f(0.5,0.5,0.7);
    glVertex3f(0.2,-0.4,-3.5);
    glVertex3f(0.2,-0.3,-3.5);
    glVertex3f(0.0,-0.15,-2.2);
    glEnd();
    //TOP PILLARS
    glBegin(GL_QUADS);
    glColor3f(1.0,0.8,0.1);
    glVertex3f(-0.05,-0.2,-3.8);
    glVertex3f(0.05,-0.2,-3.8);
    glVertex3f(0.05,0.1,-3.8);
    glVertex3f(-0.05,0.1,-3.8);

    glColor3f(1.0,0.8,0.2);
    glVertex3f(-0.05,-0.2,-3.8);
    glVertex3f(-0.05,-0.2,-4.0);
    glVertex3f(-0.05,0.1,-4.0);
    glVertex3f(-0.05,0.1,-3.8);

    glColor3f(1.0,0.8,0.1);
    glVertex3f(-0.05,-0.2,-4.0);
    glVertex3f(0.05,-0.2,-4.0);
    glVertex3f(0.05,0.1,-4.0);
    glVertex3f(-0.05,0.1,-4.0);

    glColor3f(1.0,0.8,0.2);
    glVertex3f(0.05,-0.2,-3.8);
    glVertex3f(0.05,-0.2,-4.0);
    glVertex3f(0.05,0.1,-4.0);
    glVertex3f(0.05,0.1,-3.8);
    //back
    glColor3f(1.0,0.5,0.1);
    glVertex3f(-0.05,-0.2,-4.2);
    glVertex3f(0.05,-0.2,-4.2);
    glVertex3f(0.05,0.2,-4.2);
    glVertex3f(-0.05,0.2,-4.2);

    glColor3f(1.0,0.6,0.2);
    glVertex3f(-0.05,-0.2,-4.2);
    glVertex3f(-0.05,-0.2,-4.5);
    glVertex3f(-0.05,0.2,-4.5);
    glVertex3f(-0.05,0.2,-4.2);

    glColor3f(1.0,0.5,0.1);
    glVertex3f(-0.05,-0.2,-4.5);
    glVertex3f(0.05,-0.2,-4.5);
    glVertex3f(0.05,0.2,-4.5);
    glVertex3f(-0.05,0.2,-4.5);

    glColor3f(1.0,0.6,0.2);
    glVertex3f(0.05,-0.2,-4.2);
    glVertex3f(0.05,-0.2,-4.5);
    glVertex3f(0.05,0.2,-4.5);
    glVertex3f(0.05,0.2,-4.2);
    glEnd();
}

void train()
{
    glBegin(GL_QUADS);   //engine
    glColor3f(0.8,0.6,0.4);
    glVertex3f(1.0,-0.23,0.1);
    glVertex3f(1.15,-0.23,0.1);
    glVertex3f(1.15,-0.14,0.1);
    glVertex3f(1.0,-0.14,0.1);

    glColor3f(0.5,0.5,0.8);
    glVertex3f(1.0,-0.23,0.1);
    glVertex3f(1.0,-0.23,-0.1);
    glVertex3f(1.0,-0.14,-0.1);
    glVertex3f(1.0,-0.14,0.1);

    glColor3f(0.8,0.6,0.4);
    glVertex3f(1.0,-0.23,-0.1);
    glVertex3f(1.15,-0.23,-0.1);
    glVertex3f(1.15,-0.14,-0.1);
    glVertex3f(1.0,-0.14,-0.1);

    //FRONT
    glColor3f(0.0,0.1,0.9);
    glVertex3f(1.0,-0.14,0.1);
    glVertex3f(1.15,-0.05,0.1);
    glVertex3f(1.15,-0.05,-0.1);
    glVertex3f(1.0,-0.14,-0.1);

    glColor3f(0.8,0.6,0.2);
    glVertex3f(1.02,-0.12,0.1);
    glVertex3f(1.13,-0.05,0.1);
    glVertex3f(1.13,-0.05,-0.06);
    glVertex3f(1.02,-0.12,-0.06);
    glEnd();
    //side
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(1.0,-0.14,0.1);
    glVertex3f(1.15,-0.14,0.1);
    glVertex3f(1.15,-0.05,0.1);

    glVertex3f(1.0,-0.14,-0.1);
    glVertex3f(1.15,-0.14,-0.1);
    glVertex3f(1.15,-0.05,-0.1);
    glEnd();
    //bogies
    glBegin(GL_QUADS);
    for(j=0.0;j<2;j+=0.27)
    {
    glColor3f(0.5,0.0,0.1);
    glVertex3f(1.15+j,-0.23,0.1);
    glVertex3f(1.4+j,-0.23,0.1);
    glVertex3f(1.4+j,-0.05,0.1);
    glVertex3f(1.15+j,-0.05,0.1);

    glColor3f(0.5,0.0,0.5);
    glVertex3f(1.15+j,-0.23,0.1);
    glVertex3f(1.15+j,-0.23,-0.1);
    glVertex3f(1.15+j,-0.05,-0.1);
    glVertex3f(1.15+j,-0.05,0.1);

    glColor3f(0.5,0.0,0.1);
    glVertex3f(1.15+j,-0.23,-0.1);
    glVertex3f(1.4+j,-0.23,-0.1);
    glVertex3f(1.4+j,-0.05,-0.1);
    glVertex3f(1.15+j,-0.05,-0.1);

    glColor3f(0.5,0.0,0.5);
    glVertex3f(1.4+j,-0.23,0.1);
    glVertex3f(1.4+j,-0.23,-0.1);
    glVertex3f(1.4+j,-0.05,-0.1);
    glVertex3f(1.4+j,-0.05,0.1);

    glColor3f(0.8,0.3,0.5);
    glVertex3f(1.15+j,-0.05,0.1);
    glVertex3f(1.4+j,-0.05,0.1);
    glVertex3f(1.4+j,-0.05,-0.1);
    glVertex3f(1.15+j,-0.05,-0.1);
    }
    glEnd();
}

void aero()
{
    glBegin(GL_POLYGON);
    glColor3f(0.9,0.9,.9);
    glVertex3f(-3.2,0.7,-0.8);
    glVertex3f(-3.0,0.67,-0.8);
    glVertex3f(-2.4,0.67,-0.8);
    glVertex3f(-2.4,0.73,-0.8);
    glVertex3f(-3.2,0.73,-0.8);

    glVertex3f(-3.2,0.7,-0.65);
    glVertex3f(-3.0,0.67,-0.65);
    glVertex3f(-2.4,0.67,-0.65);
    glVertex3f(-2.4,0.73,-0.65);
    glVertex3f(-3.2,0.73,-0.65);
    glEnd();
    glBegin(GL_QUADS);

    glColor3f(0.7,0.7,.7);
    glVertex3f(-3.2,0.7,-0.65);
    glVertex3f(-3.2,0.7,-0.8);
    glVertex3f(-3.2,0.73,-0.8);
    glVertex3f(-3.2,0.73,-0.65);

    glColor3f(0.7,0.7,.7);
    glVertex3f(-2.4,0.67,-0.65);
    glVertex3f(-2.4,0.67,-0.8);
    glVertex3f(-2.4,0.73,-0.8);
    glVertex3f(-2.4,0.73,-0.65);

    glColor3f(0.7,0.8,0.8);
    glVertex3f(-3.2,0.73,-0.65);
    glVertex3f(-2.4,0.73,-0.65);
    glVertex3f(-2.4,0.73,-0.8);
    glVertex3f(-3.2,0.73,-0.8);
    //wings
    glColor3f(0.8,0.2,0.5);
    glVertex3f(-2.8,0.7,-0.7);
    glVertex3f(-2.62,0.7,-0.7);
    glVertex3f(-2.75,0.7,-0.2);
    glVertex3f(-2.85,0.7,-0.2);

    glVertex3f(-2.8,0.7,-0.8);
    glVertex3f(-2.62,0.7,-0.8);
    glVertex3f(-2.75,0.7,-1.3);
    glVertex3f(-2.85,0.7,-1.3);

    glVertex3f(-3.2,0.73,-0.725);
    glVertex3f(-3.1,0.73,-0.725);
    glVertex3f(-3.18,0.82,-0.725);
    glVertex3f(-3.25,0.82,-0.725);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.5,0.2);
    glVertex3f(-2.4,0.73,-0.8);
    glVertex3f(-2.4,0.73,-0.65);
    glVertex3f(-2.2,0.68,-0.725);

    glColor3f(1.0,0.7,0.4);
    glVertex3f(-2.4,0.67,-0.65);
    glVertex3f(-2.4,0.73,-0.65);
    glVertex3f(-2.2,0.68,-0.725);

    glColor3f(1.0,0.5,0.2);
    glVertex3f(-2.4,0.68,-0.65);
    glVertex3f(-2.4,0.68,-0.65);
    glVertex3f(-2.2,0.68,-0.725);

    glColor3f(1.0,0.7,0.4);
    glVertex3f(-2.4,0.69,-0.8);
    glVertex3f(-2.4,0.73,-0.8);
    glVertex3f(-2.2,0.68,-0.725);
    glEnd();
    char str[]=" AIR  CIT . . .";
    setFont(GLUT_BITMAP_HELVETICA_18);
    glColor3f(0.0,0.0,0.0);
    drawstring(str,-3.05,0.69,-0.65);
}

void lighthouse()
{
    glBegin(GL_QUADS);
    glColor3f(0.8,0.2,0.0);
    glVertex3f(0.2,-0.42,-5.01);
    glVertex3f(0.35,-0.42,-5.01);
    glVertex3f(0.3,-0.1,-5.01);
    glVertex3f(0.25,-0.1,-5.01);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(0.23,-0.1,-5.01);
    glVertex3f(0.32,-0.1,-5.01);
    glVertex3f(0.32,0.0,-5.01);
    glVertex3f(0.23,0.0,-5.01);

    glColor3f(1.0,1.0,1.0);
    glVertex3f(0.215,-0.3,-5.0);
    glVertex3f(0.33,-0.3,-5.0);
    glVertex3f(0.315,-0.2,-5.0);
    glVertex3f(0.23,-0.2,-5.0);

    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.2,0.2);
    glVertex3f(0.2,0.0,-5.0);
    glVertex3f(0.35,0.0,-5.0);
    glVertex3f(0.27,0.05,-5.0);
    glEnd();
}
void signal()
{
    glBegin(GL_QUADS);
    glColor3f(0.1,0.2,0.1);
    glVertex3f(0.7,-0.25,-0.17);
    glVertex3f(0.73,-0.25,-0.17);
    glVertex3f(0.73,0.15,-0.17);
    glVertex3f(0.7,0.15,-0.17);

    glColor3f(0.1,0.1,0.2);
    glVertex3f(0.67,0.15,-0.17);
    glVertex3f(0.76,0.15,-0.17);
    glVertex3f(0.76,0.3,-0.17);
    glVertex3f(0.67,0.3,-0.17);
    glEnd();
}
void light()
{
    if(b>0.0)
        glColor3f(1.0,0.0,0.0);
    else
            glColor3f(0.0,1.0,0.0);
    if(p<-3.5)
          glColor3f(1.0,0.0,0.0);
    glPushMatrix();
    glTranslatef(0.715,0.25,-0.17);
    glutSolidSphere(0.03,10,10);
    glPopMatrix();

}

void new1()
{
    glTranslatef(a,b,c);
    bridge();
}
void new2()
{
    glTranslatef(m,n,o);
    ship();
}
void new3()
{
    glTranslatef(p,q,r);
    train();
}
void new4()
{
    glTranslatef(x,y,z);
    aero();
}
void new5()
{
    glTranslatef(a1,a2,a3);
    lines();
}

void update(int value)
{
    if(flagx==1)
    {
     if(flagb==1)
     {
        b+=0.02f;
        if(b>0.5)
        {
            flagb=2;
            flags=1;
        }

     }
     if(flags==1)
     {
        o+=0.07f;
        if(o>2.0)
            flagp=1;
        if(o>6.0)
        {
            flagb=0;
        }
     }
     if(flagb==0)
     {
        b-=0.02f;
        if(b<0.01)
        {
            flagb=1;
            flagt=1;
        }
     }
     if(flagt==1)
     {
           p-=0.05f;
     }
     if(flagp==1)
     {
        x+=0.03;
     }
      if(flagw==1)
      {
        a1+=0.006;
      }
    }
    glutPostRedisplay();
    glutTimerFunc(100,update,0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.0,0.5,1.0,0.0);
    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    base();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    pillars();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    earth();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    track();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    new1();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    new2();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    new3();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    new4();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    water();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    new5();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,0.0);
    glTranslatef(1.2,0.9,-5.1);
    glutSolidSphere(0.08,20,20);
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    lighthouse();
    glTranslatef(0.28,-0.05,-5.0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.02,20,20);
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    signal();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    light();
    glPopMatrix();
    glFlush();
}

void mydisplay()
{

    if(flag==0)
        screen1();
     if(flag==1)
      display();
    if(p<-6.0)
         screen3();
    if(p<-6.8)
      exit(0);
}

void mykeyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
        case 13 :flag=1;
                break;
        case 83 :if(flag==1)
                   flagx=1;
                break;
        case 115:if(flag==1)
                    flagx=1;
                break;
        case 84 :flagx=0;
                break;
        case 116 :flagx=0;
                break;
        case 27:exit(0);
    }
}

void reshape(int w,int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
        glOrtho(-1.1,1.1,1.1*(GLfloat)h/(GLfloat)w,1.1*(GLfloat)h/(GLfloat)w,-10.0,10.0);
    else
        glOrtho(-1.1*(GLfloat)w/(GLfloat)h,1.1*(GLfloat)w/(GLfloat)h,-1.1,1.1,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1500,1000);
    glutCreateWindow("VLBS");
    glClearColor(0.0,0.0,0.0,0.0);
    glEnable(GL_DEPTH_TEST);
    glutReshapeFunc(reshape);
    glutDisplayFunc(mydisplay);
    glutKeyboardFunc(mykeyboard);
    glutTimerFunc(200,update,0);
    glutMainLoop();
    return 0;
}
