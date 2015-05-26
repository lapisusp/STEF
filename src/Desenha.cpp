/*
 * Desenha.cpp
 *
 *  Created on: 25/11/2013
 *      Author: rafaeltesta
 */

#include "Desenha.h"
#include "Medidas.h"
#include "Parametrizacao.h"
#include <stdio.h>
#include <math.h>

Desenha::Desenha(GLint altura, GLint largura, GLfloat escala) {
	this->altura=altura;
	this->largura=largura;
	this->escala=escala;

	this->espessuraLinha=this->espessuraPadrao;


	glClear(GL_COLOR_BUFFER_BIT);
	nc= gluNewNurbsRenderer();
	gluNurbsProperty(nc, GLU_SAMPLING_TOLERANCE, 5.0);
	glEnable(GL_MAP1_VERTEX_3);
}

Desenha::~Desenha() {
	// TODO Auto-generated destructor stub
}

void Desenha::desenhaCurva(GLfloat pontos[][3], GLint nPontos){
	GLint order=nPontos;

	//knot vector
	GLint nNos=order*2;
	GLfloat div = nNos/2;
	GLfloat nos[nNos];//={0.0f,0.0f,0.0f,0.0f,1.0f,1.0f,1.0f,1.0f};
	for(GLint i=0; i<div; ++i)
	{
		nos[i]=0.0f;
	}
	for(GLint i=div; i<nNos; ++i)
	{
		nos[i]=1.0f;
	}



	//* parametrizacao = new Parametrizacao;
	//parametrizacao->curv_parametrize(nPontos, pontos, Parametrizacao::CLOSED, Parametrizacao::UNIFORM, nos);

	/*printf("NOS:");
	for(GLint i=0; i< nNos; ++i)
	{
		printf(" %f", nos[i]);
	}
	printf("\n");*/


	escalar(pontos, nPontos);

	glLineWidth(espessuraLinha);
    //desenha curva
    glColor3f(0.0, 0.0, 0.0);
    gluBeginCurve(nc);
    gluNurbsCurve(nc, nNos, nos, 3, &pontos[0][0], order, GL_MAP1_VERTEX_3);
    //gluNurbsCurve(nc, KnotCount, knots, stride, contrl, oreder, type)
    gluEndCurve(nc);

    //desenha pontos
    //desenhaPontos(pontos, nPontos);

    //delete parametrizacao;
}

void Desenha::desenhaPontos(GLfloat pontos[][3], GLint nPontos){
	    glPointSize(5.0);
	    glColor3f(1.0, 0.0, 0.0);

	    glBegin(GL_POINTS);

	    for (GLint i = 0; i < nPontos; i++)
	    {
	      glVertex3fv(&pontos[i][0]);
	    }
	    glEnd();
}

void Desenha::desenhaPontosAzul(GLfloat pontos[][3], GLint nPontos){
		escalar(pontos, nPontos);

		glPointSize(5.0);
	    glColor3f(0.27,	0.51, 0.70);

	    glBegin(GL_POINTS);

	    for (GLint i = 0; i < nPontos; i++)
	    {
	      glVertex3fv(&pontos[i][0]);
	    }
	    glEnd();
}

void Desenha::desenhaCirculo(GLfloat ponto[1][3], GLfloat r)
{
	escalar(ponto, 1);
	GLfloat num_segments = 1000;

	GLfloat theta = 2 * 3.1415926 / GLfloat(num_segments);
	GLfloat c = cosf(theta);//precalculate the sine and cosine
	GLfloat s = sinf(theta);
	GLfloat t;

	GLfloat x = r;//we start at angle = 0
	GLfloat y = 0;

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for(GLint ii = 0; ii < num_segments; ii++)
	{
		glVertex2f(x + ponto[0][0], y + ponto[0][1]);//output vertex

		//apply the rotation matrix
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();

	//desenha pontos
	//desenhaPontos(ponto, 1);
}

void Desenha::escalar(GLfloat pontos[][3], GLint nPontos)
{
	for(GLint i=0; i< nPontos; ++i)
		{
			pontos[i][0]*=escala;
			pontos[i][1]*=escala;
		}
}

void Desenha::alteraEspessuraLinha(GLfloat espessura)
{
	espessuraLinha=espessura;
}
