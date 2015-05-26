/*
 * Movimentos.cpp
 *
 *  Created on: 08/02/2014
 *      Author: rafa
 */

#include "Movimentos.h"

Movimentos::Movimentos(GLint altura, GLint largura) {
	this->altura=altura;
	this->largura=largura;
	this->medidas = new Medidas();
}

Movimentos::~Movimentos() {
	delete medidas;
}

//Action Unit 1 – Inner Brow Raiser
void Movimentos::au1InnerBrowRaiser(GLfloat se[8][3], GLfloat sd[8][3], GLfloat rctc[4][3], GLfloat rctm[4][3], GLfloat rctb[4][3],  GLfloat intensidade)
{//FAZER RUGAS NA TESTA(APENAS CENTRO)
	//movimento vertical
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(se, 8);
	medidas->addEnvoltorio(sd, 8);
	GLfloat* p1eY[]={&(se[0][1])};
	GLfloat* p1dY[]={&(sd[0][1])};
	GLfloat* pas1eY[]={&(se[1][1]),&(se[2][1])};
	GLfloat* pas1dY[]={&(sd[1][1]),&(sd[2][1])};
	GLfloat* oseY[]={&(se[3][1]), &(se[4][1])};
	GLfloat* osdY[]={&(sd[3][1]), &(sd[4][1])};


	medidas->varia(p1eY, 1, 0.09*intensidade);
	medidas->varia(p1dY, 1, 0.09*intensidade);
	medidas->varia(pas1eY, 2, 0.035*intensidade);
	medidas->varia(pas1dY, 2, 0.035*intensidade);
	medidas->varia(oseY, 2, -0.02*intensidade);
	medidas->varia(osdY, 2, -0.02*intensidade);


	//movimento horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(se, 8);
	medidas->addEnvoltorio(sd, 8);
	GLfloat* p1eX[]={&(se[0][0])};
	GLfloat* p1dX[]={&(sd[0][0])};

	medidas->varia(p1eX, 1, 0.007*intensidade);
	medidas->varia(p1dX, 1, -0.007*intensidade);

	//rugas testa vertical
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(rctm, 4);
	GLfloat* rugasTestaY[]={
				&(rctc[0][1]), &(rctc[1][1]), &(rctc[2][1]), &(rctc[3][1]),
				&(rctm[0][1]), &(rctm[1][1]), &(rctm[2][1]), &(rctm[3][1]),
				&(rctb[0][1]), &(rctb[1][1]), &(rctb[2][1]), &(rctb[3][1])
		};
	medidas->varia(rugasTestaY, 12, intensidade-1);
}
//Action Unit 2 – Outer Brow Raiser
void Movimentos::au2OuterBrowRaiser(GLfloat se[8][3], GLfloat sd[8][3], GLfloat oec[4][3], GLfloat odc[4][3], GLfloat rtc[8][3], GLfloat rtm[8][3], GLfloat rtb[8][3], GLfloat intensidade)
{//talvez rugas pr�ximas as orelhas

	//movimento vertical
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(se, 8);
	medidas->addEnvoltorio(sd, 8);
	GLfloat* p1eY[]={&(se[0][1])};
	GLfloat* p1dY[]={&(sd[0][1])};
	GLfloat* pas1eY[]={&(se[1][1]),&(se[2][1])};
	GLfloat* pas1dY[]={&(sd[1][1]),&(sd[2][1])};
	GLfloat* oseY[]={&(se[3][1]), &(se[4][1])};
	GLfloat* osdY[]={&(sd[3][1]), &(sd[4][1])};
	GLfloat* pas2eY[]={&(se[5][1]),&(se[6][1])};
	GLfloat* pas2dY[]={&(sd[5][1]),&(sd[6][1])};
	GLfloat* p2eY[]={&(se[7][1])};
	GLfloat* p2dY[]={&(sd[7][1])};


	medidas->varia(p1eY, 1, 0.01*intensidade);
	medidas->varia(p1dY, 1, 0.01*intensidade);
	medidas->varia(pas1eY, 2, 0.015*intensidade);
	medidas->varia(pas1dY, 2, 0.015*intensidade);
	medidas->varia(oseY, 2, 0.025*intensidade);
	medidas->varia(osdY, 2, 0.025*intensidade);
	medidas->varia(pas2eY, 2, 0.06*intensidade);
	medidas->varia(pas2dY, 2, 0.06*intensidade);
	medidas->varia(p2eY, 1, 0.015*intensidade);
	medidas->varia(p2dY, 1, 0.015*intensidade);

	//movimento horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(se, 8);
	medidas->addEnvoltorio(sd, 8);
	GLfloat* p1eX[]={&(se[0][0])};
	GLfloat* p1dX[]={&(sd[0][0])};
	GLfloat* pas1eX[]={&(se[1][0]),&(se[2][0])};
	GLfloat* pas1dX[]={&(sd[1][0]),&(sd[2][0])};
	GLfloat* oseX[]={&(se[3][0]), &(se[4][0])};
	GLfloat* osdX[]={&(sd[3][0]), &(sd[4][0])};
	GLfloat* pas2eX[]={&(se[5][0]),&(se[6][0])};
	GLfloat* pas2dX[]={&(sd[5][0]),&(sd[6][0])};
	GLfloat* p2eX[]={&(se[7][0])};
	GLfloat* p2dX[]={&(sd[7][0])};
	medidas->varia(p1eX, 1, -0.01*intensidade);
	medidas->varia(p1dX, 1, 0.01*intensidade);
	medidas->varia(pas1eX, 2, -0.01*intensidade);
	medidas->varia(pas1dX, 2, 0.01*intensidade);
	medidas->varia(oseX, 2, -0.01*intensidade);
	medidas->varia(osdX, 2, 0.01*intensidade);
	medidas->varia(pas2eX, 2, -0.01*intensidade);
	medidas->varia(pas2dX, 2, 0.01*intensidade);
	medidas->varia(p2eX, 1, -0.01*intensidade);
	medidas->varia(p2dX, 1, 0.01*intensidade);

	//palpebra superiror
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(oec, 4);
	medidas->addEnvoltorio(odc, 4);
	GLfloat* psY[]={
				&(oec[1][1]), &(odc[1][1]),
				&(oec[2][1]), &(odc[2][1])
	};
	medidas->varia(psY, 4, 0.2*intensidade);

	//rugas testa vertical
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(rtm, 8);
	GLfloat* rugasTestaY[]={
				&(rtc[0][1]), &(rtc[1][1]), &(rtc[2][1]), &(rtc[3][1]), &(rtc[4][1]), &(rtc[5][1]), &(rtc[6][1]), &(rtc[7][1]),
				&(rtm[0][1]), &(rtm[1][1]), &(rtm[2][1]), &(rtm[3][1]), &(rtm[4][1]), &(rtm[5][1]), &(rtm[6][1]), &(rtm[7][1]),
				&(rtb[0][1]), &(rtb[1][1]), &(rtb[2][1]), &(rtb[3][1]), &(rtb[4][1]), &(rtb[5][1]), &(rtb[6][1]), &(rtb[7][1])
		};
	medidas->varia(rugasTestaY, 24, intensidade-1);
}
//Action Unit 4 – Brow Lowerer
void Movimentos::au4BrowLowerer(GLfloat se[8][3], GLfloat sd[8][3], GLfloat oec[4][3], GLfloat odc[4][3], GLfloat intensidade)
{//FAZER RUGAS ENTRE OS OLHOS
	//movimento vertical
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(se, 8);
	medidas->addEnvoltorio(sd, 8);
	GLfloat* p1eY[]={&(se[0][1])};
	GLfloat* p1dY[]={&(sd[0][1])};
	GLfloat* pas1eY[]={&(se[1][1]),&(se[2][1])};
	GLfloat* pas1dY[]={&(sd[1][1]),&(sd[2][1])};
	GLfloat* oseY[]={&(se[3][1]), &(se[4][1])};
	GLfloat* osdY[]={&(sd[3][1]), &(sd[4][1])};
	GLfloat* pas2eY[]={&(se[5][1]),&(se[6][1])};
	GLfloat* pas2dY[]={&(sd[5][1]),&(sd[6][1])};
	GLfloat* p2eY[]={&(se[7][1])};
	GLfloat* p2dY[]={&(sd[7][1])};


	medidas->varia(p1eY, 1, -0.03*intensidade);
	medidas->varia(p1dY, 1, -0.03*intensidade);
	medidas->varia(pas1eY, 2, -0.025*intensidade);
	medidas->varia(pas1dY, 2, -0.025*intensidade);
	medidas->varia(oseY, 2, -0.04*intensidade);
	medidas->varia(osdY, 2, -0.04*intensidade);
	medidas->varia(pas2eY, 2, -0.01*intensidade);
	medidas->varia(pas2dY, 2, -0.01*intensidade);
	medidas->varia(p2eY, 1, -0.01*intensidade);
	medidas->varia(p2dY, 1, -0.01*intensidade);

	//movimento horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(se, 8);
	medidas->addEnvoltorio(sd, 8);
	GLfloat* p1eX[]={&(se[0][0])};
	GLfloat* p1dX[]={&(sd[0][0])};
	GLfloat* pas1eX[]={&(se[1][0]),&(se[2][0])};
	GLfloat* pas1dX[]={&(sd[1][0]),&(sd[2][0])};
	GLfloat* oseX[]={&(se[3][0]), &(se[4][0])};
	GLfloat* osdX[]={&(sd[3][0]), &(sd[4][0])};
	GLfloat* pas2eX[]={&(se[5][0]),&(se[6][0])};
	GLfloat* pas2dX[]={&(sd[5][0]),&(sd[6][0])};
	GLfloat* p2eX[]={&(se[7][0])};
	GLfloat* p2dX[]={&(sd[7][0])};
	medidas->varia(p1eX, 1, -0.05*intensidade);
	medidas->varia(p1dX, 1, 0.05*intensidade);
	medidas->varia(pas1eX, 2, -0.04*intensidade);
	medidas->varia(pas1dX, 2, 0.04*intensidade);
	medidas->varia(oseX, 2, -0.02*intensidade);
	medidas->varia(osdX, 2, 0.02*intensidade);
	medidas->varia(pas2eX, 2, -0.01*intensidade);
	medidas->varia(pas2dX, 2, 0.01*intensidade);
	medidas->varia(p2eX, 1, -0.01*intensidade);
	medidas->varia(p2dX, 1, 0.01*intensidade);

	//palpebra superiror
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(oec, 4);
	medidas->addEnvoltorio(odc, 4);
	GLfloat* psY[]={
				&(oec[1][1]), &(odc[1][1]),
				&(oec[2][1]), &(odc[2][1])
	};
	medidas->varia(psY, 4, -0.2*intensidade);
}
void Movimentos::au1au2(GLfloat se[8][3], GLfloat sd[8][3], GLfloat oec[4][3], GLfloat odc[4][3], GLfloat rtc[8][3], GLfloat rtm[8][3], GLfloat rtb[8][3], GLfloat rctc[4][3], GLfloat rctm[4][3], GLfloat rctb[4][3],  GLfloat intensidade)
{
	au1InnerBrowRaiser(se, sd,rctc,rctm,rctb, intensidade);
	au2OuterBrowRaiser(se, sd, oec, odc, rtc,rtm,rtb, 0.4*intensidade);

	//movimento vertical
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(se, 8);
	medidas->addEnvoltorio(sd, 8);
	GLfloat* p1eY[]={&(se[0][1])};
	GLfloat* p1dY[]={&(sd[0][1])};
	GLfloat* pas1eY[]={&(se[1][1]),&(se[2][1])};
	GLfloat* pas1dY[]={&(sd[1][1]),&(sd[2][1])};
	GLfloat* oseY[]={&(se[3][1]), &(se[4][1])};
	GLfloat* osdY[]={&(sd[3][1]), &(sd[4][1])};
	GLfloat* pas2eY[]={&(se[5][1]),&(se[6][1])};
	GLfloat* pas2dY[]={&(sd[5][1]),&(sd[6][1])};
	GLfloat* p2eY[]={&(se[7][1])};
	GLfloat* p2dY[]={&(sd[7][1])};


	medidas->varia(p1eY, 1, -0.02*intensidade);
	medidas->varia(p1dY, 1, -0.02*intensidade);
	medidas->varia(pas1eY, 2, 0.015*intensidade);
	medidas->varia(pas1dY, 2, 0.015*intensidade);
	medidas->varia(oseY, 2, 0.04*intensidade);
	medidas->varia(osdY, 2, 0.04*intensidade);
	medidas->varia(pas2eY, 2, 0.02*intensidade);
	medidas->varia(pas2dY, 2, 0.02*intensidade);
	medidas->varia(p2eY, 1, 0.01*intensidade);
	medidas->varia(p2dY, 1, 0.01*intensidade);

}
void Movimentos::au1au4(GLfloat se[8][3], GLfloat sd[8][3], GLfloat oec[4][3], GLfloat odc[4][3], GLfloat rctc[4][3], GLfloat rctm[4][3], GLfloat rctb[4][3],  GLfloat intensidade)
{
	au1InnerBrowRaiser(se, sd,rctc,rctm,rctb, intensidade);
	au4BrowLowerer(se, sd, oec, odc, intensidade);

	GLfloat* pas1eY[]={&(se[1][1]),&(se[2][1])};
	GLfloat* pas1dY[]={&(sd[1][1]),&(sd[2][1])};
	GLfloat* oseY[]={&(se[3][1]), &(se[4][1])};
	GLfloat* osdY[]={&(sd[3][1]), &(sd[4][1])};
	GLfloat* pas2eY[]={&(se[5][1]),&(se[6][1])};
	GLfloat* pas2dY[]={&(sd[5][1]),&(sd[6][1])};

	medidas->varia(pas1eY, 2, 1.5*intensidade);
	medidas->varia(pas1dY, 2, 1.5*intensidade);
	medidas->varia(oseY, 2, intensidade);
	medidas->varia(osdY, 2, intensidade);
	medidas->varia(pas2eY, 2, -0.5*intensidade);
	medidas->varia(pas2dY, 2, -0.5*intensidade);


	//movimento horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(se, 8);
	medidas->addEnvoltorio(sd, 8);
	GLfloat* p1eX[]={&(se[0][0])};
	GLfloat* p1dX[]={&(sd[0][0])};
	GLfloat* pas1eX[]={&(se[1][0]),&(se[2][0])};
	GLfloat* pas1dX[]={&(sd[1][0]),&(sd[2][0])};

	medidas->varia(p1eX, 1, 0.02*intensidade);
	medidas->varia(p1dX, 1, -0.02*intensidade);
	medidas->varia(pas1eX, 2, -0.1*intensidade);
	medidas->varia(pas1dX, 2, 0.1*intensidade);

}
void Movimentos::au1au2au4(GLfloat se[8][3], GLfloat sd[8][3], GLfloat oec[4][3], GLfloat odc[4][3], GLfloat rtc[8][3], GLfloat rtm[8][3], GLfloat rtb[8][3], GLfloat rctc[4][3], GLfloat rctm[4][3], GLfloat rctb[4][3],  GLfloat intensidade)
{
	au1InnerBrowRaiser(se, sd,rctc,rctm,rctb, 0.7*intensidade);
	au2OuterBrowRaiser(se, sd, oec, odc, rtc,rtm,rtb, 0.4*intensidade);
	au4BrowLowerer(se, sd, oec, odc, 0.3*intensidade);

	//movimento vertical
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(se, 8);
	medidas->addEnvoltorio(sd, 8);
	GLfloat* p1eY[]={&(se[0][1])};
	GLfloat* p1dY[]={&(sd[0][1])};
	GLfloat* pas1eY[]={&(se[1][1]),&(se[2][1])};
	GLfloat* pas1dY[]={&(sd[1][1]),&(sd[2][1])};
	GLfloat* oseY[]={&(se[3][1]), &(se[4][1])};
	GLfloat* osdY[]={&(sd[3][1]), &(sd[4][1])};
	GLfloat* pas2eY[]={&(se[5][1]),&(se[6][1])};
	GLfloat* pas2dY[]={&(sd[5][1]),&(sd[6][1])};
	GLfloat* p2eY[]={&(se[7][1])};
	GLfloat* p2dY[]={&(sd[7][1])};


	medidas->varia(p1eY, 1, 0.01*intensidade);
	medidas->varia(p1dY, 1, 0.01*intensidade);
	medidas->varia(pas1eY, 2, -0.025*intensidade);
	medidas->varia(pas1dY, 2, -0.025*intensidade);
	medidas->varia(oseY, 2, 0.01*intensidade);
	medidas->varia(osdY, 2, 0.01*intensidade);
	medidas->varia(pas2eY, 2, 0.01*intensidade);
	medidas->varia(pas2dY, 2, 0.01*intensidade);
	medidas->varia(p2eY, 1, 0.01*intensidade);
	medidas->varia(p2dY, 1, 0.01*intensidade);

	//palpebra superiror
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(oec, 4);
	medidas->addEnvoltorio(odc, 4);
	GLfloat* psY[]={
				&(oec[1][1]), &(odc[1][1]),
				&(oec[2][1]), &(odc[2][1])
	};
	medidas->varia(psY, 4, -0.2*intensidade);
}


