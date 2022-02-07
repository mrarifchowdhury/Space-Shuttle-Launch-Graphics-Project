#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>

#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

#define PI 3.1416



// for bus
static GLfloat ml = 1.0;
static GLfloat rl = 0.27;
static GLfloat ml1 = 1.0;
static GLfloat gate = 0.27;



GLint i;
GLfloat cx=0,str=500.0,mn=500.0;
GLfloat sr=0.0,sg=0.749,sb=1.0;

void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}


void innerpartofholder()
{
	glBegin(GL_QUADS);              //1st inner part of holder
      glColor3ub(255,255,255);
      glVertex2f(-0.35f,-0.45f);
      glVertex2f(-0.28f, -0.45f);    // x, y
      glVertex2f( -0.28f, -0.05f);
      glVertex2f( -0.35f,  -0.05f);

  glEnd();
}


void joint()
{
glBegin(GL_QUADS);              // joint
      glColor3ub(255,255,255);
      glVertex2f( -0.54f, 0.16f);
      glVertex2f(-0.38f,0.16f);
      glVertex2f(-0.38f,0.18f);
      glVertex2f( -0.54f, 0.18f);

  glEnd();




glBegin(GL_QUADS);              //joint
      glColor3ub(255,255,255);
      glVertex2f( -0.54f, 0.15f);
      glVertex2f(-0.45f,0.15f);
      glVertex2f(-0.45f,0.19f);
      glVertex2f( -0.54f, 0.19f);

  glEnd();
}



void rocketholder()
{
 glBegin(GL_QUADS);              // rocket holder
      glColor3ub(176, 164, 138);
      glVertex2f(-0.38f,-0.70f);
      glVertex2f(-0.25f, -0.70f);    // x, y
      glVertex2f( -0.25f, 0.40f);
      glVertex2f( -0.38f,  0.40f);

  glEnd();
}



void rocket()
{
      glBegin(GL_QUADS);              // 1st quad
      glColor3ub(204,229,255);
      glVertex2f(-0.64f,-0.30f);
      glVertex2f(-0.49f, -0.30f);    // x, y
      glVertex2f( -0.49f, -0.12f);
      glVertex2f( -0.64f,  -0.12f);

   glEnd();

 glBegin(GL_QUADS);              // 2nd quad
      glColor3ub(204,255,255);
      glVertex2f(-0.63f,-0.12f);
      glVertex2f(-0.50f, -0.12f);    // x, y
      glVertex2f( -0.50f, 0.10f);
      glVertex2f( -0.63f,  0.10f);

   glEnd();


 glBegin(GL_QUADS);              // 2nd quads
      glColor3ub(204,255,255);
      glVertex2f( -0.62f,  0.10f);
      glVertex2f( -0.51f, 0.10f);
      glVertex2f(-0.51f, 0.30f);
      glVertex2f(-0.62f,0.30f);
        // x, y


   glEnd();





 glBegin(GL_QUADS);              // 3rd quads
      glColor3ub(201,255,255); // ash color
      glVertex2f(-0.61f,0.30f);
      glVertex2f(-0.52f, 0.30f);
      glVertex2f( -0.52f, 0.60f);
      glVertex2f( -0.61f,  0.60f);
        // x, y

   glEnd();






  glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3ub(6,255,64); // green matha color
      glVertex2f( -0.61f,  0.60f);
      glVertex2f( -0.52f, 0.60f);   // x, y
      glVertex2f( -0.57f, 0.80f);
   glEnd();

 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3ub(201,255,255); // ash color
      glVertex2f( -0.61f, 0.60f);
      glVertex2f( -0.52f, 0.60f);
      glVertex2f( -0.54f, 0.68f);
      glVertex2f( -0.594f, 0.68f);
        // x, y

   glEnd();



 glBegin(GL_TRIANGLES);              // left pakha
      glColor3ub(201,255,255);
      glVertex2f(-0.72f,-0.30f);
      glVertex2f(-0.64f,-0.30f);
      glVertex2f( -0.64f,  -0.10f);

   glEnd();



 glBegin(GL_TRIANGLES);              // right pakha
      glColor3ub(201,255,255);
      glVertex2f( -0.49f, -0.10f);
      glVertex2f(-0.49f, -0.30f);
      glVertex2f(-0.42f, -0.30f);

   glEnd();


   glBegin(GL_QUADS);              // underthraster - 1
      glColor3ub(102,0,255);
      glVertex2f(-0.54f,-0.30f);
      glVertex2f(-0.49f, -0.30f);    // x, y
      glVertex2f(-0.50f, -0.35f);
      glVertex2f(-0.53f, -0.35f);

 glEnd();


 glBegin(GL_QUADS);              // underthraster - 2
      glColor3ub(102,0,255);
      glVertex2f(-0.59f,-0.30f);
      glVertex2f(-0.54f, -0.30f);    // x, y
      glVertex2f(-0.55f, -0.35f);
      glVertex2f(-0.58f, -0.35f);

 glEnd();


  glBegin(GL_QUADS);              // underthraster - 3
      glColor3ub(102,0,255);
      glVertex2f(-0.64f,-0.30f);
      glVertex2f(-0.59f, -0.30f);    // x, y
      glVertex2f(-0.60f, -0.35f);
      glVertex2f(-0.63f, -0.35f);

 glEnd();

///////////////-----------------------------------------Start push and pop matrix in rocket-----------------------------------------


///////////////-----------------------------------------Start push and pop matrix in rocket 1 circle -----------------------------------------

   glPushMatrix();
        glColor3ub(176, 164, 138);
        glTranslatef(-0.565,0.6,0);
        glScalef(0.08,0.15,0.0);
        circle(.22);
        glPopMatrix();

///////////////-----------------------------------------Finish push and pop matrix in  rocket 1 circle -----------------------------------------


}

