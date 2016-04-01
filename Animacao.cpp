#include <stdio.h>
#include "Animacao.h"
#include "unistd.h"
#include "Entrada.h"

Animacao::Animacao() {
	face = new Face(650, 650, Antropometria::caucasiano,NULL);
	s = new Saida();
}

Animacao::Animacao(GLint altura, GLint largura, GLint etinia) {
	face = new Face(altura, largura, etinia,NULL);
	s = new Saida();
}

Animacao::~Animacao() {
	delete face;
	delete s;
}

void Animacao::satisfacao(GLfloat intensidade) {
	face->desenhaFace(Face::expressaoSatisfcao, intensidade);
	printf("\nSatifação feita ");
}

void Animacao::neutra() {
	face->desenhaFace(Face::expressaoNeutra, 0.0);
	printf("\nNeutra feita ");
}

void Animacao::tristeza(GLfloat intensidade) {
	face->desenhaFace(Face::expressaoTriteza, intensidade);
	printf("\nTristeza feita ");
}

void Animacao::surpresa(GLfloat intensidade) {
	face->desenhaFace(Face::expressaoSurpresa, intensidade);
	printf("\nSurpresa feita ");
}
void Animacao::medo(GLfloat intensidade) {
	face->desenhaFace(Face::expressaoMedo, intensidade);
	printf("\nMedo feita ");
}

void Animacao::aversao(GLfloat intensidade) {
	face->desenhaFace(Face::expressaoAversao, intensidade);
	printf("\naversao feita ");
}

void Animacao::raiva(GLfloat intensidade) {
	face->desenhaFace(Face::expressaoRaiva, intensidade);
	printf("\nraiva feita ");
}
