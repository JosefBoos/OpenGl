//* http://www.codebind.com/linux-tutorials/install-opengl-ubuntu-linux/
//* http://www.lighthouse3d.com/tutorials/glut-tutorial/initialization/
//* https://grafika.me
//* https://www.youtube.com/watch?v=41oLXr6jO54

#include <GL/glut.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

// Colors
float red=1.0f, blue=1.0f, green=1.0f;

float angle = 0.0f;
float lx=0.0f, lz=-1.0f;
float x=0.0f, z=5.0f;

void drawSnowMan()
{
    glColor3f(1.0f, 1.0f, 1.0f);

    //Draw body
    glTranslatef(0.0f, 0.75f, 0.0f);
    glutSolidSphere(0.75f, 20.0f, 20.0f);

    //Draw head
    glTranslatef(0.0f, 1.0f, 0.0f);
    glutSolidSphere(0.25f, 20.0f, 20.0f);

    //Draw eyes
    glPushMatrix();
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(0.05f, 0.10f, 0.18f);
    glutSolidSphere(0.05f, 10.0f, 10.0f);
    glTranslatef(-0.1f, 0.0f, 0.0f);
    glutSolidSphere(0.05f, 10.0f, 10.0f);
    glPopMatrix();

    //Draw nose
    glColor3f(1.0f, 0.5f, 0.5f);
    glutSolidCone(0.08f, 0.5f, 10.0f, 2.0f);
}

//* https://youtu.be/elE__Nouv54?si=1VjbNm1xZ1uomHKf
void drawText(const char *text, int lenght, int x, int y)
{
    glMatrixMode(GL_PROJECTION);
    double *matrix = new double[16];
    glGetDoublev(GL_PROJECTION_MATRIX, matrix);
    glLoadIdentity();
    glOrtho(0, 800, 0, 600, -5, 5);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for (int i=0; i<lenght; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, (int)text[i]);
    }
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glLoadMatrixd(matrix);
    glMatrixMode(GL_MODELVIEW);
}

void changeSize(int w, int h)
{
    // Prevent a divide by zero, when window is too short
    // (you cant make a window of zero width).
    if (h == 0)
        h = 1;
    float ratio = 1.0* w / h;

    // Use the Projection Matrix
    glMatrixMode(GL_PROJECTION);

    // Reset Matrix
    glLoadIdentity();

    // Set the viewport to be the entire window
    glViewport(0, 0, w, h);

    // Set the correct perspective.
    gluPerspective(45,ratio,1,1000);

    // Get Back to the Modelview
    glMatrixMode(GL_MODELVIEW);
}

void renderScene(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // Reset transformation
    glLoadIdentity();

    //* http://www.lighthouse3d.com/tutorials/glut-tutorial/animation/
    //* https://grafika.me/node/129

    gluLookAt(  x, 1.0f, z,
                x+lx, 1.0f, z+lz,
                0.0f, 1.0f, 0.0f);

    glRotatef(angle, 0.0f, 1.0f, 0.0f);

    glColor3f(red,green,blue);

    glBegin(GL_QUADS);
        glVertex3f(-100.0f, 0.0f, -100.0);
        glVertex3f(-100.0f, 0.0f, 100.0f);
        glVertex3f(100.0f, 0.0f, 100.0f);
        glVertex3f(100.0f, 0.0f, -100.0f);
    glEnd();

    for(int i = -3; i < 3; i++)
        for(int j=-3; j < 3; j++)
        {
            glPushMatrix();
            glTranslatef(i*10.0f, 0.0f, j * 10.0f);
            drawSnowMan();
            glPopMatrix();
        }


    angle+=0.1f;

    //Show text in window
    std::string text;
    text = "Press F1, F2, F3 to change color";
    drawText(text.data(), text.size(), 50, 550);

    glutSwapBuffers();
}

//* https://grafika.me/node/130
//* http://www.lighthouse3d.com/tutorials/glut-tutorial/keyboard/

void processSpesialKeys(int key, int x, int y)
{

    float fraction = 0.1f;

    switch(key) {

        //*For change colors
        // Change the color to red
        case GLUT_KEY_F1:
            red = 1.0;
            green = 0.0;
            blue = 0.0;
            break;
        // Change the color to green
        case GLUT_KEY_F2:
            red = 0.0;
            green = 1.0;
            blue = 0.0;
            break;
        // Change the color to blue
        case GLUT_KEY_F3:
            red = 0.0;
            green = 0.0;
            blue = 1.0;
            break;

        case GLUT_KEY_LEFT:
            angle -= 0.01f;
            lx = sin(angle);
            lx = -cos(angle);
            break;
        
        case GLUT_KEY_RIGHT:
            angle += 0.01f;
            lx = sin(angle);
            lz = -cos(angle);
            break;

        case GLUT_KEY_UP:
            x += lx * fraction;
            z += lz * fraction;
            break;
        
        case GLUT_KEY_DOWN:
            x -= lx * fraction;
            z -= lz * fraction;
            break;
    }
}

int main(int argc, char **argv)
{
    // Init GLUT and create window
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(320,320);
    glutCreateWindow("OpenGL Window");

    // register callbacks
    glutDisplayFunc(renderScene);
    glutReshapeFunc(changeSize);
    glutIdleFunc(renderScene);

    glutSpecialFunc(processSpesialKeys);

    // enter GLUT event processing cycle
    glutMainLoop();

    return 1;
}