void bridge()
{
    glBegin(GL_QUADS);              // bridge
      glColor3ub(192,192,192); // ash color
      glVertex2f(-0.64f, 0.28f);    // x, y
      glVertex2f( -0.44f, 0.28f);
      glVertex2f(-0.44f, 0.24f);
      glVertex2f( -0.64f, 0.24f);

   glEnd();


glBegin(GL_QUADS);              // bridge
      glColor3ub(102,255,255); //
      glVertex2f(-0.63f, 0.27f);    // x, y
      glVertex2f( -0.61f, 0.27f);
      glVertex2f(-0.61f, 0.25f);
      glVertex2f( -0.63f, 0.25f);

   glEnd();



glBegin(GL_QUADS);              // bridge
      glColor3ub(102,255,255); //
      glVertex2f(-0.60f, 0.27f);    // x, y
      glVertex2f( -0.58f, 0.27f);
      glVertex2f(-0.58f, 0.25f);
      glVertex2f( -0.60f, 0.25f);

   glEnd();


glBegin(GL_QUADS);              // bridge
      glColor3ub(102,255,255); //
      glVertex2f(-0.57f, 0.27f);    // x, y
      glVertex2f( -0.55f, 0.27f);
      glVertex2f(-0.55f, 0.25f);
      glVertex2f( -0.57f, 0.25f);

   glEnd();


   glBegin(GL_QUADS);              // bridge
      glColor3ub(102,255,255); //
      glVertex2f(-0.54f, 0.27f);    // x, y
      glVertex2f( -0.52f, 0.27f);
      glVertex2f(-0.52f, 0.25f);
      glVertex2f( -0.54f, 0.25f);

   glEnd();



   glBegin(GL_QUADS);              // bridge
      glColor3ub(102,255,255); //
      glVertex2f(-0.51f, 0.27f);    // x, y
      glVertex2f( -0.49f, 0.27f);
      glVertex2f(-0.49f, 0.25f);
      glVertex2f( -0.51f, 0.25f);

   glEnd();


   glBegin(GL_QUADS);              // bridge
      glColor3ub(102,255,255); //
      glVertex2f(-0.48f, 0.27f);    // x, y
      glVertex2f( -0.46f, 0.27f);
      glVertex2f(-0.46f, 0.25f);
      glVertex2f( -0.48f, 0.25f);

   glEnd();
}


void bus()
{
     glBegin(GL_QUADS);
      glColor3ub(222,225,18);  //yellow
      glVertex2f(0.40f, -0.60f);
      glVertex2f(0.80f, -0.60f);
      glVertex2f(0.80f, -0.30f);
      glVertex2f(0.40f, -0.30f);

  glEnd();
}