//Action Unit 5 – Upper Lid Raiser
void Movimentos::au5UpperLidRaiser(GLfloat oeb[4][3], GLfloat oec[4][3], GLfloat odb[4][3], GLfloat odc[4][3], GLfloat pe[4][3], GLfloat pd[4][3], GLfloat intensidade)
{
	//olhos superior vertical
		medidas->setup(altura, Medidas::vertical);
		medidas->addEnvoltorio(oec, 4);
		medidas->addEnvoltorio(odc, 4);
		GLfloat* psY[]={
					&(oec[1][1]), &(odc[1][1]),
					&(oec[2][1]), &(odc[2][1])
		};
		medidas->varia(psY, 4, 0.6*intensidade);

		/*medidas->setup(altura, Medidas::vertical);
		medidas->addEnvoltorio(oeb, 4);
		GLfloat* piY[]={
					&(oeb[1][1]), &(odb[1][1]),
					&(oeb[2][1]), &(odb[2][1])
		};
		medidas->varia(piY, 4, -0.6*intensidade);


		//palpebra vertical inferior
		medidas->setup(altura, Medidas::vertical);
		medidas->addEnvoltorio(pe, 4);
		medidas->addEnvoltorio(pd, 4);
		GLfloat* orY[]={
				&(pe[1][1]),&(pe[2][1]),
				&(pd[1][1]),&(pd[2][1])};
		medidas->varia(orY, 4, -0.3*intensidade);*/
}
//Action Unit 5b
/*void Movimentos::au5bUpperLidRaiser(GLfloat oeb[4][3], GLfloat oec[4][3], GLfloat odb[4][3], GLfloat odc[4][3], GLfloat pe[4][3], GLfloat pd[4][3], GLfloat intensidade)
{

}*/
//Action Unit 6 – Cheek Raiser and Lid Compressor
void Movimentos::au6CheekRaiserLidCompressor(GLfloat oeb[4][3], GLfloat oec[4][3], GLfloat odb[4][3], GLfloat odc[4][3], GLfloat pe[4][3], GLfloat pd[4][3], GLfloat roec[4][3], GLfloat roem[4][3], GLfloat roeb[4][3], GLfloat rodc[4][3], GLfloat rodm[4][3], GLfloat rodb[4][3],GLfloat intensidade)
{
	//palpebra vertical inferior
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(oeb, 4);
	GLfloat* piorY[]={
			&(oeb[1][1]),&(oeb[2][1]),
			&(odb[1][1]),&(odb[2][1]),
			&(pe[1][1]),&(pe[2][1]),
			&(pd[1][1]),&(pd[2][1])};
	medidas->varia(piorY, 8, 0.3*intensidade);

	//palpebra vertical superior
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(oeb, 4);
	GLfloat* psorY[]={
			&(oec[1][1]),&(oec[2][1]),
			&(odc[1][1]),&(odc[2][1])};
	medidas->varia(psorY, 4, -0.3*intensidade);

	//rugas olhos horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(roec, 4);
	medidas->addEnvoltorio(roem, 4);
	medidas->addEnvoltorio(roeb, 4);
	GLfloat* esqX[]={
				&(roec[1][0]),&(roec[2][0]),&(roec[3][0]),
				&(roem[1][0]),&(roem[2][0]),&(roem[3][0]),
				&(roeb[1][0]),&(roeb[2][0]),&(roeb[3][0])};
	GLfloat* dirX[]={
				&(rodc[1][0]),&(rodc[2][0]),&(rodc[3][0]),
				&(rodm[1][0]),&(rodm[2][0]),&(rodm[3][0]),
				&(rodb[1][0]),&(rodb[2][0]),&(rodb[3][0])};
	medidas->varia(esqX, 9, intensidade-1);
	medidas->varia(dirX, 9, 1-intensidade);


	//rugas olhos horizontal
		medidas->setup(altura, Medidas::vertical);
		medidas->addEnvoltorio(roec, 3);
	GLfloat* p4Y[]={
					&(roec[1][1]),&(roec[2][1]),
					&(rodc[1][1]),&(rodc[2][1])};
	medidas->varia(p4Y, 4, intensidade-1);

	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(roeb, 3);
	GLfloat* p10Y[]={
			&(roeb[1][1]),&(roeb[2][1]),
			&(rodb[1][1]),&(rodb[2][1])};
	medidas->varia(p10Y, 4, 1-intensidade);

	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(roec, 4);
	GLfloat* p5Y[]={&(roec[3][1]),&(rodc[3][1])};
	medidas->varia(p5Y, 2, intensidade-1);

	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(roeb, 4);
	GLfloat* p11Y[]={&(roeb[3][1]),	&(rodb[3][1])};
	medidas->varia(p11Y, 2, 1-intensidade);
}
//Action Unit 7 – Lid Tightener
void Movimentos::au7LidTightener(GLfloat oeb[4][3], GLfloat oec[4][3], GLfloat odb[4][3], GLfloat odc[4][3], GLfloat pe[4][3], GLfloat pd[4][3], GLfloat intensidade)
{ //APAGAR POR��O DOS OLHOS COBERTA POR SOBRANCELHA
	//palpebra vertical inferior
		medidas->setup(altura, Medidas::vertical);
		medidas->addEnvoltorio(oeb, 4);
		GLfloat* piorY[]={
				&(oeb[1][1]),&(oeb[2][1]),
				&(odb[1][1]),&(odb[2][1]),
				&(pe[1][1]),&(pe[2][1]),
				&(pd[1][1]),&(pd[2][1])};
		medidas->varia(piorY, 8, 0.5*intensidade);

		//palpebra vertical superior
		medidas->setup(altura, Medidas::vertical);
		medidas->addEnvoltorio(oeb, 4);
		GLfloat* psorY[]={
				&(oec[1][1]),&(oec[2][1]),
				&(odc[1][1]),&(odc[2][1])};
		medidas->varia(psorY, 4, -0.5*intensidade);
}
//Action Unit 9 � Nose Wrinkler
void Movimentos::au9NoseWrinkler(GLfloat ne[6][3], GLfloat nd[6][3], GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat intensidade)
{
	//nariz horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(ne, 6);
	medidas->addEnvoltorio(nd, 6);
	GLfloat* aceX[]={&(ne[3][0]),&(ne[4][0])};
	GLfloat* acdX[]={&(nd[3][0]),&(nd[4][0])};
	medidas->varia(acdX, 2, -0.03*intensidade);
	medidas->varia(aceX, 2, 0.03*intensidade);

	//nariz vertical
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(ne, 6);
	medidas->addEnvoltorio(nd, 6);
	GLfloat* aceY[]={&(ne[3][1]),&(ne[4][1])};
	GLfloat* acdY[]={&(nd[3][1]),&(nd[4][1])};
	GLfloat* aleY[]={&(ne[1][1]),&(ne[2][1])};
	GLfloat* aldY[]={&(nd[1][1]),&(nd[2][1])};
	medidas->varia(acdY, 2, 0.06*intensidade);
	medidas->varia(aceY, 2, 0.06*intensidade);
	medidas->varia(aldY, 2, 0.06*intensidade);
	medidas->varia(aleY, 2, 0.06*intensidade);

	//boca vertical
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	GLfloat* lsY[]={&(lsc[2][1]),&(lsc[3][1])};
	GLfloat* stoY[]={&(lsb[2][1]),&(lsb[3][1])};
	medidas->varia(lsY, 2, 0.06*intensidade);
	medidas->varia(stoY, 2, 0.06*intensidade);


}
//Action Unit 12 – Lip Corner Puller
void Movimentos::au12LipCornerPuller(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade)
{
	//boca horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* cheX[]={&(lsc[0][0]),&(lsb[0][0]),&(lic[0][0]),&(lib[0][0])};
	GLfloat* chdX[]={&(lsc[3][0]),&(lsb[3][0]),&(lic[3][0]),&(lib[3][0])};
	medidas->varia(cheX, 4, 0.10*intensidade);
	medidas->varia(chdX, 4, -0.10*intensidade);

	//boca vertical
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* cheY[]={&(lsc[0][1]),&(lsb[0][1]),&(lic[0][1]),&(lib[0][1])};
	GLfloat* chdY[]={&(lsc[3][1]),&(lsb[3][1]),&(lic[3][1]),&(lib[3][1])};
	medidas->varia(cheY, 4, 1.0*intensidade);
	medidas->varia(chdY, 4, 1.0*intensidade);
}
//Action Unit 15 – Lip Corner Depressor
void Movimentos::au15LipCornerDepresor(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade)
{
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* cheY[]={&(lsc[0][1]),&(lsb[0][1]),&(lic[0][1]),&(lib[0][1])};
	GLfloat* chdY[]={&(lsc[3][1]),&(lsb[3][1]),&(lic[3][1]),&(lib[3][1])};
	medidas->varia(cheY, 4, -intensidade);
	medidas->varia(chdY, 4, -intensidade);
}
//Action Units 16 and 16+25 - Lower Lip Depressor
void Movimentos::au16au25LowerLipDepressor(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade)
{
	//au25LipsPart(lsc,lsb,lic,lib,0.3*intensidade);
	//boca vertical inferior
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* lsstoIY[]={
			&(lic[1][1]),&(lic[2][1]),
			&(lib[1][1]),&(lib[2][1])};
	medidas->varia(lsstoIY, 4, -1.2*intensidade);
}
//Action Unit 20 – Lip Stretcher
void Movimentos::au20LipStretcher(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade)
{
	//boca vertical
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* lsY[]={&(lsc[1][1]),&(lsc[2][1])};
	GLfloat* liY[]={&(lib[1][1]),&(lib[2][1])};
	medidas->varia(lsY, 2, -0.1*intensidade);
	medidas->varia(liY, 2, 0.1*intensidade);

	//boca horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* cheX[]={&(lsc[0][0]),&(lsb[0][0]),&(lic[0][0]),&(lib[0][0])};
	GLfloat* chdX[]={&(lsc[3][0]),&(lsb[3][0]),&(lic[3][0]),&(lib[3][0])};
	medidas->varia(cheX, 4, 0.15*intensidade);
	medidas->varia(chdX, 4, -0.15*intensidade);
}
//Action Unit 23 – Lip Tightener
void Movimentos::au23LipTightener(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade)
{
	//boca vertical
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* lsY[]={&(lsc[1][1]),&(lsc[2][1])};
	GLfloat* liY[]={&(lib[1][1]),&(lib[2][1])};
	medidas->varia(lsY, 2, -0.27*intensidade);
	medidas->varia(liY, 2, 0.27*intensidade);

	//boca horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* cheX[]={&(lsc[0][0]),&(lsb[0][0]),&(lic[0][0]),&(lib[0][0])};
	GLfloat* chdX[]={&(lsc[3][0]),&(lsb[3][0]),&(lic[3][0]),&(lib[3][0])};
	medidas->varia(cheX, 4, 0.004*intensidade);
	medidas->varia(chdX, 4, -0.004*intensidade);
}
//Action Units 25, 26, 27 – Lips Part, Jaw Drop, Mouth Stretch
void Movimentos::au25LipsPart(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade)
{
	//boca horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* cheX[]={&(lsc[0][0]),&(lsb[0][0]),&(lic[0][0]),&(lib[0][0])};
	GLfloat* chdX[]={&(lsc[3][0]),&(lsb[3][0]),&(lic[3][0]),&(lib[3][0])};
	medidas->varia(cheX, 4, -0.01*intensidade);
	medidas->varia(chdX, 4, 0.01*intensidade);

	//boca vertical superior
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	GLfloat* lsstoSY[]={
			&(lsc[1][1]),&(lsc[2][1]),
			&(lsb[1][1]),&(lsb[2][1])};
	medidas->varia(lsstoSY, 4, 0.3*intensidade);

	//boca vertical inferior
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* lsstoIY[]={
			&(lic[1][1]),&(lic[2][1]),
			&(lib[1][1]),&(lib[2][1])};
	medidas->varia(lsstoIY, 4, -0.3*intensidade);
}

