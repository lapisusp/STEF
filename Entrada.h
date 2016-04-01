/*
 * Entrada.h
 *
 *  Created on: 26/06/2014
 *      Author: rafa
 */

#ifndef ENTRADA_H_
#define ENTRADA_H_
#include <GL/glut.h>
#include <vector>


typedef std::vector<int> vec;

class Entrada {
public:
	Entrada();
	virtual ~Entrada();
	void arquivo();
	void imprimePontos(const char* contexto, GLfloat **pontos, GLint nPontos);
	GLfloat **pontos;
private:
	void contaPontos(const char* arquivo, vec *qtdPontos);
	GLfloat **AllocateDynamicArray(GLint linhas);
	void FreeDynamicArray(GLfloat** dArray);
};

#endif /* ENTRADA_H_ */
