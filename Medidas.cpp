#include "Medidas.h"
#include <stdio.h>
#include <limits>

Medidas::Medidas() {
	limite = std::numeric_limits < GLfloat > ::max();
	menor = limite / 2;
	maior = -limite / 2;
	orientacao = horizontal;
}

Medidas::~Medidas() {
	// TODO Auto-generated destructor stub
}
void Medidas::setup(GLfloat max, GLint novaOrientacao) {
	limite = max;
	menor = limite;
	maior = -limite;
	orientacao = novaOrientacao;
}

void Medidas::addEnvoltorio(GLfloat pontos[][3], GLint nPontos) {
	for (GLint i = 0; i < nPontos; ++i) {
		if (pontos[i][orientacao] > maior)
			maior = pontos[i][orientacao];
		if (pontos[i][orientacao] < menor)
			menor = pontos[i][orientacao];
	}
}

void Medidas::varia(GLfloat* variar[], GLint nVariar, GLfloat taxaVariacao) {
	for (GLint i = 0; i < nVariar; ++i) {
		GLfloat p = *(variar[i]);
		*(variar[i]) = *(variar[i]) - (maior - menor) * taxaVariacao;
		//confere dominio
		//if(*(variar[i])<0) *(variar[i])=0;
		//else if(*(variar[i])>limite) *(variar[i])=limite;
		//printf("Nova posição: p=%f-(%f-%f)*(%f) = %f \n", p, maior,menor, taxaVariacao, *(variar[i]));
	}
}

void Medidas::varia(GLfloat* ponto, GLfloat taxaDeVariacao) {
	(*ponto) = (*ponto) + 20 * taxaDeVariacao;
}
