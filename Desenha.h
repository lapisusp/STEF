/*
 * Desenha.h
 *
 *  Created on: 25/11/2013
 *      Author: rafaeltesta
 */

#ifndef DESENHA_H_
#define DESENHA_H_

#include <GL/glut.h>

class Desenha {
public:
	Desenha(GLint, GLint, GLfloat);
	virtual ~Desenha();
	void desenhaCurva(GLfloat[][3], GLint);
	void desenhaPontos(GLfloat[][3], GLint);
	void desenhaPontosAzul(GLfloat[][3], GLint);
	void desenhaCirculo(GLfloat pontos[1][3], GLfloat r);
	void alteraEspessuraLinha(GLfloat espessura);
	const static GLfloat espessuraPadrao=3.0;
private:
	GLint altura, largura;
	GLUnurbsObj *nc;
	GLfloat escala;
	GLfloat espessuraLinha;

	void escalar(GLfloat pontos[][3] ,GLint nPontos);
};

#endif /* DESENHA_H_ */
