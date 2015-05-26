/*
 * Entrada.cpp
 *
 *  Created on: 26/06/2014
 *      Author: rafa
 */

#include "Entrada.h"
#include <stdio.h>
#include <stdlib.h>

Entrada::Entrada() {
	// TODO Auto-generated constructor stub

}

Entrada::~Entrada() {
	FreeDynamicArray(pontos);
}

void Entrada::arquivo()
{
	vec qtdPontos;
	contaPontos("arquivos/face.txt", &qtdPontos);



	printf("Arquivo:");

		FILE *p;
	   p = fopen("arquivos/face.txt","r");
	   GLint curvaAtual=0, pontoAtual=0;
	   while (!feof(p))
		{
		   char c, str[80];
		   float f;
		   fscanf(p,"%c",&c);
		   //printf("%c",c);
		   if(c=='{')//nova curva
		   {
			   //FreeDynamicArray(pontos);
			   pontos = AllocateDynamicArray(qtdPontos.at(curvaAtual));
			   pontoAtual=0;
		   }
		   else  if(!feof(p) && c=='}')//fim da curva
		   {
			   imprimePontos("Atual", pontos, qtdPontos[curvaAtual]);
			   curvaAtual++;
		   }
		   else if(c=='(')//novo ponto
		   {
			   //X
			   fscanf(p,"%f",&pontos[pontoAtual][0]);
			   //virgula
			   fscanf(p,"%c",&c);
			   //Y
			   fscanf(p,"%f",&pontos[pontoAtual][1]);
			   //Z
			   pontos[pontoAtual][2]=0;
			   pontoAtual++;
		   }
		}
	   fclose(p);
}

void Entrada::contaPontos(const char* arquivo, vec *qtdPontos)
{

	(*qtdPontos).reserve(1);
	GLint qtd=0;//acumulador da quantidade de pontos
	GLint i=0;//acumulador da quantidade de curvas

	FILE *p;
   p = fopen("arquivos/face.txt","r");

   while (!feof(p))
	{
	   char c, str[80];
	   float f;
	   fscanf(p,"%c",&c);
	   //printf("%c",c);
	   if(c=='{')//inicio de uma curva
	   {
		   i++;
		   qtd=0;

	   }
	   else  if(!feof(p) && c=='}')//fim de uma curva
	   {
		   (*qtdPontos).push_back(qtd);
	   }
	   else if(c=='(')//inicio de um ponto
	   {
		   qtd++;
	   }
	}
   fclose(p);
}

void Entrada::imprimePontos(const char* contexto, GLfloat **pontos, GLint nPontos)
{
	printf("Matriz %s:\n", contexto);
	GLint i;
	for (i = 0; i < nPontos; i++)
	{
	  printf("x: %f y: %f\n", pontos[i][0], pontos[i][1]);
	}
}

GLfloat** Entrada::AllocateDynamicArray(GLint linhas)
{
	GLfloat **dynamicArray;

      dynamicArray = new GLfloat*[linhas];
      for( int i = 0 ; i < linhas ; i++ )
      dynamicArray[i] = new GLfloat [3];

      return dynamicArray;
}

void Entrada::FreeDynamicArray(GLfloat** dArray)
{
      delete [] *dArray;
      delete [] dArray;
}

