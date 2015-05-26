/*
 * Antropometria.h
 *
 *  Created on: 02/12/2013
 *      Author: rafaeltesta
 */

#ifndef ANTROPOMETRIA_H_
#define ANTROPOMETRIA_H_

#include <GL/glut.h>

class Antropometria {
public:
	const static GLint caucasiano=0;
	const static GLint afro=1;

	Antropometria(GLint, GLint, GLint);
	virtual ~Antropometria();

	void getSombrancelhaEsquerda(GLfloat[8][3]);
	void getSombrancelhaDireita(GLfloat[8][3]);

	void getOlhoEsquerdoCima(GLfloat[4][3]);
	void getOlhoEsquerdoBaixo(GLfloat[4][3]);

	void getOlhoDireitoCima(GLfloat[4][3]);
	void getOlhoDireitoBaixo(GLfloat[4][3]);

	void getNarizEsquerda(GLfloat[4][3]);
	void getNarizDireita(GLfloat[4][3]);

	void getLabioSuperiorCima(GLfloat[4][3]);
	void getLabioSuperiorBaixo(GLfloat[4][3]);
	void getLabioInferiorCima(GLfloat[4][3]);
	void getLabioInferiorBaixo(GLfloat[4][3]);

	void getRugasOlhoEsquerdoCima(GLfloat[4][3]);
	void getRugasOlhoEsquerdoMeio(GLfloat[4][3]);
	void getRugasOlhoEsquerdoBaixo(GLfloat[4][3]);

	void getRugasOlhoDireitoCima(GLfloat[4][3]);
	void getRugasOlhoDireitoMeio(GLfloat[4][3]);
	void getRugasOlhoDireitoBaixo(GLfloat[4][3]);

	void getPalpebraEsquerda(GLfloat[4][3]);
	void getPalpebraDireita(GLfloat[4][3]);

	void getContornoEsquerdoCima(GLfloat cec[4][3]);
	void getContornoEsquerdoBaixo(GLfloat ceb[4][3]);
	void getContornoDireitoCima(GLfloat cdc[4][3]);
	void getContornoDireitoBaixo(GLfloat cdb[4][3]);

	void getRugaTestaCima(GLfloat rtc[8][3]);
	void getRugaTestaMeio(GLfloat rtm[8][3]);
	void getRugaTestaBaixo(GLfloat rtb[8][3]);

	void getRugaCentroTestaCima(GLfloat rctc[8][3]);
	void getRugaCentroTestaMeio(GLfloat rctm[8][3]);
	void getRugaCentroTestaBaixo(GLfloat rctb[8][3]);
	//
	void getRugaInteriorSobrancelhaEsquerda(GLfloat rsie[4][3]);
	void getRugaInteriorSobrancelhaCentro(GLfloat rsic[4][3]);
	void getRugaInteriorSobrancelhaDireita(GLfloat rsid[4][3]);
	//
	void getRugaSobrancelhaNarizCima(GLfloat rsnc[4][3]);
	void getRugaSobrancelhaNarizMeio(GLfloat rsnm[4][3]);
	void getRugaSobrancelhaNarizBaixo(GLfloat rsnb[4][3]);
	//
	void getRugaNarizEsquerdaCima(GLfloat rnec[4][3]);
	void getRugaNarizEsquerdaBaixo(GLfloat rneb[4][3]);
	void getRugaNarizDireitaCima(GLfloat rndc[4][3]);
	void getRugaNarizDireitaBaixo(GLfloat rndb[4][3]);
	//
	void getRugaBochechaEsquerda(GLfloat rbe[8][3]);
	void getRugaBochechaDireita(GLfloat rbd[8][3]);

	void getNasolabialEsquerda(GLfloat nle[4][3]);
	void getNasolabialDireita(GLfloat nld[4][3]);

	void getNasolabialInternaEsquerda(GLfloat nlie[4][3]);
	void getNasolabialInternaDireita(GLfloat nlid[4][3]);

	void getPupilaEsquerda(GLfloat pe[1][3]);
	void getPupilaDireita(GLfloat pd[1][3]);
	GLfloat getRaioPupila();



	void getAuxiliares(GLfloat aux[5][3]);

	GLfloat alturaCabeca;

private:
	void calculaMedidas();
	void caucasianoAmericano();
	void afroAmericano();



	//tamanho jabela
	GLint altura;
	GLint largura;

	//Antropometria
	GLfloat nX;
	GLfloat nY;

	//olho e sobrancelha
	GLfloat enen;
	GLfloat exen;
	GLfloat exex;
	GLfloat pspi;
	GLfloat ftft;
	GLfloat gsn;
	GLfloat snsn;
	//
	GLfloat ven;
	GLfloat vn;
	GLfloat mfmf;
	GLfloat acac;
	GLfloat alal;
	GLfloat nsn;
	//
	GLfloat ngn;
	GLfloat lsgn;
	//
	GLfloat nsto;
	GLfloat chsto;
	GLfloat lssto;
	//
	GLfloat pior;
	//
	GLfloat eueu;
	GLfloat tt;
	GLfloat vtr;
	GLfloat vg;
	GLfloat zyzy;
	GLfloat gogo;
	GLfloat stosl;
	GLfloat trg;
	//
	GLfloat pupilse;
	GLfloat pupilor;
	GLfloat pupilos;
	//
	GLfloat nse;