void busdorja()
{
     glBegin(GL_QUADS);

      glColor3ub(0,0,0);
      glVertex2f(0.40f, -0.60f);
      glVertex2f(0.80f, -0.60f);    // x, y
      glVertex2f(0.80f, -0.30f);
      glVertex2f(0.40f, -0.30f);

  glEnd();
}

void busdorja1()
{
     glBegin(GL_QUADS);
      glColor3ub(222,225,18);  //yellow
      glVertex2f(0.40f, -0.60f);
      glVertex2f(0.80f, -0.60f);    // x, y
      glVertex2f(0.80f, -0.30f);
      glVertex2f(0.40f, -0.30f);

  glEnd();
}
void busjanala()
{
     glBegin(GL_QUADS);
      glColor3ub(222,225,18);  //yellow
      glVertex2f(0.40f, -0.60f);
      glVertex2f(0.80f, -0.60f);    // x, y
      glVertex2f(0.80f, -0.30f);
      glVertex2f(0.40f, -0.30f);

  glEnd();
}

void busfull()
{

///////////////-----------------------------------------Start push and pop matrix in bus-----------------------------------------

        glPushMatrix();
        glTranslatef(0.10,-0.13,0);
        glScalef(0.9,0.9,0.0);
        bus();
        glPopMatrix();

///////////////-----------------------------------------Finish push and pop matrix in bus-----------------------------------------


///////////////-----------------------------------------Start push and pop matrix in bus upper part -----------------------------------------

        glPushMatrix();

        glColor3ub(222,225,18);
        glTranslatef(0.64,-0.40,0);
        glScalef(0.80,0.25,0.0);
        circle(.22);
        glPopMatrix();

///////////////-----------------------------------------Finish push and pop matrix in bus upper part -----------------------------------------

///////////////-----------------------------------------Start push and pop matrix in bus 1st chaka -----------------------------------------
        glPushMatrix();
        glColor3f(0.0f, 0.0f, 0.0f);
        glTranslatef(0.540,-0.665,0);
        glScalef(0.20,0.30,0.0);
        circle(.20);
        glPopMatrix();
///////////////-----------------------------------------Finish push and pop matrix in  bus 1st chaka -----------------------------------------

///////////////-----------------------------------------Start push and pop matrix in bus 2nd chaka -----------------------------------------
        glPushMatrix();
        glColor3f(0.0f, 0.0f, 0.0f);
        glTranslatef(0.725,-0.665,0);
        glScalef(0.20,0.30,0.0);
        circle(.20);
        glPopMatrix();
///////////////-----------------------------------------Finish push and pop matrix in  bus 2nd chaka -----------------------------------------

///////////////-----------------------------------------Start push and pop matrix in bus 1st chaka -----------------------------------------
        glPushMatrix();
      glColor3ub(222,225,18);
        glTranslatef(0.540,-0.665,0);
        glScalef(0.20,0.30,0.0);
        circle(.10);
        glPopMatrix();
///////////////-----------------------------------------Finish push and pop matrix in  bus 1st chaka -----------------------------------------

///////////////-----------------------------------------Start push and pop matrix in bus 2nd chaka -----------------------------------------
        glPushMatrix();
      glColor3ub(222,225,18);
        glTranslatef(0.725,-0.665,0);
        glScalef(0.20,0.30,0.0);
        circle(.10);
        glPopMatrix();
///////////////-----------------------------------------Finish push and pop matrix in  bus 2nd chaka -----------------------------------------

///////////////-----------------------------------------Start push and pop matrix in bus 1st chaka -----------------------------------------
        glPushMatrix();
        glColor3ub(123,136,125);
        glTranslatef(0.540,-0.665,0);
        glScalef(0.20,0.30,0.0);
        circle(.02);
        glPopMatrix();
///////////////-----------------------------------------Finish push and pop matrix in  bus 1st chaka -----------------------------------------

///////////////-----------------------------------------Start push and pop matrix in bus 2nd chaka -----------------------------------------
        glPushMatrix();
        glColor3ub(123,136,125);
        glTranslatef(0.725,-0.665,0);
        glScalef(0.20,0.30,0.0);
        circle(.02);
        glPopMatrix();
///////////////-----------------------------------------Finish push and pop matrix in  bus 2nd chaka -----------------------------------------

///////////////-----------------------------------------Start push and pop matrix in busdorja-----------------------------------------

        glPushMatrix();
        glTranslatef(0.53,-0.17,0);
        glScalef(0.16,0.8,0.0);
        busdorja();
        glPopMatrix();

         glPushMatrix();
        glTranslatef(0.579,-0.1771,0);
        glScalef(0.05,0.78,0.0);
        busdorja1();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.609,-0.1771,0);
        glScalef(0.05,0.78,0.0);
        busdorja1();
        glPopMatrix();