void Movimentos::au26JawDrop(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade)
{
	//boca horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* cheX[]={&(lsc[0][0]),&(lsb[0][0]),&(lic[0][0]),&(lib[0][0])};
	GLfloat* chdX[]={&(lsc[3][0]),&(lsb[3][0]),&(lic[3][0]),&(lib[3][0])};
	medidas->varia(cheX, 4, -0.05*intensidade);
	medidas->varia(chdX, 4, 0.05*intensidade);

	//boca vertical superior
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	GLfloat* lsstoSY[]={
			&(lsc[1][1]),&(lsc[2][1]),
			&(lsb[1][1]),&(lsb[2][1])};
	medidas->varia(lsstoSY, 4, intensidade);

	//boca vertical inferior
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* lsstoIY[]={
			&(lic[1][1]),&(lic[2][1]),
			&(lib[1][1]),&(lib[2][1])};
	medidas->varia(lsstoIY, 4, -intensidade);
}
void Movimentos::au27MouthStretch(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade)
{
	//boca horizontal
	medidas->setup(altura, Medidas::horizontal);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* cheX[]={&(lsc[0][0]),&(lsb[0][0]),&(lic[0][0]),&(lib[0][0])};
	GLfloat* chdX[]={&(lsc[3][0]),&(lsb[3][0]),&(lic[3][0]),&(lib[3][0])};
	medidas->varia(cheX, 4, -0.1*intensidade);
	medidas->varia(chdX, 4, 0.1*intensidade);

	//boca vertical superior
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lsc, 4);
	medidas->addEnvoltorio(lsb, 4);
	GLfloat* lsstoSY[]={
			&(lsc[1][1]),&(lsc[2][1]),
			&(lsb[1][1]),&(lsb[2][1])};
	medidas->varia(lsstoSY, 4, 2*intensidade);

	//boca vertical inferior
	medidas->setup(altura, Medidas::vertical);
	medidas->addEnvoltorio(lic, 4);
	medidas->addEnvoltorio(lib, 4);
	GLfloat* lsstoIY[]={
			&(lic[1][1]),&(lic[2][1]),
			&(lib[1][1]),&(lib[2][1])};
	medidas->varia(lsstoIY, 4, -2*intensidade);
}
void Movimentos::au10UpperLipRaiser()
{

}
