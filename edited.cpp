#include "stdafx.h"

#include <iostream>
#include <GL/glut.h> 
#include <ctype.h>
#include <string.h>
#define TEXTID 5

int count=0;

GLfloat i,j,k,l,m,n,o,p;

void vs1();
void vs2();
void vs3();
void vs4();
void vs5();
void vs6();
void vs7();
void vs8();
void vs9();

void back(int id)
{
  switch(id)
  {
    case 1: glClearColor(0.5,0.51,0.51,1);
            break;
    case 2: glClearColor(0,0,0,1);
            break;
  };
  glutPostRedisplay();
}

void DrawTextXY(double x,double y,double z,double scale,char *s)
{
   int i;

   glPushMatrix();
   glTranslatef(x,y,z);
   glScalef(scale,scale,scale);
   for (i=0;i < strlen(s);i++)
     glutStrokeCharacter(GLUT_STROKE_ROMAN ,s[i]);
   glPopMatrix();
}

void front()
{
    glPointSize(0.01);

	glColor3f(1.0,1.0,1.0);
	glLoadName(TEXTID);
	DrawTextXY(95.0,250.55,1.0,0.15,"SJB INSTITUTE OF TECHNOLOGY");


    glColor3f(1.0,0.5,0.5);
	glLoadName(TEXTID);
	DrawTextXY(50.0,457.05,1.0,0.2,"A PROJECT ON COMPUTER GRAPHICS USING OPENGL" );

    glColor3f(0.5,0.5,1.0);
	glLoadName(TEXTID);
	DrawTextXY(110.00,427.55,1.0,0.2,"DANCING STICK MAN ");

    /*glColor3f(1.0,0.5,0.5);
	glLoadName(TEXTID);
	DrawTextXY(150.00,397.55,1.0,0.2,"USING OPENGL");
	*/
	glColor3f(0.55,0.55,1.0);
	glLoadName(TEXTID);
	DrawTextXY(60.05,325.0,1.0,0.15,"PRESS UP ARROW KEY TO CONTINUE");
	
	glColor3f(0.55,0.55,1.0);
	glLoadName(TEXTID);
	DrawTextXY(85.05,300.0,1.0,0.15,"OR PRESS 'Q' KEY FOR QUERIES");

    glColor3f(1.0,1.0,0.5);
	glLoadName(TEXTID);
	DrawTextXY(130.0,210.55,1.0,0.12,"VAISHNAVI R HEGDE   1JB13CS169");

	glColor3f(1.0,1.0,0.5);
	glLoadName(TEXTID);
	DrawTextXY(130.0,190.55,1.0,0.12,"VARUN KUMAR H N   1JB13CS170");

    glColor3f(1.0,0.5,1.0);
	glLoadName(TEXTID);
	DrawTextXY(150.5,140.55,1.0,0.13,"Under the guidance of ");

	glColor3f(0.5,1.0,0.5);
	glLoadName(TEXTID);
	DrawTextXY(50.0,100.55,1.0,0.12,"Ms. MANASA");

	glColor3f(1.0,1.0,0.0);
	glLoadName(TEXTID);
	DrawTextXY(52.0,75.0,0.0,0.11," Dept. of CSE");

	glColor3f(0.5,1.0,0.5);
	glLoadName(TEXTID);
	DrawTextXY(350.0,100.55,0.0,0.12,"Ms. SHUBHA T V");

	glColor3f(1.0,1.0,0.0);
	glLoadName(TEXTID);
	DrawTextXY(352.0,75.0,0.0,0.11," Dept. of CSE");
}