///////////////-----------------------------------------Finish push and pop matrix in busdorja-----------------------------------------




}


void man()
{

glBegin(GL_QUADS);              // astro gola
      glColor3ub(192,195,255);
      glVertex2f(0.37f,-0.20f);
      glVertex2f(0.43f, -0.20f);    // x, y
      glVertex2f(0.43f, -0.10f);
      glVertex2f(0.37f,  -0.10f);

 glEnd();


 glBegin(GL_QUADS);              // astro body
      glColor3ub(192,64,255);
      glVertex2f(0.33f,-0.50f);
      glVertex2f(0.44f, -0.50f);    // x, y
      glVertex2f(0.44f, -0.20f);
      glVertex2f(0.33f, -0.20f);

 glEnd();


 glBegin(GL_QUADS);              // astro leg
      glColor3ub(255,255,255);
      glVertex2f(0.37f,-0.70f);
      glVertex2f(0.42f, -0.70f);    // x, y
      glVertex2f(0.42f, -0.50f);
      glVertex2f(0.37f, -0.50f);

 glEnd();


 glBegin(GL_QUADS);              // astro footpata
      glColor3ub(0,0,0);
      glVertex2f(0.35f,-0.65f);
      glVertex2f(0.34f, -0.70f);
      glVertex2f(0.37f, -0.70f);
      glVertex2f(0.37f,-0.65f);    // x, y


 glEnd();


glBegin(GL_QUADS);              // astro oxybag
      glColor3ub(192,64,25);
      glVertex2f(0.445f,-0.42f);
      glVertex2f(0.50f, -0.42f);    // x, y
      glVertex2f(0.50f, -0.15f);
      glVertex2f(0.445f, -0.15f);

 glEnd();


glBegin(GL_QUADS);              // astro hand-1
      glColor3ub(192,64,25);
      glVertex2f(0.33f,-0.40f);
      glVertex2f(0.44f, -0.25f);    // x, y
      glVertex2f(0.44f, -0.20f);
      glVertex2f(0.33f, -0.35f);

 glEnd();



glBegin(GL_QUADS);              // astro hand-2
      glColor3ub(192,64,25);
      glVertex2f(0.26f,-0.41f);
      glVertex2f(0.33f, -0.40f);    // x, y
      glVertex2f(0.33f, -0.35f);
      glVertex2f(0.26f, -0.37f);

 glEnd();

///////////////-----------------------------------------Start push and pop matrix in astro helmet -----------------------------------------

        glPushMatrix();

        glColor3ub(229,219,211);
        glTranslatef(0.40,-0.05,0);
        glScalef(0.30,0.45,0.0);
        circle(.22);
        glPopMatrix();

///////////////-----------------------------------------Finish push and pop matrix in astro helmet -----------------------------------------


}




void lift ()
{

glBegin(GL_QUADS);                   // lift
      glColor3ub(209,57,24);

      glVertex2f( -0.36f, 0.38f);
      glVertex2f( -0.45f, 0.38f);
      glVertex2f( -0.45f, 0.18f);
      glVertex2f( -0.36f, 0.18f);

   glEnd();





glBegin(GL_QUADS);                 // lift
      glColor3ub(255,255,255);

      glVertex2f( -0.37f, 0.37f);
      glVertex2f( -0.44f, 0.37f);
      glVertex2f( -0.44f, 0.19f);
      glVertex2f( -0.37f, 0.19f);

   glEnd();


glBegin(GL_QUADS);                 // lift
      glColor3ub(209,57,24);

      glVertex2f( -0.38f, 0.35f);
      glVertex2f( -0.43f, 0.35f);
      glVertex2f( -0.43f, 0.25f);
      glVertex2f( -0.38f, 0.25f);

   glEnd();

}






