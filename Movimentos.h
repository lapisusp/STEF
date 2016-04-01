#ifndef MOVIMENTOS_H_
#define MOVIMENTOS_H_

#include "Medidas.h"
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "unistd.h"

class Movimentos{
public:
    void AtualizaAlphas(int i);

	Movimentos(GLint altura, GLint largura);
	virtual ~Movimentos();
    void movAlpha(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat oeb[4][3], GLfloat oec[4][3], GLfloat odb[4][3], GLfloat odc[4][3], GLfloat pe[4][3], GLfloat pd[4][3], GLfloat roec[4][3], GLfloat roem[4][3], GLfloat roeb[4][3], GLfloat rodc[4][3], GLfloat rodm[4][3], GLfloat rodb[4][3],GLfloat intensidade, int exp);
	//Action Unit 1 – Inner Brow Raiser
	void au1InnerBrowRaiser(GLfloat se[8][3], GLfloat sd[8][3], GLfloat rctc[4][3], GLfloat rctm[4][3], GLfloat rctb[4][3], GLfloat intensidade);
	//Action Unit 2 – Outer Brow Raiser
	void au2OuterBrowRaiser(GLfloat se[8][3], GLfloat sd[8][3], GLfloat oec[4][3], GLfloat odc[4][3], GLfloat rtc[8][3], GLfloat rtm[8][3], GLfloat rtb[8][3], GLfloat intensidade);
	//Action Unit 4 – Brow Lowerer
	void au4BrowLowerer(GLfloat se[8][3], GLfloat sd[8][3], GLfloat oec[4][3], GLfloat odc[4][3], GLfloat intensidade);
	//Action Unit 5 – Upper Lid Raiser
	void au5UpperLidRaiser(GLfloat oeb[4][3], GLfloat oec[4][3], GLfloat odb[4][3], GLfloat odc[4][3], GLfloat pe[4][3], GLfloat pd[4][3], GLfloat intensidade);
	//Action Unit 5b
	//void au5bUpperLidRaiser(GLfloat oeb[4][3], GLfloat oec[4][3], GLfloat odb[4][3], GLfloat odc[4][3], GLfloat pe[4][3], GLfloat pd[4][3], GLfloat intensidade);
	//Action Unit 6 – Cheek Raiser and Lid Compressor
	void au6CheekRaiserLidCompressor(GLfloat oeb[4][3], GLfloat oec[4][3], GLfloat odb[4][3], GLfloat odc[4][3], GLfloat pe[4][3], GLfloat pd[4][3], GLfloat roec[4][3], GLfloat roem[4][3], GLfloat roeb[4][3], GLfloat rodc[4][3], GLfloat rodm[4][3], GLfloat rodb[4][3],GLfloat intensidade);
	//Action Unit 7 – Lid Tightener
	void au7LidTightener(GLfloat oeb[4][3], GLfloat oec[4][3], GLfloat odb[4][3], GLfloat odc[4][3], GLfloat pe[4][3], GLfloat pd[4][3], GLfloat intensidade);
	//Action Unit 9 - Nose Wrinkler
	void au9NoseWrinkler(GLfloat ne[6][3], GLfloat nd[6][3],  GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat intensidade);
	//Action Unit 12 – Lip Corner Puller
	void au12LipCornerPuller(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade);
	//Action Unit 15 – Lip Corner Depressor
	void au15LipCornerDepresor(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade);
	//Action Units 16 and 16+25 - Lower Lip Depressor
	void au16au25LowerLipDepressor(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade);
	//Action Unit 20 – Lip Stretcher
	void au20LipStretcher(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade);
	//Action Unit 23 – Lip Tightener
	void au23LipTightener(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade);
	//Action Units 25, 26, 27 – Lips Part, Jaw Drop, Mouth Stretch
	void au25LipsPart(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade);
	void au26JawDrop(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade);
	void au27MouthStretch(GLfloat lsc[4][3], GLfloat lsb[4][3], GLfloat lic[4][3], GLfloat lib[4][3], GLfloat intensidade);

	void au1au2(GLfloat se[8][3], GLfloat sd[8][3], GLfloat oec[4][3], GLfloat odc[4][3], GLfloat rtc[8][3], GLfloat rtm[8][3], GLfloat rtb[8][3],  GLfloat rctc[4][3], GLfloat rctm[4][3], GLfloat rctb[4][3],  GLfloat intensidade);
	void au1au4(GLfloat se[8][3], GLfloat sd[8][3], GLfloat oec[4][3], GLfloat odc[4][3],  GLfloat rctc[4][3], GLfloat rctm[4][3], GLfloat rctb[4][3],  GLfloat intensidade);
	void au1au2au4(GLfloat se[8][3], GLfloat sd[8][3], GLfloat oec[4][3], GLfloat odc[4][3], GLfloat rtc[8][3], GLfloat rtm[8][3], GLfloat rtb[8][3],  GLfloat rctc[4][3], GLfloat rctm[4][3], GLfloat rctb[4][3],  GLfloat intensidade);
	void au10UpperLipRaiser();

private:
	GLint altura;
	GLint largura;
	Medidas* medidas=NULL;
};

#endif /* MOVIMENTOS_H_ */
