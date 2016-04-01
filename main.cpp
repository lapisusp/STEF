/* 
 * File:   main.cpp
 * Author: rafael
 *
 * Created on 13 de Novembro de 2013, 20:23
 */

#include <stdlib.h>
#include <GL/glut.h>
#include "Medidas.h"
#include "Saida.h"
#include "Desenha.h"
#include "Face.h"
#include "Antropometria.h"
#include "Animacao.h"
#include "Entrada.h"

using namespace std;

//GLint largura=650, altura=650;
GLint largura=900, altura=900;

GLint k=0;
int exp=Face::expressaoNeutra;
Animacao* a;
void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	Face* face = new Face(altura, largura, Antropometria::caucasiano);
	face->desenhaFace(exp, 1.0);
	a = new Animacao(altura, largura, Antropometria::caucasiano);
	a->neutra();
	glFlush();
	glutSwapBuffers();
}


void GerenciaTeclado(unsigned char key, int x, int y)
{
	if(key=='s')
	{
		a->satisfacao();
	}
	else if(key=='t')
	{
		a->tristeza();
	}
	else if(key=='u')
	{
		a->surpresa();
	}
	else if(key=='m')
	{
		a->medo();
	}
	else if(key=='a')
	{
		a->aversao();
	}
	else if(key=='r')
	{
		a->raiva();
	}
	else if(key=='d')
	{
		a->desprezo();
	}
	else if(key=='n')
	{
		a->neutra();
	}
	else if(key=='e')
	{
		glClear(GL_COLOR_BUFFER_BIT);
		Face* face = new Face(altura, largura, Antropometria::afro);
		face->desenhaFace(exp, 1.0);
		a = new Animacao(altura, largura, Antropometria::afro);
		a->neutra();
		glFlush();
		glutSwapBuffers();
	}
	else if(key=='p')
	{
		Entrada e;
		e.arquivo();
	}
}

void GerenciaMouse(int button, int state, int x, int y)
{
	Saida s;
    if (button == GLUT_RIGHT_BUTTON)
         if (state == GLUT_DOWN) {
               s.salvarImagem("outa.jpg");
         }
    glutPostRedisplay();
}

void setup(void){
	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();
	glOrtho( -(largura/2), (largura/2), altura, 0, 1.0, -1.0 );

	//Initialize Modelview Matrix
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();
	glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main(int argc, char** argv){

/*  glutInit(&argc, argv);

  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  glutInitWindowSize(largura, altura);
  glutInitWindowPosition(100, 10);
  glutCreateWindow(argv[0]);
  setup();
  glutKeyboardFunc(GerenciaTeclado);
  glutMouseFunc(GerenciaMouse);
  glutDisplayFunc(display);
  display();
  glutMainLoop();*/

	Entrada e;
	e.arquivo();
  return 0;
}


