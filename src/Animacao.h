/*
 * Animacao.h
 *
 *  Created on: 28/11/2013
 *      Author: rafaeltesta
 */

#ifndef ANIMACAO_H_
#define ANIMACAO_H_
#include "Face.h";
#include "Saida.h"

class Animacao {
public:
	Animacao();
	Animacao(GLint altura, GLint largura, GLint etinia);
	virtual ~Animacao();
	void satisfacao();
	void tristeza();
	void surpresa();
	void medo();
	void aversao();
	void raiva();
	void desprezo();
	void neutra();
private:
	Face* face;
	Saida* s;
};

#endif /* ANIMACAO_H_ */
