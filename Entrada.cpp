#include "Entrada.h"
#include <stdio.h>
#include <stdlib.h>

Entrada::Entrada(GLint altura, GLint largura) {
	//desenha = new Desenha(altura, largura, 2.7);
	desenha = new Desenha(altura, largura, 4);

}

Entrada::~Entrada() {

	delete desenha;
}

void Entrada::arquivo(const char* arquivo) {

	vec qtdPontos;
	contaPontos(arquivo, &qtdPontos);
	//printf("Arquivo:");

	FILE *p;
	p = fopen(arquivo, "r");
	GLint curvaAtual = 0, pontoAtual = 0;
	bool pupila = false;
	while (!feof(p)) {

		char c, str[80];
		float f;
		fscanf(p, "%c", &c);
		//printf("%c",c);
		if (c == 'w')
			pupila = true;
		if (c == '{') //nova curva
				{
			pontos = AllocateDynamicArray(qtdPontos.at(curvaAtual));
			pontoAtual = 0;
		} else if (!feof(p) && c == '}') //fim da curva
				{
			//imprimePontos("Confere", pontos, qtdPontos[curvaAtual]);
			if (!pupila) desenha->desenhaCurva(pontos, qtdPontos[curvaAtual]);
			FreeDynamicArray(pontos, qtdPontos[curvaAtual]);
			curvaAtual++;
		} else if (c == '(') //novo ponto
				{
			GLfloat x;
			//X
			fscanf(p, "%f", &x);
			pontos[pontoAtual][0] = x;
			//virgula
			fscanf(p, "%c", &c);
			//Y
			GLfloat y;
			fscanf(p, "%f", &y);
			pontos[pontoAtual][1] = y;
			//Z
			pontos[pontoAtual][2] = 0.0;
			pontoAtual++;
			if (pupila) {

				desenha->desenhaCirculo(x, y);
			}
		}
	}


	fclose(p);

}
void Entrada::arquivoOpcionalPontos(const char* arquivo) {

	vec qtdPontos;
	contaPontos(arquivo, &qtdPontos);
	//printf("Arquivo:");

	FILE *p;
	p = fopen(arquivo, "r");
	GLint curvaAtual = 0, pontoAtual = 0;
	bool pupila = false;
	while (!feof(p)) {

		char c, str[80];
		float f;
		fscanf(p, "%c", &c);
		//printf("%c",c);
		if (c == 'w')
			pupila = true;
		if (c == '{') //nova curva
				{
			pontos = AllocateDynamicArray(qtdPontos.at(curvaAtual));
			pontoAtual = 0;
		} else if (!feof(p) && c == '}') //fim da curva
				{
			//imprimePontos("Confere", pontos, qtdPontos[curvaAtual]);
			if (!pupila) desenha->desenhaCurva(pontos, qtdPontos[curvaAtual]);
			FreeDynamicArray(pontos, qtdPontos[curvaAtual]);
			curvaAtual++;
		} else if (c == '(') //novo ponto
				{
			GLfloat x;
			//X
			fscanf(p, "%f", &x);
			pontos[pontoAtual][0] = x;
			//virgula
			fscanf(p, "%c", &c);
			//Y
			GLfloat y;
			fscanf(p, "%f", &y);
			pontos[pontoAtual][1] = y;
			//Z
			pontos[pontoAtual][2] = 0.0;
			pontoAtual++;
			//if (pupila) {

				desenha->desenhaCirculoPontoVermelho(x, y);
				desenha->desenhaCirculoPontoVermelho(0, 0);
			//}
		}
	}
	fclose(p);
}
void Entrada::contaPontos(const char* arquivo, vec *qtdPontos) {

	(*qtdPontos).reserve(1);
	GLint qtd = 0; //acumulador da quantidade de pontos
	GLint i = 0; //acumulador da quantidade de curvas

	FILE *p;
	p = fopen(arquivo, "r");

	while (!feof(p)) {
		char c, str[80];
		float f;
		fscanf(p, "%c", &c);
		//printf("%c",c);
		if (c == '{') //inicio de uma curva
				{
			i++;
			qtd = 0;

		} else if (!feof(p) && c == '}') //fim de uma curva
				{
			(*qtdPontos).push_back(qtd);
		} else if (c == '(') //inicio de um ponto
				{
			qtd++;
		}
	}
	fclose(p);
}

GLfloat** Entrada::AllocateDynamicArray(GLint linhas) {
	GLfloat **dynamicArray;

	dynamicArray = new GLfloat*[linhas];
	for (int i = 0; i < linhas; i++) {
		dynamicArray[i] = new GLfloat[3];
		//inicializa
		dynamicArray[i][0] = 0.0;
		dynamicArray[i][1] = 0.0;
		dynamicArray[i][2] = 0.0;
	}

	return dynamicArray;
}

void Entrada::FreeDynamicArray(GLfloat** dArray, GLint linhas) {
	for (int i = 0; i < linhas; ++i) {
		delete dArray[i];
	}
}