void help()
{
    glPointSize(0.01);
    glColor3f(1.0,0.0,0.0);
	glLoadName(TEXTID);
	DrawTextXY(50.0,457.05,1.0,0.2,"GRAPHICAL IMPLEMENTATION OF" );

    glColor3f(1.0,0.25,0.25);
	glLoadName(TEXTID);
	DrawTextXY(110.00,427.55,1.0,0.2,"DANCING STICK MAN ");

    glColor3f(1.0,0.25,0.25);
	glLoadName(TEXTID);
	DrawTextXY(150.00,397.55,1.0,0.2,"USING OPENGL");

	glColor3f(0.0,0.0,1.0);
	glLoadName(TEXTID);
	DrawTextXY(50.05,325.0,1.0,0.1,"UP  -> STICKMAN DISPLAY");
	
	glColor3f(0.0,0.0,1.0);
	glLoadName(TEXTID);
	DrawTextXY(50.05,305.0,1.0,0.1,"RIGHT -> RIGHT ARM UP");
	
	glColor3f(0.0,0.0,1.0);
	glLoadName(TEXTID);
	DrawTextXY(50.05,285.0,1.0,0.1,"LEFT -> LEFT ARM UP");

        glColor3f(0.0,0.0,1.0);
	glLoadName(TEXTID);
	DrawTextXY(50.05,265.0,1.0,0.1,"DOWN -> LEGS SPLIT");
	
	glColor3f(0.0,0.0,1.0);
	glLoadName(TEXTID);
	DrawTextXY(50.05,245.0,1.0,0.1,"'a'   -> RIGHT ARM AND RIGHT LEG MOVEMENT");
	
	glColor3f(0.0,0.0,1.0);
	glLoadName(TEXTID);
	DrawTextXY(50.05,225.0,1.0,0.1,"'s'   -> LEFT ARM AND LEFT LEG MOVEMENT");
	
        glColor3f(0.0,0.0,1.0);
	glLoadName(TEXTID);
	DrawTextXY(50.05,205.0,1.0,0.1,"'v'   -> ARMS AND LEGS SPLIT");
	
	glColor3f(0.0,0.0,1.0);
	glLoadName(TEXTID);
	DrawTextXY(50.05,185.0,1.0,0.1,"'h'   -> RIGHT HIP MOVEMENT");
	
	glColor3f(0.0,0.0,1.0);
	glLoadName(TEXTID);
	DrawTextXY(50.05,165.0,1.0,0.1,"'j'   -> LEFT HIP MOVEMENT");

}

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glPointSize(10.0);
  if(count==1)
  {
     vs1();
   /* i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glBegin(GL_POINTS);
    glColor3f(0.0,0.0,1.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();*/
  }
  
  if(count==2)
   {
    vs2();
    /*i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glBegin(GL_POINTS);
  glColor3f(0.0,1.0,0.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();*/
  }

  if(count==3)
  {
    vs3();/*
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glBegin(GL_POINTS);
  glColor3f(1.0,1.0,0.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();*/
  }
  
  if(count==4)
  {
    vs4();/*
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glBegin(GL_POINTS);
  glColor3f(0.0,1.0,0.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();*/
  }
  
  if(count==5)
  {
    vs5();/*
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glBegin(GL_POINTS);
  glColor3f(0.7,1.0,0.7);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();*/
  }
  
  if(count==6)
  {
    vs6();/*
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glBegin(GL_POINTS);
  glColor3f(1.0,1.0,0.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();*/
  }
  
  if(count==7)
  {
    vs7();/*
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glBegin(GL_POINTS);
  glColor3f(1.0,1.0,0.5);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();*/
  }
  
  if(count==8)
  {
    vs8();/*
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glBegin(GL_POINTS);
  glColor3f(0.7,1.0,0.2);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();*/
  }
  
  if(count==9)
  {
    vs9();/*
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glBegin(GL_LINES);
  glColor3f(0.0,1.0,0.75);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();*/
  }
  
  if(count==0)
  {
  /*
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glLineWidth(1.0);
    glBegin(GL_POINTS);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(i,j);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(k,l);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(j,i);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(l,k);
  glEnd();
  
        m=rand()%490;
        n=rand()%490;
        o=rand()%490;
        p=rand()%490;
  
    glBegin(GL_POINTS);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(i,j);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(k,l);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(j,i);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(l,j);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(m,n);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(o,p);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(n,m);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(p,o);
  glEnd();
  */
  front();
  glFlush();
  
  //glutStrokeCharacter(GLUT_STROKE_ROMAN, 'h');
  
  }
  
  if(count==-1)
  {/*
  i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
    glLineWidth(1.0);
    glBegin(GL_LINES);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(i,j);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(k,l);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(j,i);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(l,k);
  glEnd();
  
        m=rand()%490;
        n=rand()%490;
        o=rand()%490;
        p=rand()%490;
  
    glBegin(GL_POINTS);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(i,j);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(k,l);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(j,i);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(l,j);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(m,n);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(o,p);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(n,m);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(p,o);
  glEnd();*/
     help();
     glFlush();
  }
  
  glutPostRedisplay();
  glFlush();
}