void display() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
   glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

   // Draw a Red 1x1 Square centered at origin



   glBegin(GL_QUADS);              // road
      glColor3ub(192,192,192); // ash color
      glVertex2f(-1.0f, -0.70f);    // x, y
      glVertex2f( -1.0f,  -1.0f);
      glVertex2f(1.0f,-1.0f);
      glVertex2f( 1.0f, -0.70f);

   glEnd();



 glBegin(GL_QUADS);              // background
      glColor3ub(17, 221, 249);
      glVertex2f(-1.0f,1.0f);
      glVertex2f(-1.0f, -0.70f);    // x, y
      glVertex2f( 1.0f, -0.70f);
      glVertex2f( 1.0f,  1.0f);

 glEnd();



        //------------------------------------SUN--------------------------------------
        glPushMatrix();
        glColor3ub(243, 131, 20);
        glTranslatef(-0.85,0.85,0);
        glScalef(0.17,0.3,0.0);
        circle(.3);
        glPopMatrix();
         //------------------------------------SUN--------------------------------------



        //----------------------------------CLOUD LEFT----------------------------------
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f); //white
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(-0.23,0.88,0);
        glScalef(0.11,0.2,0.0);
        circle(.3);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(-0.28,0.88,0);
        glScalef(0.11,0.2,0.0);
        circle(.25);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(-0.25,0.82,0);
        glScalef(0.11,0.2,0.0);
        circle(.3);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(-0.21,0.82,0);
        glScalef(0.11,0.2,0.0);
        circle(.2);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(-0.19,0.88,0);
        glScalef(0.11,0.2,0.0);
        circle(.25);
        glPopMatrix();


        //----------------------------------END CLOUD LEFT----------------------------------



        //----------------------------------CLOUD MIDDLE-------------------------------
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f); //white
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(0.23,0.88,0);
        glScalef(0.11,0.2,0.0);
        circle(.3);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(0.28,0.88,0);
        glScalef(0.11,0.2,0.0);
        circle(.28);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(0.25,0.82,0);
        glScalef(0.11,0.2,0.0);
        circle(.25);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(0.21,0.82,0);
        glScalef(0.11,0.2,0.0);
        circle(.25);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(0.19,0.88,0);
        glScalef(0.11,0.2,0.0);
        circle(.2);
        glPopMatrix();

        //---------------------------------- END CLOUD MIDDLE-------------------------------




        //----------------------------------CLOUD RIGHT-------------------------------

        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f); //white
        glColor3f(0.96f, 0.96f, 0.96f);  // off white
        glTranslatef(0.53,0.88,0);
        glScalef(0.11,0.2,0.0);
        circle(.3);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(0.58,0.88,0);
        glScalef(0.11,0.2,0.0);
        circle(.28);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(0.55,0.82,0);
        glScalef(0.11,0.2,0.0);
        circle(.25);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);
        glTranslatef(0.51,0.82,0);
        glScalef(0.11,0.2,0.0);
        circle(.21);
        glPopMatrix();

        //  CLOUD
        glPushMatrix();
        glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(0.96f, 0.96f, 0.96f);

        glTranslatef(0.49,0.88,0);
        glScalef(0.11,0.2,0.0);
        circle(.2);
        glPopMatrix();

  //----------------------------------END CLOUD RIGHT-------------------------------






  //----------------------------------Start CLOUD RIGHT-------------------------------


      glBegin(GL_QUADS);              // hill
      glColor3ub(218, 184, 113); //

      glVertex2f( -1.0f,  -0.70f);
      glVertex2f( -0.50f, -0.70f);
      glVertex2f( -0.75f, -0.0f);
      glVertex2f( -1.0f,  -0.30f);

   glEnd();

   glBegin(GL_TRIANGLES);              // hill
      glColor3ub(218, 184, 113); //

      glVertex2f( -0.75f,  -0.70f);
      glVertex2f( -0.25f, -0.70f);
      glVertex2f( -0.50f, -0.0f);


   glEnd();

   glBegin(GL_TRIANGLES);              // hill
      glColor3ub(218, 184, 113);

      glVertex2f( -0.75f,  -0.70f);
      glVertex2f( -0.0f, -0.70f);
      glVertex2f( -0.25f, -0.0f);


   glEnd();


//////////----------------------------------END CLOUD RIGHT-------------------------------






///////////////-----------------------------------------Start push & pop matrix in  rocket-----------------------------------------
        glPushMatrix();
        glTranslatef(-0.30,-0.3,0);
        glScalef(.656,0.98,0.0);
        rocket();
        glPopMatrix();

