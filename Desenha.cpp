#include "Desenha.h"
#include "Medidas.h"
#include "Parametrizacao.h"
#include <stdio.h>
#include <math.h>

Desenha::Desenha(GLint altura, GLint largura, GLfloat escala) {
	this->altura = altura;
	this->largura = largura;
	this->escala = escala;

	this->espessuraLinha = this->espessuraPadrao;

	glClear (GL_COLOR_BUFFER_BIT);
	nc = gluNewNurbsRenderer();
	gluNurbsProperty(nc, GLU_SAMPLING_TOLERANCE, 5.0);
	glEnable (GL_MAP1_VERTEX_3);
}

Desenha::~Desenha() {
	// TODO Auto-generated destructor stub
}

void Desenha::desenhaCurva(GLfloat** pontos, GLint nPontos) {

	GLint order = nPontos;

	//knot vector
	GLint nNos = order * 2;
	GLfloat div = nNos / 2;
	GLfloat nos[nNos]; //={0.0f,0.0f,0.0f,0.0f,1.0f,1.0f,1.0f,1.0f};
	for (GLint i = 0; i < div; ++i) {
		nos[i] = 0.0f;
	}
	for (GLint i = div; i < nNos; ++i) {
		nos[i] = 1.0f;
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

	GLfloat pts[nPontos][3];

	for (int i = 0; i < nPontos; i++)//NURBS com problemas em arrays dinamicos
			{
		pts[i][0] = pontos[i][0];
		pts[i][1] = pontos[i][1];
		pts[i][2] = pontos[i][2];
	}

	glLineWidth (espessuraLinha);
	//desenha curva
	glColor3f(0.0, 0.0, 0.0);
	gluBeginCurve (nc);
	gluNurbsCurve(nc, nNos, nos, 3, &pts[0][0], order, GL_MAP1_VERTEX_3);
	//gluNurbsCurve(nc, KnotCount, knots, stride, contrl, oreder, type)
	gluEndCurve(nc);

	//desenha pontos
	//desenhaPontos(pontos, nPontos);

	//delete parametrizacao;
}

void Desenha::desenhaPontos(GLfloat** pontos, GLint nPontos) {
	glPointSize(5.0);
	glColor3f(1.0, 0.0, 0.0);

	glBegin (GL_LINE);

	for (GLint i = 0; i < nPontos; i++) {
		glVertex3fv(&pontos[i][0]);
	}
	glEnd();
}

void Desenha::desenhaPontosAzul(GLfloat** pontos, GLint nPontos) {
	escalar(pontos, nPontos);

	glPointSize(5.0);
	glColor3f(0.27, 0.51, 0.70);

	glBegin (GL_POINTS);

	for (GLint i = 0; i < nPontos; i++) {
		glVertex3fv(&pontos[i][0]);
	}
	glEnd();
}

void Desenha::desenhaCirculo(GLfloat x1, GLfloat y1) {
	x1 = x1 * 4;
	y1 = y1 * 4;
	GLfloat num_segments = 1000;

	GLfloat theta = 2 * 3.1415926 / GLfloat(num_segments);
	GLfloat c = cosf(theta);    //precalculate the sine and cosine
	GLfloat s = sinf(theta);
	GLfloat t;

	GLfloat x = 8;    //we start at angle = 0
	GLfloat y = 0;
	// printf("x=%f",ponto[0][0]);
	//system("pause");
	glColor3f(0.0, 0.0, 0.0);
	glBegin (GL_LINE_LOOP);
	for (GLint ii = 0; ii < num_segments; ii++) {
		glVertex2f(x + x1, y + y1);    //output vertex

		//apply the rotation matrix
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();

	//ponto preto nos olhos/**
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin (GL_POINTS);
	glVertex2f(x1, y1);
	glEnd();
	/**/

}

void Desenha::desenhaCirculoPontoVermelho(GLfloat x1, GLfloat y1) {
	x1 = x1 * 4;
	y1 = y1 * 4;
	GLfloat num_segments = 1000;

	GLfloat theta = 2 * 3.1415926 / GLfloat(num_segments);
	GLfloat c = cosf(theta);    //precalculate the sine and cosine
	GLfloat s = sinf(theta);
	GLfloat t;

	GLfloat x = 8;    //we start at angle = 0
	GLfloat y = 0;
	// printf("x=%f",ponto[0][0]);
	//system("pause");
	glColor3f(0.0, 0.0, 0.0);
	glBegin (GL_LINE_LOOP);
	for (GLint ii = 0; ii < num_segments; ii++) {
		glVertex2f(x + x1, y + y1);    //output vertex

		//apply the rotation matrix
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();

	//ponto preto nos olhos/**
	glColor3f(255.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin (GL_POINTS);
	glVertex2f(x1, y1);
	glEnd();
	/**/

}

void Desenha::escalar(GLfloat** pontos, GLint nPontos) {
	for (GLint i = 0; i < nPontos; ++i) {
		pontos[i][0] *= escala;
		pontos[i][1] *= escala;
	}
}

void Desenha::alteraEspessuraLinha(GLfloat espessura) {
	espessuraLinha = espessura;
}
