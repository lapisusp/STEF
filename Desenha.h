
#ifndef DESENHA_H_
#define DESENHA_H_

#include <GL/glut.h>

class Desenha {
public:
	Desenha(GLint, GLint, GLfloat);
	virtual ~Desenha();
	void desenhaCurva(GLfloat**, GLint);
	void desenhaPontos(GLfloat**, GLint);
	void desenhaPontosAzul(GLfloat**, GLint);
	void desenhaCirculo(GLfloat x, GLfloat y);
	void desenhaCirculoPontoVermelho(GLfloat x, GLfloat y);
	void alteraEspessuraLinha(GLfloat espessura);
	const static GLfloat espessuraPadrao=3.0;
private:
	GLint altura, largura;
	GLUnurbsObj *nc;
	GLfloat escala;
	GLfloat espessuraLinha;

	void escalar(GLfloat** pontos,GLint nPontos);
};

#endif /* DESENHA_H_ */