	//pontos
	GLfloat cheX;
	GLfloat cheY;

	GLfloat chdX;
	GLfloat chdY;

	GLfloat p1eX;
	GLfloat p1eY;

	GLfloat p1dX;
	GLfloat p1dY;

	GLfloat p2eX;
	GLfloat p2eY;

	GLfloat p2dX;
	GLfloat p2dY;

	GLfloat oseX;
	GLfloat oseY;

	GLfloat osdX;
	GLfloat osdY;

	GLfloat eneX;
	GLfloat eneY;

	GLfloat exeX;
	GLfloat exeY;

	GLfloat pseX;
	GLfloat pseY;

	GLfloat pieX;
	GLfloat pieY;

	GLfloat endX;
	GLfloat endY;

	GLfloat exdX;
	GLfloat exdY;

	GLfloat psdX;
	GLfloat psdY;

	GLfloat pidX;
	GLfloat pidY;

	GLfloat mfeX;
	GLfloat mfeY;

	GLfloat aleX;
	GLfloat aleY;

	GLfloat aceX;
	GLfloat aceY;

	GLfloat snX;
	GLfloat snY;

	GLfloat mfdX;
	GLfloat mfdY;

	GLfloat aldX;
	GLfloat aldY;

	GLfloat acdX;
	GLfloat acdY;

	GLfloat lsX;
	GLfloat lsY;

	GLfloat liX;
	GLfloat liY;

	GLfloat stoX;
	GLfloat stoY;

	//rugas olho esquerdo
	GLfloat varicaoROE;

	GLfloat p3eX;
	GLfloat p3eY;

	GLfloat p4eX;
	GLfloat p4eY;

	GLfloat p5eX;
	GLfloat p5eY;

	GLfloat p6eX;
	GLfloat p6eY;

	GLfloat p7eX;
	GLfloat p7eY;

	GLfloat p8eX;
	GLfloat p8eY;

	GLfloat p9eX;
	GLfloat p9eY;

	GLfloat p10eX;
	GLfloat p10eY;

	GLfloat p11eX;
	GLfloat p11eY;

	//rugas olho direito
	GLfloat varicaoROD;

	GLfloat p3dX;
	GLfloat p3dY;

	GLfloat p4dX;
	GLfloat p4dY;

	GLfloat p5dX;
	GLfloat p5dY;

	GLfloat p6dX;
	GLfloat p6dY;

	GLfloat p7dX;
	GLfloat p7dY;

	GLfloat p8dX;
	GLfloat p8dY;

	GLfloat p9dX;
	GLfloat p9dY;

	GLfloat p10dX;
	GLfloat p10dY;

	GLfloat p11dX;
	GLfloat p11dY;

	GLfloat p12eX;
	GLfloat p12eY;

	GLfloat oreX;
	GLfloat oreY;

	GLfloat p13eX;
	GLfloat p13eY;

	GLfloat p12dX;
	GLfloat p12dY;

	GLfloat ordX;
	GLfloat ordY;

	GLfloat p13dX;
	GLfloat p13dY;

	GLfloat sleX;
	GLfloat sleY;

	GLfloat gneX;
	GLfloat gneY;

	GLfloat treX;
	GLfloat treY;

	GLfloat goeX;
	GLfloat goeY;

	GLfloat zyeX;
	GLfloat zyeY;

	GLfloat teX;
	GLfloat teY;

	GLfloat eueX;
	GLfloat eueY;

	GLfloat veX;
	GLfloat veY;

	GLfloat sldX;
	GLfloat sldY;

	GLfloat gndX;
	GLfloat gndY;

	GLfloat trdX;
	GLfloat trdY;

	GLfloat godX;
	GLfloat godY;

	GLfloat zydX;
	GLfloat zydY;

	GLfloat tdX;
	GLfloat tdY;

	GLfloat eudX;
	GLfloat eudY;

	GLfloat vdX;
	GLfloat vdY;

	// ruga testa cima
	GLfloat  pt1cX;
	GLfloat  pt1cY;

	GLfloat  pt2cX;
	GLfloat  pt2cY;

	GLfloat  pt3cX;
	GLfloat  pt3cY;

	GLfloat  pt4cX;
	GLfloat  pt4cY;

	GLfloat  pt5cX;
	GLfloat  pt5cY;

	//ruga testa meio
	GLfloat  pt1mX;
	GLfloat  pt1mY;

	GLfloat  pt2mX;
	GLfloat  pt2mY;

	GLfloat  pt3mX;
	GLfloat  pt3mY;

	GLfloat  pt4mX;
	GLfloat  pt4mY;

