/*
 * Medidas.h
 *
 *  Created on: 25/11/2013
 *      Author: rafaeltesta
 */

#ifndef MEDIDAS_H_
#define MEDIDAS_H_


#include <GL/glut.h>


class Medidas {
public:
	Medidas();
	virtual ~Medidas();
	void varia(GLfloat* indiceVariar[], GLint nVariar, GLfloat taxaVariacao);
	void varia(GLfloat*,GLfloat);
	void addEnvoltorio(GLfloat pontos[][3], GLint nPontos);
	void setup(GLfloat max, GLint novaOrientacao);
	const static  GLint horizontal = 0;
	const static  GLint vertical = 1;

private:
	//void varia()
	GLfloat limite;
	GLfloat maior;
	GLfloat menor;
	GLint orientacao;
};

#endif /* MEDIDAS_H_ */
