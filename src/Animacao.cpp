/*
 * Animacao.cpp

 *
 *  Created on: 28/11/2013
 *      Author: rafaeltesta
 */

#include <stdio.h>
#include "Animacao.h"
#include "unistd.h"

Animacao::Animacao() {
	face = new Face(650, 650, Antropometria::caucasiano);
	s = new Saida();

}

Animacao::Animacao(GLint altura, GLint largura, GLint etinia) {
	face = new Face(altura, largura, etinia);
	s = new Saida();

}

Animacao::~Animacao() {
	delete face;
	delete s;
}

void Animacao::satisfacao()
{
/*	for(GLfloat i=0; i<1.0; i+=0.2)
	{
		face->desenhaFace(Face::expressaoSatisfcao, i);
		usleep(9000);
	}*/
	face->desenhaFace(Face::expressaoSatisfcao, 0.25);
	usleep(900000);
	s->salvarImagem("satisfacao25.jpg");
	face->desenhaFace(Face::expressaoSatisfcao, 0.50);
	usleep(900000);
	s->salvarImagem("satisfacao50.jpg");
	face->desenhaFace(Face::expressaoSatisfcao, 0.75);
	usleep(900000);
	s->salvarImagem("satisfacao75.jpg");
	face->desenhaFace(Face::expressaoSatisfcao, 1);
	usleep(900000);
	s->salvarImagem("satisfacao100.jpg");

	printf("\nSatifação feita ");
}

void Animacao::neutra()
{
	face->desenhaFace(Face::expressaoNeutra, 0.0);
	printf("\nNeutra feita ");
	usleep(900000);
	s->salvarImagem("neutra.jpg");
}

void Animacao::tristeza()
{
	//for(GLfloat i=0; i<1.0; i+=0.2)
	//{
		//face->desenhaFace(Face::expressaoTriteza, i);
		//usleep(90000);
	//}
	face->desenhaFace(Face::expressaoTriteza, 0.25);
	usleep(900000);
	s->salvarImagem("tristeza25.jpg");
	face->desenhaFace(Face::expressaoTriteza, 0.50);
	usleep(900000);
	s->salvarImagem("tristeza50.jpg");
	face->desenhaFace(Face::expressaoTriteza, 0.75);
	usleep(900000);
	s->salvarImagem("tristeza75.jpg");
	face->desenhaFace(Face::expressaoTriteza, 1);
	usleep(900000);
	s->salvarImagem("tristeza100.jpg");
	printf("\nTristeza feita ");
}

void Animacao::surpresa()
{
	//for(GLfloat i=0; i<1.0; i+=0.25)
	//{
		face->desenhaFace(Face::expressaoSurpresa, 0.25);
		usleep(900000);
		s->salvarImagem("surpresa25.jpg");
		face->desenhaFace(Face::expressaoSurpresa, 0.50);
		usleep(900000);
		s->salvarImagem("surpresa50.jpg");
		face->desenhaFace(Face::expressaoSurpresa, 0.75);
		usleep(900000);
		s->salvarImagem("surpresa75.jpg");
		face->desenhaFace(Face::expressaoSurpresa, 1);
		usleep(900000);
		s->salvarImagem("surpresa100.jpg");
	//}
	printf("\nSurpresa feita ");
}
void Animacao::medo()
{
	/*for(GLfloat i=0; i<1.0; i+=0.2)
	{
		face->desenhaFace(Face::expressaoMedo, i);
		usleep(90000);
	}*/
	face->desenhaFace(Face::expressaoMedo, 0.25);
	usleep(900000);
	s->salvarImagem("medo25.jpg");
	face->desenhaFace(Face::expressaoMedo, 0.50);
	usleep(900000);
	s->salvarImagem("medo50.jpg");
	face->desenhaFace(Face::expressaoMedo, 0.75);
	usleep(900000);
	s->salvarImagem("medo75.jpg");
	face->desenhaFace(Face::expressaoMedo, 1);
	usleep(900000);
	s->salvarImagem("medo100.jpg");

	printf("\nMedo feita ");
}

void Animacao::aversao()
{
	/*for(GLfloat i=0; i<1.0; i+=0.2)
	{
		face->desenhaFace(Face::expressaoAversao, i);
		usleep(90000);
	}*/
	face->desenhaFace(Face::expressaoAversao, 0.25);
	usleep(900000);
	s->salvarImagem("aversao25.jpg");
	face->desenhaFace(Face::expressaoAversao, 0.50);
	usleep(900000);
	s->salvarImagem("aversao50.jpg");
	face->desenhaFace(Face::expressaoAversao, 0.75);
	usleep(900000);
	s->salvarImagem("aversao75.jpg");
	face->desenhaFace(Face::expressaoAversao, 1);
	usleep(900000);
	s->salvarImagem("aversao100.jpg");

	printf("\naversao feita ");
}

void Animacao::raiva()
{
	/*for(GLfloat i=0; i<1.0; i+=0.2)
	{
		face->desenhaFace(Face::expressaoRaiva, i);
		usleep(90000);
	}*/
	face->desenhaFace(Face::expressaoRaiva, 0.25);
	usleep(900000);
	s->salvarImagem("raiva25.jpg");
	face->desenhaFace(Face::expressaoRaiva, 0.50);
	usleep(900000);
	s->salvarImagem("raiva50.jpg");
	face->desenhaFace(Face::expressaoRaiva, 0.75);
	usleep(900000);
	s->salvarImagem("raiva75.jpg");
	face->desenhaFace(Face::expressaoRaiva, 1);
	usleep(900000);
	s->salvarImagem("raiva100.jpg");

	printf("\nraiva feita ");
}

void Animacao::desprezo()
{
	for(GLfloat i=0; i<1.0; i+=0.2)
	{
		face->desenhaFace(Face::expressaoDesprezo, i);
		usleep(90000);
	}
	printf("\nDesprezo feita ");
}

