#ifndef ANIMACAO_H_
#define ANIMACAO_H_
#include "Face.h";
#include "Saida.h"

class Animacao {
public:
	Animacao();
	Animacao(GLint altura, GLint largura, GLint etinia);
	virtual ~Animacao();
	void satisfacao(GLfloat intensidade);
	void tristeza(GLfloat intensidade);
	void surpresa(GLfloat intensidade);
	void medo(GLfloat intensidade);
	void aversao(GLfloat intensidade);
	void raiva(GLfloat intensidade);
	void neutra();
private:
	Face* face;
	Saida* s;
};

#endif /* ANIMACAO_H_ */