	GLfloat  pt5mX;
	GLfloat  pt5mY;

	// ruga testa baixo
	GLfloat  pt1bX;
	GLfloat  pt1bY;

	GLfloat  pt2bX;
	GLfloat  pt2bY;

	GLfloat  pt3bX;
	GLfloat  pt3bY;

	GLfloat  pt4bX;
	GLfloat  pt4bY;

	GLfloat  pt5bX;
	GLfloat  pt5bY;

	//pupila esquerda
	//aux
	GLfloat  seX;
	GLfloat  seY;

	GLfloat  pupilaeX;
	GLfloat  pupilaeY;

	//pupila esquerda
	GLfloat  pupiladX;
	GLfloat  pupiladY;

	GLfloat  pupilaR;

	//aux
	GLfloat  fteX;
	GLfloat  fteY;

	GLfloat  ftdX;
	GLfloat  ftdY;

	GLfloat  vX;
	GLfloat  vY;

	GLfloat  gX;
	GLfloat  gY;

	//ruga canto interno sobrancelhas
	GLfloat  pis1eX;
	GLfloat  pis1eY;

	GLfloat  pis2eX;
	GLfloat  pis2eY;

	GLfloat  pis3eX;
	GLfloat  pis3eY;

	GLfloat  pis1dX;
	GLfloat  pis1dY;

	GLfloat  pis2dX;
	GLfloat  pis2dY;

	GLfloat  pis3dX;
	GLfloat  pis3dY;

	GLfloat  pis1cX;
	GLfloat  pis1cY;

	GLfloat  pis2cX;
	GLfloat  pis2cY;

	GLfloat  pis3cX;
	GLfloat  pis3cY;

	//ruga nariz superior
	GLfloat  psn1cX;
	GLfloat  psn1cY;

	GLfloat  psn2cX;
	GLfloat  psn2cY;

	GLfloat  psn3cX;
	GLfloat  psn3cY;

	GLfloat  psn1mX;
	GLfloat  psn1mY;

	GLfloat  psn2mX;
	GLfloat  psn2mY;

	GLfloat  psn3mX;
	GLfloat  psn3mY;

	GLfloat  psn1bX;
	GLfloat  psn1bY;

	GLfloat  psn2bX;
	GLfloat  psn2bY;

	GLfloat  psn3bX;
	GLfloat  psn3bY;

	//ruga nariz inferior
	GLfloat  pn1eX;
	GLfloat  pn1eY;

	GLfloat  pn2eX;
	GLfloat  pn2eY;

	GLfloat  pn3eX;
	GLfloat  pn3eY;

	GLfloat  pn1dX;
	GLfloat  pn1dY;

	GLfloat  pn2dX;
	GLfloat  pn2dY;

	GLfloat  pn3dX;
	GLfloat  pn3dY;

	GLfloat  pn4eX;
	GLfloat  pn4eY;

	GLfloat  pn5eX;
	GLfloat  pn5eY;

	GLfloat  pn6eX;
	GLfloat  pn6eY;

	GLfloat  pn4dX;
	GLfloat  pn4dY;

	GLfloat  pn5dX;
	GLfloat  pn5dY;

	GLfloat  pn6dX;
	GLfloat  pn6dY;

	//rugas bochechas
	GLfloat  pb1eX;
	GLfloat  pb1eY;

	GLfloat  pb2eX;
	GLfloat  pb2eY;

	GLfloat  pb3eX;
	GLfloat  pb3eY;

	GLfloat  pb4eX;
	GLfloat  pb4eY;

	GLfloat  pb5eX;
	GLfloat  pb5eY;

	GLfloat  pb1dX;
	GLfloat  pb1dY;

	GLfloat  pb2dX;
	GLfloat  pb2dY;

	GLfloat  pb3dX;
	GLfloat  pb3dY;

	GLfloat  pb4dX;
	GLfloat  pb4dY;

	GLfloat  pb5dX;
	GLfloat  pb5dY;

	//nasolabial
	GLfloat  pnl1eX;
	GLfloat  pnl1eY;

	GLfloat  pnl1dX;
	GLfloat  pnl1dY;

	GLfloat  pnl2eX;
	GLfloat  pnl2eY;

	GLfloat  pnl2dX;
	GLfloat  pnl2dY;

	GLfloat  pnl3eX;
	GLfloat  pnl3eY;

	GLfloat  pnl3dX;
	GLfloat  pnl3dY;

	//nasolabialinterno
	GLfloat  pnli1eX;
	GLfloat  pnli1eY;

	GLfloat  pnli1dX;
	GLfloat  pnli1dY;

	GLfloat  pnli2eX;
	GLfloat  pnli2eY;

	GLfloat  pnli2dX;
	GLfloat  pnli2dY;

	GLfloat  pnli3eX;
	GLfloat  pnli3eY;

	GLfloat  pnli3dX;
	GLfloat  pnli3dY;
};

#endif /* ANTROPOMETRIA_H_ */