void vs1()
{
   glClear(GL_COLOR_BUFFER_BIT);
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
  glBegin(GL_LINES);
  glColor3f(1.0,0.0,0.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();
  
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
		glVertex2f(150.0,350.0);
		glVertex2f(120.0,300.0);
		glVertex2f(180.0,300.0);
    glEnd();
    
    glPointSize(5.0);
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
                glVertex2f(145.0,325.0);
                glVertex2f(155.0,325.0);
    glEnd();
    
       glBegin(GL_LINES);
          glLineWidth(5.0);
          glVertex2f(140.0,310.0);
          glVertex2f(160.0,310.0);
          glLineWidth(1.0);
       glEnd();
    
    glPointSize(10.0);
    
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
       glVertex2f(120.0,295.0);
       glVertex2f(120.0,200.0);
       glVertex2f(180.0,200.0);
       glVertex2f(180.0,295.0);
    glEnd();
    
     glLineWidth(5.0);
       glBegin(GL_LINES);
       
       glColor3f(0,0,0);
          glVertex2f(120.0,280.0);
          glVertex2f(180.0,280.0);
       //glLineWidth(1.0);
       glEnd();
       
       glBegin(GL_LINES);
       glLineWidth(5.0);
       glColor3f(0,0,0);
          glVertex2f(120.0,215.0);
          glVertex2f(180.0,215.0);
       glLineWidth(1.0);
       glEnd();
       
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
          glVertex2f(150.0,265.0);
          glVertex2f(150.0,245.0);
          glVertex2f(150.0,225.0);
        glEnd();
    

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(115.0,290.0);
		glVertex2f(115.0,280.0);
		glVertex2f(80.0,210.0);
		glVertex2f(80.0,220.0);
        glEnd();


        glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(185.0,290.0);
		glVertex2f(185.0,280.0);
		glVertex2f(220.0,210.0);
		glVertex2f(220.0,220.0);
        glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(130.0,190.0);
		glVertex2f(130,90.0);
		glVertex2f(135.0,90.0);
		glVertex2f(135.0,190.0);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex2f(165.0,190.0);
		glVertex2f(165.0,90.0);
		glVertex2f(170.0,90.0);
		glVertex2f(170.0,190.0);
    glEnd();
    glLineWidth(1.0);
	glFlush();
}

void vs2()
{
  glClear(GL_COLOR_BUFFER_BIT);
    
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
  glBegin(GL_LINES);
  glColor3f(0.0,1.0,0.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();

  for(int y=0;y<=165;y++)
  {
  glBegin(GL_LINES);
  glColor3f(0.5,0.5,0.0);
    glVertex2i(490.0,490.0);
    glVertex2i(60.0+y,100.0);
    glVertex2i(495.0,485.0);
  glEnd();
  }
  
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
		glVertex2f(150.0,350.0);
		glVertex2f(120.0,300.0);
		glVertex2f(180.0,300.0);
    glEnd();
    
    glPointSize(5.0);
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
                glVertex2f(145.0,325.0);
                glVertex2f(155.0,325.0);
    glEnd();
    
       glBegin(GL_LINES);
          glLineWidth(5.0);
          glVertex2f(140.0,310.0);
          glVertex2f(150.0,310.0);
          glLineWidth(1.0);
       glEnd();
    
    glPointSize(10.0);
    
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
       glVertex2f(120.0,295.0);
       glVertex2f(120.0,200.0);
       glVertex2f(180.0,200.0);
       glVertex2f(180.0,295.0);
    glEnd();
    
     glLineWidth(5.0);
    /*   glBegin(GL_LINES);
       
       glColor3f(0,0,0);
          glVertex2f(120.0,280.0);
          glVertex2f(180.0,280.0);
       //glLineWidth(1.0);
       glEnd();
      */ 
       glBegin(GL_LINES);
       glLineWidth(5.0);
       glColor3f(0,0,0);
          glVertex2f(120.0,215.0);
          glVertex2f(180.0,215.0);
       glLineWidth(1.0);
       glEnd();
       
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
          glVertex2f(150.0,265.0);
          glVertex2f(150.0,245.0);
          glVertex2f(150.0,225.0);
        glEnd();
    

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(115.0,290.0);
		glVertex2f(115.0,280.0);
		glVertex2f(60.0,250.0);
		glVertex2f(60.0,260.0);
        glEnd();


        glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(185.0,290.0);
		glVertex2f(185.0,280.0);
		glVertex2f(220.0,210.0);
		glVertex2f(220.0,220.0);
        glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(130.0,190.0);
		glVertex2f(130,90.0);
		glVertex2f(135.0,90.0);
		glVertex2f(135.0,190.0);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex2f(165.0,190.0);
		glVertex2f(165.0,90.0);
		glVertex2f(170.0,90.0);
		glVertex2f(170.0,190.0);
    glEnd();
    glLineWidth(1.0);
	glFlush();
}

void vs3()
{
  glClear(GL_COLOR_BUFFER_BIT);
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
  glBegin(GL_LINES);
  glColor3f(0.0,0.0,1.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();
  
  for(int y=0;y<=165;y++)
  {
  glBegin(GL_LINES);
  glColor3f(0.0,0.5,0.5);
    glVertex2i(490.0,490.0);
    glVertex2i(60.0+y,100.0);
    glVertex2i(495.0,485.0);
  glEnd();
  }
  
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
		glVertex2f(150.0,350.0);
		glVertex2f(120.0,300.0);
		glVertex2f(180.0,300.0);
    glEnd();
    
    glPointSize(5.0);
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
                glVertex2f(145.0,325.0);
                glVertex2f(155.0,325.0);
    glEnd();
    
       glBegin(GL_LINES);
          glLineWidth(5.0);
          glVertex2f(150.0,310.0);
          glVertex2f(160.0,310.0);
          glLineWidth(1.0);
       glEnd();
    
    glPointSize(10.0);
    
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
       glVertex2f(120.0,295.0);
       glVertex2f(120.0,200.0);
       glVertex2f(180.0,200.0);
       glVertex2f(180.0,295.0);
    glEnd();
    
     glLineWidth(5.0);
       glBegin(GL_LINES);
       
       glColor3f(0,0,0);
          glVertex2f(120.0,280.0);
          glVertex2f(180.0,280.0);
       //glLineWidth(1.0);
       glEnd();
       
       glBegin(GL_LINES);
       glLineWidth(5.0);
       glColor3f(0,0,0);
          glVertex2f(120.0,215.0);
          glVertex2f(180.0,215.0);
       glLineWidth(1.0);
       glEnd();
       
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
          glVertex2f(150.0,265.0);
          glVertex2f(150.0,245.0);
          glVertex2f(150.0,225.0);
        glEnd();
    

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(115.0,290.0);
		glVertex2f(115.0,280.0);
		glVertex2f(80.0,210.0);
		glVertex2f(80.0,220.0);
        glEnd();


        glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(185.0,290.0);
		glVertex2f(185.0,280.0);
		glVertex2f(240.0,250.0);
		glVertex2f(240.0,260.0);
        glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(130.0,190.0);
		glVertex2f(130,90.0);
		glVertex2f(135.0,90.0);
		glVertex2f(135.0,190.0);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex2f(165.0,190.0);
		glVertex2f(165.0,90.0);
		glVertex2f(170.0,90.0);
		glVertex2f(170.0,190.0);
    glEnd();
    glLineWidth(1.0);
	glFlush();
}

void vs4()
{
  glClear(GL_COLOR_BUFFER_BIT);
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
  glBegin(GL_LINES);
  glColor3f(1.0,1.0,1.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();
  
  for(int y=0;y<=165;y++)
  {
  glBegin(GL_LINES);
  glColor3f(0.5,0.5,0.5);
    glVertex2i(490.0,490.0);
    glVertex2i(60.0+y,100.0);
    glVertex2i(495.0,485.0);
  glEnd();
  }
  
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
		glVertex2f(150.0,350.0);
		glVertex2f(120.0,300.0);
		glVertex2f(180.0,300.0);
    glEnd();
    
    glPointSize(5.0);
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
                glVertex2f(145.0,325.0);
                glVertex2f(155.0,325.0);
    glEnd();
    
     glLineWidth(5.0);
       glBegin(GL_LINES);
          glLineWidth(5.0);
          glVertex2f(145.0,310.0);
          glVertex2f(150.0,310.0);
          glLineWidth(1.0);
       glEnd();
    
    glPointSize(10.0);
    
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
       glVertex2f(120.0,295.0);
       glVertex2f(120.0,200.0);
       glVertex2f(180.0,200.0);
       glVertex2f(180.0,295.0);
    glEnd();
    
     glLineWidth(5.0);
       glBegin(GL_LINES);
       
       glColor3f(0,0,0);
          glVertex2f(120.0,280.0);
          glVertex2f(180.0,280.0);
       //glLineWidth(1.0);
       glEnd();
       
       glBegin(GL_LINES);
       glLineWidth(5.0);
       glColor3f(0,0,0);
          glVertex2f(120.0,215.0);
          glVertex2f(180.0,215.0);
       glLineWidth(1.0);
       glEnd();
       
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
          glVertex2f(150.0,265.0);
          glVertex2f(150.0,245.0);
          glVertex2f(150.0,225.0);
        glEnd();
    

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(115.0,290.0);
		glVertex2f(115.0,280.0);
		glVertex2f(80.0,210.0);
		glVertex2f(80.0,220.0);
        glEnd();


        glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(185.0,290.0);
		glVertex2f(185.0,280.0);
		glVertex2f(220.0,210.0);
		glVertex2f(220.0,220.0);
        glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(130.0,190.0);
		glVertex2f(90,90.0);
		glVertex2f(95.0,90.0);
		glVertex2f(135.0,190.0);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex2f(165.0,190.0);
		glVertex2f(205.0,90.0);
		glVertex2f(210.0,90.0);
		glVertex2f(170.0,190.0);
    glEnd();
    glLineWidth(1.0);
	glFlush();
}

void vs5()
{
  glClear(GL_COLOR_BUFFER_BIT);
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
  glBegin(GL_LINE_LOOP);
  glColor3f(1.0,0.5,0.5);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();
  
  for(int y=0;y<=165;y++)
  {
  glBegin(GL_LINES);
  glColor3f(0.5,1.0,0.1);
    glVertex2i(490.0,490.0);
    glVertex2i(60.0+y,100.0);
    glVertex2i(495.0,485.0);
  glEnd();
  }
  
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
		glVertex2f(150.0,350.0);
		glVertex2f(120.0,300.0);
		glVertex2f(180.0,300.0);
    glEnd();
    
    glPointSize(5.0);
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
                glVertex2f(145.0,325.0);
                glVertex2f(155.0,325.0);
    glEnd();
    glLineWidth(5.0);
       glBegin(GL_LINES);
          
          glVertex2f(140.0,310.0);
          glVertex2f(150.0,310.0);
          glLineWidth(1.0);
       glEnd();
    
    glPointSize(10.0);
    
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
       glVertex2f(120.0,295.0);
       glVertex2f(120.0,200.0);
       glVertex2f(180.0,200.0);
       glVertex2f(180.0,295.0);
    glEnd();
    
     glLineWidth(5.0);
       glBegin(GL_LINES);
       
       glColor3f(0,0,0);
          glVertex2f(120.0,280.0);
          glVertex2f(180.0,280.0);
       //glLineWidth(1.0);
       glEnd();
       
       glBegin(GL_LINES);
       glLineWidth(5.0);
       glColor3f(0,0,0);
          glVertex2f(120.0,215.0);
          glVertex2f(180.0,215.0);
       glLineWidth(1.0);
       glEnd();
       
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
          glVertex2f(150.0,265.0);
          glVertex2f(150.0,245.0);
          glVertex2f(150.0,225.0);
        glEnd();
    

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(115.0,290.0);
		glVertex2f(115.0,280.0);
		glVertex2f(60.0,250.0);
		glVertex2f(60.0,260.0);
        glEnd();


        glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(185.0,290.0);
		glVertex2f(185.0,280.0);
		glVertex2f(220.0,210.0);
		glVertex2f(220.0,220.0);
        glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(130.0,190.0);
		glVertex2f(90.0,90.0);
		glVertex2f(95.0,90.0);
		glVertex2f(135.0,190.0);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex2f(165.0,190.0);
		glVertex2f(165.0,90.0);
		glVertex2f(170.0,90.0);
		glVertex2f(170.0,190.0);
    glEnd();
    glLineWidth(1.0);
	glFlush();
}

void vs6()
{
  glClear(GL_COLOR_BUFFER_BIT);
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
  glBegin(GL_LINES);
  glColor3f(1.0,0.0,0.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();
  
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
		glVertex2f(150.0,350.0);
		glVertex2f(120.0,300.0);
		glVertex2f(180.0,300.0);
    glEnd();
    
    glPointSize(5.0);
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
                glVertex2f(145.0,325.0);
                glVertex2f(155.0,325.0);
    glEnd();
    glLineWidth(5.0);
       glBegin(GL_LINES);
          
          glVertex2f(140.0,310.0);
          glVertex2f(150.0,310.0);
          glLineWidth(1.0);
       glEnd();
    
    glPointSize(10.0);
    
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
       glVertex2f(120.0,295.0);
       glVertex2f(120.0,200.0);
       glVertex2f(180.0,200.0);
       glVertex2f(180.0,295.0);
    glEnd();
    
     glLineWidth(5.0);
       glBegin(GL_LINES);
       
       glColor3f(0,0,0);
          glVertex2f(120.0,280.0);
          glVertex2f(180.0,280.0);
       glEnd();
       
       glBegin(GL_LINES);
       glLineWidth(5.0);
       glColor3f(0,0,0);
          glVertex2f(120.0,215.0);
          glVertex2f(180.0,215.0);
       glLineWidth(1.0);
       glEnd();
       
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
          glVertex2f(150.0,265.0);
          glVertex2f(150.0,245.0);
          glVertex2f(150.0,225.0);
        glEnd();
    

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(115.0,290.0);
		glVertex2f(115.0,280.0);
		glVertex2f(80.0,210.0);
		glVertex2f(80.0,220.0);
        glEnd();


        glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(185.0,290.0);
		glVertex2f(185.0,280.0);
		glVertex2f(240.0,250.0);
		glVertex2f(240.0,260.0);
        glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(130.0,190.0);
		glVertex2f(130,90.0);
		glVertex2f(135.0,90.0);
		glVertex2f(135.0,190.0);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex2f(165.0,190.0);
		glVertex2f(205.0,90.0);
		glVertex2f(210.0,90.0);
		glVertex2f(170.0,190.0);
    glEnd();
    glLineWidth(1.0);
	glFlush();
}

void vs7()
{
  glClear(GL_COLOR_BUFFER_BIT);
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
  glBegin(GL_LINES);
  glColor3f(0.5,1.0,0.5);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();
  
  for(int y=0;y<=165;y++)
  {
  glBegin(GL_LINES);
  glColor3f(1.0,0.5,1.0);
    glVertex2i(490.0,490.0);
    glVertex2i(60.0+y,100.0);
    glVertex2i(495.0,485.0);
  glEnd();
  }
  
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
		glVertex2f(150.0,350.0);
		glVertex2f(120.0,300.0);
		glVertex2f(180.0,300.0);
    glEnd();
    
    glPointSize(5.0);
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
                glVertex2f(145.0,325.0);
                glVertex2f(155.0,325.0);
    glEnd();
    glLineWidth(5.0);
       glBegin(GL_LINES);
          
          glVertex2f(140.0,310.0);
          glVertex2f(150.0,310.0);
          glLineWidth(1.0);
       glEnd();
    
    glPointSize(10.0);
    
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
       glVertex2f(120.0,295.0);
       glVertex2f(120.0,200.0);
       glVertex2f(180.0,200.0);
       glVertex2f(180.0,295.0);
    glEnd();
    
     glLineWidth(5.0);
       glBegin(GL_LINES);
       
       glColor3f(0,0,0);
          glVertex2f(120.0,280.0);
          glVertex2f(180.0,280.0);
       //glLineWidth(1.0);
       glEnd();
       
       glBegin(GL_LINES);
       glLineWidth(5.0);
       glColor3f(0,0,0);
          glVertex2f(120.0,215.0);
          glVertex2f(180.0,215.0);
       glLineWidth(1.0);
       glEnd();
       
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
          glVertex2f(150.0,265.0);
          glVertex2f(150.0,245.0);
          glVertex2f(150.0,225.0);
        glEnd();
    

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(115.0,290.0);
		glVertex2f(115.0,280.0);
		glVertex2f(60.0,250.0);
		glVertex2f(60.0,260.0);
        glEnd();


        glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(185.0,290.0);
		glVertex2f(185.0,280.0);
		glVertex2f(240.0,250.0);
		glVertex2f(240.0,260.0);
        glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(130.0,190.0);
		glVertex2f(90.0,90.0);
		glVertex2f(95.0,90.0);
		glVertex2f(135.0,190.0);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex2f(165.0,190.0);
		glVertex2f(205.0,90.0);
		glVertex2f(210.0,90.0);
		glVertex2f(170.0,190.0);
    glEnd();
    glLineWidth(1.0);
	glFlush();
}

void vs8()
{
   glClear(GL_COLOR_BUFFER_BIT);
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
  glBegin(GL_LINE_STRIP);
  glColor3f(1.0,0.0,1.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();
  
  for(int y=0;y<=165;y++)
  {
  glBegin(GL_LINES);
  glColor3f(1.0,0.5,0.0);
    glVertex2i(490.0,490.0);
    glVertex2i(60.0+y,100.0);
    glVertex2i(495.0,485.0);
  glEnd();
  }
  
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
		glVertex2f(150.0,350.0);
		glVertex2f(120.0,300.0);
		glVertex2f(180.0,300.0);
    glEnd();
    
    glPointSize(4.0);
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
                glVertex2f(145.0,325.0);
    glEnd();
    
    glPointSize(5.0);
       glBegin(GL_POINTS);
       glColor3f(0,0,0); 
          glVertex2f(155.0,325.0);
       glEnd();
    
       glLineWidth(5.0);
       glBegin(GL_LINES);
          glVertex2f(140.0,310.0);
          glVertex2f(150.0,310.0);
          glLineWidth(1.0);
       glEnd();
    
    glPointSize(10.0);
    
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
       glVertex2f(120.0,295.0);
       glVertex2f(100.0,200.0);
       glVertex2f(160.0,200.0);
       glVertex2f(180.0,295.0);
    glEnd();
    
     glLineWidth(5.0);
       glBegin(GL_LINES);
       
       glColor3f(0,0,0);
          glVertex2f(100.0,280.0);
          glVertex2f(180.0,280.0);
       //glLineWidth(1.0);
       glEnd();
       
       glBegin(GL_LINES);
       glLineWidth(5.0);
       glColor3f(0,0,0);
          glVertex2f(100.0,215.0);
          glVertex2f(180.0,215.0);
       glLineWidth(1.0);
       glEnd();
       
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
          glVertex2f(150.0,265.0);
          glVertex2f(140.0,245.0);
          glVertex2f(130.0,225.0);
        glEnd();
    

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(115.0,290.0);
		glVertex2f(115.0,280.0);
		glVertex2f(60.0,250.0);
		glVertex2f(60.0,260.0);
        glEnd();


        glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(185.0,290.0);
		glVertex2f(185.0,280.0);
		glVertex2f(220.0,210.0);
		glVertex2f(220.0,220.0);
        glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(110.0,190.0);
		glVertex2f(70,90.0);
		glVertex2f(75.0,90.0);
		glVertex2f(115.0,190.0);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex2f(165.0,190.0);
		glVertex2f(165.0,90.0);
		glVertex2f(170.0,90.0);
		glVertex2f(170.0,190.0);
    glEnd();
    glLineWidth(1.0);
	glFlush();
}

void vs9()
{
   glClear(GL_COLOR_BUFFER_BIT);
    i=rand()%490;
    j=rand()%490;
    k=rand()%490;
    l=rand()%490;
  glBegin(GL_POINTS);
  glColor3f(1.0,0.0,0.0);
    glVertex2i(i,j);
    glVertex2i(k,l);
    glVertex2i(j,i);
    glVertex2i(l,k);
  glEnd();
  
  for(int y=0;y<=165;y++)
  {
  glBegin(GL_LINES);
  glColor3f(0.0,0.5,1.0);
    glVertex2i(490.0,490.0);
    glVertex2i(60.0+y,100.0);
    glVertex2i(495.0,485.0);
  glEnd();
  }
  
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,1);
		glVertex2f(150.0,350.0);
		glVertex2f(120.0,300.0);
		glVertex2f(180.0,300.0);
    glEnd();
    
    glPointSize(5.0);
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
                glVertex2f(145.0,325.0);
    glEnd();
    
    glPointSize(4.0);
       glBegin(GL_POINTS);
       glColor3f(0,0,0); 
          glVertex2f(155.0,325.0);
       glEnd();
    
       glLineWidth(5.0);
       glBegin(GL_LINES);
          glVertex2f(150.0,310.0);
          glVertex2f(160.0,310.0);
          glLineWidth(1.0);
       glEnd();
    
    glPointSize(10.0);
    
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
       glVertex2f(120.0,295.0);
       glVertex2f(140.0,200.0);
       glVertex2f(200.0,200.0);
       glVertex2f(180.0,295.0);
    glEnd();
    
     glLineWidth(5.0);
       glBegin(GL_LINES);
       
       glColor3f(0,0,0);
          glVertex2f(100.0,280.0);
          glVertex2f(200.0,280.0);
       //glLineWidth(1.0);
       glEnd();
       
       glBegin(GL_LINES);
       glLineWidth(5.0);
       glColor3f(0,0,0);
          glVertex2f(100.0,215.0);
          glVertex2f(197.0,215.0);
       glLineWidth(1.0);
       glEnd();
       
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
          glVertex2f(150.0,265.0);
          glVertex2f(160.0,245.0);
          glVertex2f(170.0,225.0);
        glEnd();
    

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(115.0,290.0);
		glVertex2f(115.0,280.0);
		glVertex2f(80.0,210.0);
		glVertex2f(80.0,220.0);
        glEnd();


        glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(185.0,290.0);
		glVertex2f(185.0,280.0);
		glVertex2f(240.0,250.0);
		glVertex2f(240.0,260.0);
        glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	        glVertex2f(130.0,190.0);
		glVertex2f(130,90.0);
		glVertex2f(135.0,90.0);
		glVertex2f(135.0,190.0);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex2f(185.0,190.0);
		glVertex2f(205.0,90.0);
		glVertex2f(210.0,90.0);
		glVertex2f(190.0,190.0);
    glEnd();
    glLineWidth(1.0);
	glFlush();
}

void myspecial(int key,int x,int y)
{
   switch(key)
   {
     case GLUT_KEY_UP:    count=1;
                          break;
     
     case GLUT_KEY_RIGHT:  count=3;
                           break;
                         
     case GLUT_KEY_LEFT:   count=2;
                           break;
     
     case GLUT_KEY_DOWN:   count=4;
                           break;
     
                                             
   };
}

void mykey(unsigned char k,int x,int y)
{
  switch(k)
  {
     case 'a'          :   count=5;
                           break;
     
     case 's'          :   count=6;
                           break;
     
     case 'b'          :   count=7;
                           break;
     
     case 'v'          :   count=7;
                           break;
     
     case 'h'          :   count=8;
                           break;
                           
     case 'j'          :   count=9;
                           break;
    
     case 'q'          :   count=-1;
                           break;
                           
     case 27          :   exit(0);

  };
}

void myinit()
{
  glClearColor(0,0,0,1);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0,499.0,0,499.0);
}


int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(1000,1000);
 glutCreateWindow("DANCING STICK MAN");
 glutDisplayFunc(display);
 glutSpecialFunc(myspecial);
 glutKeyboardFunc(mykey);
 myinit();
 glutMainLoop();
 return 0;
}


