/*
 * Face.h
 *
 *  Created on: 25/11/2013
 *      Author: rafaeltesta
 */

#ifndef FACE_H_
#define FACE_H_

#include <stdlib.h>
#include "Desenha.h"
#include "Movimentos.h"
#include "Medidas.h"
#include "Antropometria.h"

class Face {
public:
	Face(GLint altura, GLint largura, GLint etinia);
	virtual ~Face();

	void desenhaFace(GLint expressao, GLfloat quantidadeExpressao);


	//expressões
	const static GLint expressaoNeutra=0;
	const static GLint expressaoSatisfcao=1;
	const static GLint expressaoTriteza=2;
	const static GLint expressaoSurpresa=3;
	const static GLint expressaoMedo=4;
	const static GLint expressaoAversao=5;
	const static GLint expressaoRaiva=6;
	const static GLint expressaoDesprezo=7;


	//curvas
	GLfloat se [8][3];
	GLfloat sd [8][3];
	GLfloat oec [4][3];
	GLfloat oeb [4][3];
	GLfloat odc [4][3];
	GLfloat odb [4][3];
	GLfloat ne [6][3];
	GLfloat nd [6][3];
	GLfloat lsc [4][3];
	GLfloat lsb [4][3];
	GLfloat lic [4][3];
	GLfloat lib [4][3];
	GLfloat roec [4][3];
	GLfloat roem [4][3];
	GLfloat roeb [4][3];
	GLfloat rodc [4][3];
	GLfloat rodm [4][3];
	GLfloat rodb [4][3];
	GLfloat pe [4][3];
	GLfloat pd [4][3];
	GLfloat cec [4][3];
	GLfloat ceb [4][3];
	GLfloat cdc [4][3];
	GLfloat cdb [4][3];
	GLfloat rtc [8][3];
	GLfloat rtm [8][3];
	GLfloat rtb [8][3];
	GLfloat pue [1][3];
	GLfloat pud [1][3];
	GLfloat pupilaR;
	GLfloat rctc[4][3];
	GLfloat rctm[4][3];
	GLfloat rctb[4][3];
	//
	GLfloat rsie[4][3];
	GLfloat rsic[4][3];
	GLfloat rsid[4][3];
	//
	GLfloat rsnc[4][3];
	GLfloat rsnm[4][3];
	GLfloat rsnb[4][3];
	//
	GLfloat rnec[4][3];
	GLfloat rneb[4][3];
	GLfloat rndc[4][3];
	GLfloat rndb[4][3];
	//
	GLfloat rbe[8][3];
	GLfloat rbd[8][3];
	//
	GLfloat nle[4][3];
	GLfloat nld[4][3];
	//
	GLfloat nlie[4][3];
	GLfloat nlid[4][3];

	void desenhaRugasTesta(GLfloat espessura);
	void desenhaRugasCentroTesta(GLfloat espessura);
	void desenhaRugasOlhos(GLfloat espessura);
	void desenhaRugasCantoInternoSobrancelha(GLfloat espessura);
	void desenhaRugasNariz(GLfloat espessura);
	void desenhaRugasBochecha(GLfloat espessura);

private:
	void satisfacao(GLfloat taxa);
	void tristeza(GLfloat taxa);
	void surpresa(GLfloat taxa);
	void medo(GLfloat taxa);
	void aversao(GLfloat taxa);
	void raiva(GLfloat taxa);
	void desprezo(GLfloat taxa);
	void neutra();
	void desenhaFace();

	void desenhaSobrancelhaEsquerda();
	void desenhaSobrancelhaDireita();
	void desenhaSobrancelha();

	void desenhaOlhoEsquerdoCima();
	void desenhaOlhoEsquerdoBaixo();
	void desenhaOlhoDireitoCima();
	void desenhaOlhoDireitoBaixo();
	void desenhaOlhoEsquerdo();
	void desenhaOlhoDireito();
	void desenhaOlho();


	void desenhaNarizEsquerda();
	void desenhaNarizDireita();
	void desenhaNariz();

	void desenhaLabioSuperiorCima();
	void desenhaLabioSuperiorBaixo();
	void desenhaLabioInferiorCima();
	void desenhaLabioInferiorBaixo();
	void desenhaBoca();

	void desenhaRugasOlhoEsquerdo();
	void desenhaRugasOlhoDireito();


	void desenhaPalpebraEsquerda();
	void desenhaPalpebraDireita();
	void desenhaPalpebras();

	void desenhaContronoEsquerdo();
	void desenhaContornoDireito();
	void desenhaControno();

	void desenhaRugaTestaCima();
	void desenhaRugaTestaMeio();
	void desenhaRugaTestaBaixo();

	void desenhaRugaCentroTestaCima();
	void desenhaRugaCentroTestaMeio();
	void desenhaRugaCentroTestaBaixo();

	void desenhaRugasCantoInternoSobrancelhaEsquerda();
	void desenhaRugasCantoInternoSobrancelhaCentro();
	void desenhaRugasCantoInternoSobrancelhaBaixo();

	void desenhaRugasNarizSuperior();
	void desenhaRugasNarizSuperiorCima();
	void desenhaRugasNarizSuperiorMeio();
	void desenhaRugasNarizSuperiorBaixo();

	void desenhaRugasNarizInferior();
	void desenhaRugasNarizInferiorEsquerda();
	void desenhaRugasNarizInferiorDireita();

	void desenhaRugasBochechasEsquerda();
	void desenhaRugasBochechasDireita();

	void desenhaNazolabialEsquerda();
	void desenhaNazolabialDireita();
	void desenhaNazolabialInternoEsquerda();
	void desenhaNazolabialInternoDireita();
	void desenhaNazolabial();

	void desenhaPupilaEsquerda();
	void desenhaPupilaDireita();
	void desenhaPupilas();

	void imprimePontos(const char*, GLfloat[][3], GLint);

	void inicilizaArraysCurvas();

	Medidas* medidas=NULL;
	Movimentos* movimentos=NULL;
	Desenha* desenha=NULL;
	Antropometria* antropometria=NULL;

	//tamanho jabela
	GLint altura;
	GLint largura;



};

#endif /* FACE_H_ */