///////////////-----------------------------------------Finish  rocket-----------------------------------------



///////////////-----------------------------------------Start push and pop matrix in rocketholder-----------------------------------------

glPushMatrix();

        glTranslatef(-0.26,0.05,0);
        glScalef(.70,1.08,0.0);
        rocketholder();
        glPopMatrix();



///////////////-----------------------------------------Finish push and pop matrix in rocketholder-----------------------------------------








///////////////-----------------------------------------Start push and pop matrix in innerpartofholder-----------------------------------------

glPushMatrix();

        glTranslatef(-0.266,-0.357,0);
        glScalef(0.68,0.50,0.0);
        innerpartofholder();
        glPopMatrix();

glPushMatrix();

        glTranslatef(-0.266,-0.1,0);
        glScalef(0.68,0.50,0.0);
        innerpartofholder();
        glPopMatrix();

glPushMatrix();

        glTranslatef(-0.266,0.15,0);
        glScalef(0.68,0.50,0.0);
        innerpartofholder();
        glPopMatrix();

glPushMatrix();

        glTranslatef(-0.266,0.4,0);
        glScalef(0.68,0.50,0.0);
        innerpartofholder();
        glPopMatrix();




///////////////-----------------------------------------Finish push and pop matrix in innerpartofholder-----------------------------------------

///////////////-----------------------------------------Start push and pop matrix in joint -----------------------------------------

        glPushMatrix();
        glTranslatef(-0.22,-0.30,0);
        glScalef(.80,1.10,0.0);
        joint();
        glPopMatrix();

///////////////-----------------------------------------Finish push and pop matrix in joint -----------------------------------------


///////////////-----------------------------------------Start push and pop matrix in road bid -----------------------------------------

        glPushMatrix();
        glTranslatef(3.17,-1.06,0);
        glScalef(4.95,1.5,0.0);
        bridge();
        glPopMatrix();

///////////////-----------------------------------------Finish push and pop matrix in road bid -----------------------------------------


/////////////////-----------------------------------------Start push and pop matrix in busfull -----------------------------------------

        glPushMatrix();
        glTranslatef(rl,-0.001,0);
        glScalef(.90,1.10,0.0);
        busfull();
        glPopMatrix();

/////////////////-----------------------------------------Finish push and pop matrix in busfull -----------------------------------------


/////////////////-----------------------------------------Start push and pop matrix in man-1 -----------------------------------------
        glPushMatrix();
       glTranslatef(ml,-0.65,0);
       glScalef(.10,.20,0.0);
       man();
        glPopMatrix();

/////////////////-----------------------------------------Finish push and pop matrix in man-1 -----------------------------------------

/////////////////-----------------------------------------Start push and pop matrix in man-2 -----------------------------------------

        glPushMatrix();
       glTranslatef(ml1,-0.65,0);        glScalef(.10,.20,0.0);
       man();
        glPopMatrix();

/////////////////-----------------------------------------Finish push and pop matrix in man-2 -----------------------------------------




///////////////-----------------------------------------Start push and pop matrix in bridge -----------------------------------------

        glPushMatrix();
        glTranslatef(-0.001,0.05,0);
        glScalef(.995,.80,0.0);
        bridge();
        glPopMatrix();

///////////////-----------------------------------------Finish push and pop matrix in bridge -----------------------------------------







   glFlush();  // Render now
}



void spinDisplay()
{


        // for bus

     rl = rl - 0.0002;


	if (rl <= -0.12)
		{

                rl = -0.12;

                ml = ml - 0.0002;
                ml1 = ml1 - 0.0002;

	if (ml = 0.42)
		{






		}




    if (ml1 = 0.37)
		{


                ml1 = 0.37;

		}


		}







	glutPostRedisplay();
}


void mouse(int button, int state, int x, int y)
{
    glutIdleFunc(spinDisplay);

}





/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

   glutInitWindowSize(1366, 768);   // Set the window's initial width & height
   glutInitWindowPosition(0,0);// Position the window's initial top-left corner
   glutCreateWindow("Rocket Launching");  // Create window with the given title

   glutDisplayFunc(display);       // Register callback handler for window re-paint event

   glutMouseFunc(mouse);

   glutMainLoop();                 // Enter the event-processing loop
   return 0;
}
