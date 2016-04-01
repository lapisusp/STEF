#ifndef ENTRADA_H_
#define ENTRADA_H_
#include <GL/glut.h>
#include <vector>
#include "Desenha.h"



typedef std::vector<int> vec;

class Entrada {
public:
	Entrada(GLint altura, GLint largura);
	virtual ~Entrada();
	void arquivo(const char* arquivo);
	void arquivoOpcionalPontos(const char* arquivo);
	void imprimePontos(const char* contexto, GLfloat **pontos, GLint nPontos);
	GLfloat **pontos;
private:
	void contaPontos(const char* arquivo, vec *qtdPontos);
	GLfloat **AllocateDynamicArray(GLint linhas);
	void FreeDynamicArray(GLfloat** dArray, GLint linhas);
	Desenha* desenha=NULL;
};

#endif /* ENTRADA_H_ */
