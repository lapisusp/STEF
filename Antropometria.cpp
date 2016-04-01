/*
 * Antropometria.cpp
 *
 *  Created on: 02/12/2013
 *      Author: rafaeltesta
 */

#include "Antropometria.h"
#include <stdio.h>

Antropometria::Antropometria(GLint altura, GLint largura, GLint etinia)
{
	this->altura=altura;
	this->largura=largura;
	if(etinia==caucasiano)
	{
		caucasianoAmericano();
	}
	else //if(etinia==afro)
	{
		afroAmericano();
	}

	calculaMedidas();
}

Antropometria::~Antropometria()
{
}

void Antropometria::caucasianoAmericano()
{
	alturaCabeca=229.4;
	enen=33.3;
	exen = 31.3;
	exex = 92.1;
	pspi = 10.8;
	ftft = 115.9;
	gsn = 63.1;
	//
	ven = 121.3;
	vn = 111.3;
	mfmf = 19.6;
	acac = 32.8;
	alal = 34.9;
	nsn = 54.8;
	//
	ngn = 124.7;
	lsgn = 33.1;
	//
	nsto = 76.6;
	chsto = 32.8;
	lssto = 8.0;
	//
	pior = 8.1;
	//
	eueu = 151.1;
	tt = 146.8;
	vtr = 46.6;
	vg = 200.0;
	zyzy = 139.1;
	gogo = 105.3;
	stosl = 19.7;
	trg = 57.7;
	//
	pupilse = 33.4;
	pupilor = 12.6;
	pupilos = 24.2;
	//
	nse=ven-vn;
}

void Antropometria::afroAmericano()
{
	alturaCabeca=229.4;
	enen= 35.8;
	exen = 32.9;
	exex = 96.8;
	pspi = 10.0;
	ftft = 116.3;
	gsn = 68.8;
	//
	ven = 126.7;
	vn = 117.1;
	mfmf = 22.8;
	acac = 40.0;
	alal = 44.1;
	nsn = 51.9;
	snsn=6.9;
	//
	ngn = 125.9;
	lsgn = 33.1;//conferir
	//
	nsto = 78.0;
	chsto = 33.1;
	lssto = 13.6;
	//
	pior = 8.1;//conferir
	//
	eueu = 148.8;
	tt = 143.4;
	vtr = 43.3;
	vg = 200.0;//conferir
	zyzy = 138.7;
	gogo = 104.2;
	stosl = 19.7;//conferir
	trg = 61.8;
	//
	pupilse = 33.4;//conferir
	pupilor = 12.6;//conferir
	pupilos = 24.2;//conferir
	//
	nse=nY+nse;
}
void Antropometria::calculaMedidas()
{
	//this->nX=largura/2;
	//this->nY=altura/2-50;

	this->nX=0;
	this->nY=vn;

	//this->nY=30;

	cheX=nX-(chsto);
	cheY=nY+nsto-lssto+lssto;

	chdX=nX+(chsto);
	chdY=nY+nsto-lssto+lssto;

	p1eX=nX-(enen/2);
	p1eY=nY;

	p2eX=nX-(enen/2)-((ftft-exex)/2)-exen;
	p2eY=nY;


	oseX=(p1eX+p2eX)/2;
	oseY=nY-(gsn-nsn);



	osdY = nY-(gsn-nsn);
	p1dX=nX+(enen/2);
	p1dY=nY;
	p2dX=nX+(enen/2)+((ftft-exex)/2)+exen;
	p2dY=nY;
	osdX = (p1dX+p2dX)/2;

	//olho esquerdo
	eneX = nX-(enen/2);
	eneY = nY+nse;
	exeX=eneX-exen;
	exeY=eneY;
	pseX=eneX-(exen/2);
	pseY=eneY-(pspi/2);
	pieX=eneX-(exen/2);
	pieY=eneY+(pspi/2);

	//olho direito
	endX = nX+(enen/2);
	endY = nY+nse;
	exdX=endX+exen;
	exdY=endY;
	psdX=endX+(exen/2);
	psdY=endY-(pspi/2);
	pidX=endX+(exen/2);
	pidY=endY+(pspi/2);
	//nariz
	mfeX=nX-(mfmf/2);
	mfeY=eneY+0.05*nsn;
	aleX=nX-(alal/2);
	aleY=nY+0.85*nsn;
	aceX=nX-(acac/2);
	aceY=nY+nsn;
	snX=nX;
	snY=nY+nsn;

	mfdX=nX+(mfmf/2);
	mfdY=eneY+0.05*nsn;
	aldX=nX+(alal/2);
	aldY=nY+0.85*nsn;
	acdX=nX+(acac/2);
	acdY=nY+nsn;

	//boca
	stoX=liX=lsX=nX;
	lsY=nY+nsto-lssto;
	liY=lsY+(2*lssto);
	stoY=lsY+lssto;

	//rugas olhos esquerdo
	varicaoROE=
	p6eX=exeX-2;
	p6eY=exeY;
	p7eX=p6eX-4;
	p7eY=p6eY;
	p8eX=p6eX-4;
	p8eY=p6eY;

	p3eX=p6eX;
	p3eY=p6eY-1.5;
	p4eX=p7eX;
	p4eY=p3eY-1.5;
	p5eX=p8eX;
	p5eY=p4eY-1.5;

	p9eX=p6eX;
	p9eY=p6eY+1.5;
	p10eX=p7eX;
	p10eY=p9eY+1.5;
	p11eX=p8eX;
	p11eY=p10eY+1.5;

	//rugas olhos direito
	p6dX=exdX+2;
	p6dY=exdY;
	p7dX=p6dX+4;
	p7dY=p6dY;
	p8dX=p6dX+4;
	p8dY=p6dY;

	p3dX=p6dX;
	p3dY=p6dY-1.5;
	p4dX=p7dX;
	p4dY=p3dY-1.5;
	p5dX=p8dX;
	p5dY=p4dY-1.5;

	p9dX=p6dX;
	p9dY=p6dY+1.5;
	p10dX=p7dX;
	p10dY=p9dY+1.5;
	p11dX=p8dX;
	p11dY=p10dY+1.5;

	//palpebra inferior esquerda
	p12eX=eneX;
	p12eY=(pieY+0.15*pior);
	oreX=p12eX-(0.45*exen);
	oreY=pieY+pior;
	p13eX=exeX;
	p13eY=(pieY+0.15*pior);

	//palpebra inferior direita
	p12dX=endX;
	p12dY=(pidY+0.15*pior);
	ordX=p12dX+(0.45*exen);
	ordY=pidY+pior;
	p13dX=exdX;
	p13dY=(pidY+0.15*pior);

	//contorno esquerdo(rosto)
	sleX=nX;
	sleY=stoY+stosl;
	treX=nX;
	veY=nY-vn;
	treY=veY+vtr;

	gneX=nX;
	gneY=nY+ngn;
	goeX=nX-(gogo/2);
	goeY=liY+((sleY-liY)/2);
	zyeX=nX-(zyzy/2);
	zyeY=oreY;
	teX=nX-(tt/2);
	teY=pieY+(pior/2);
	eueX=nX-(eueu/2);
	eueY=treY;
	veX=nX;
	veY=nY-vn;

	//contorno direito(rosto)
	sldX=nX;
	sldY=stoY+stosl;
	trdX=nX;
	trdY=vdY+vtr;
	vX=0;
	vY=0;

	gndX=nX;
	gndY=nY+ngn;
	godX=nX+(gogo/2);
	godY=liY+((sldY-liY)/2);
	zydX=nX+(zyzy/2);
	zydY=ordY;
	tdX=nX+(tt/2);
	tdY=pidY+(pior/2);
	eudX=nX+(eueu/2);
	eudY=trdY;
	vdX=nX;
	vdY=nY-vn;

	//rugas testa cima
	fteX=nX-0.5*ftft;
	fteY=nY-0.5*trg;

	ftdX=nX+0.5*ftft;
	ftdY=nY-0.5*trg;

	pt3cX=nX;
	pt3cY=treY+(0.5*trg);
	pt1cX=pt3cX-(0.5*ftft);
	pt1cY=pt3cY;
	pt2cX=pt3cX-(0.25*ftft);
	pt2cY=pt3cY+(0.1*trg);
	pt4cX=pt3cX+(0.25*ftft);
	pt4cY=pt3cY+(0.1*trg);
	pt5cX=pt3cX+(0.5*ftft);
	pt5cY=pt3cY;

	//rugas testa meio
	pt3mX=nX;
	pt3mY=treY+(0.35*trg);
	pt1mX=pt3mX-(0.5*ftft);
	pt1mY=pt3mY;
	pt2mX=pt3mX-(0.25*ftft);
	pt2mY=pt3mY+(0.1*trg);
	pt4mX=pt3mX+(0.25*ftft);
	pt4mY=pt3mY+(0.1*trg);
	pt5mX=pt3mX+(0.5*ftft);
	pt5mY=pt3mY;

	//rugas testa baixo
	pt3bX=nX;
	pt3bY=treY+(0.65*trg);
	pt1bX=pt3bX-(0.5*ftft);
	pt1bY=pt3bY;
	pt2bX=pt3bX-(0.25*ftft);
	pt2bY=pt3bY+(0.1*trg);
	pt4bX=pt3bX+(0.25*ftft);
	pt4bY=pt3bY+(0.1*trg);
	pt5bX=pt3bX+(0.5*ftft);
	pt5bY=pt3bY;

	//pupilas
	seX=nX;
	seY=eneY;
	pupilaeX=seX-pupilse;
	pupilaeY=oreY-pupilor;
	pupiladX=seX+pupilse;
	pupiladY=oreY-pupilor;
	pupilaR=0.6*pspi;

	//rugas sobrancelha
	pis1eX=p1eX+0.84*(nX-p1eX);
	pis1eY=nY-0.06*nse;
	pis2eX=p1eX+0.87*(nX-p1eX);
	pis2eY=nY+0.2*nse;
	pis3eX=p1eX+0.62*(nX-p1eX);
	pis3eY=nY+0.46*nse;

	pis1cX=nX;
	pis1cY=pis1eY;
	pis2cX=nX;
	pis3cX=nX;
	pis3cY=pis3eY;
	pis2cY=pis3cY-0.5*(pis3cY-pis1cY);

	pis1dX=p1dX+0.84*(nX-p1dX);
	pis1dY=pis1eY;
	pis2dX=p1dX+0.87*(nX-p1dX);
	pis2dY=pis2eY;
	pis3dX=p1dX+0.62*(nX-p1dX);
	pis3dY=pis3eY;

	//rugas nariz superior
	psn1cX=mfeX;
	psn1cY=nY+0.25*nse;
	psn2cX=nX;
	psn2cY=nY+0.05*nse;
	psn3cX=mfdX;
	psn3cY=nY+0.25*nse;

	psn1mX=mfeX;
	psn1mY=nY+0.5*nse;
	psn2mX=nX;
	psn2mY=nY+0.6*nse;
	psn3mX=mfdX;
	psn3mY=nY+0.5*nse;

	psn1bX=mfeX;
	psn1bY=nY+0.75*nse;
	psn2bX=nX;
	psn2bY=seY;
	psn3bX=mfdX;
	psn3bY=nY+0.75*nse;

	//rugas nariz inferior
	pn1eX=aleX+0.22*alal;
	pn1eY=nY+0.27*nsn;
	pn2eX=aleX+0.24*alal;
	pn2eY=nY+0.34*nsn;
	pn3eX=aleX+0.4*alal;
	pn3eY=nY+0.39*nsn;

	pn4eX=aleX+0.2*alal;
	pn4eY=nY+0.36*nsn;
	pn5eX=aleX+0.26*alal;
	pn5eY=nY+0.39*nsn;
	pn6eX=aleX+0.28*alal;
	pn6eY=nY+0.46*nsn;

	pn1dX=aldX-0.22*alal;
	pn1dY=nY+0.27*nsn;
	pn2dX=aldX-0.24*alal;
	pn2dY=nY+0.34*nsn;
	pn3dX=aldX-0.4*alal;
	pn3dY=nY+0.39*nsn;

	pn4dX=aldX-0.2*alal;
	pn4dY=nY+0.36*nsn;
	pn5dX=aldX-0.26*alal;
	pn5dY=nY+0.39*nsn;
	pn6dX=aldX-0.28*alal;
	pn6dY=nY+0.46*nsn;

	//rugas bochechas
	pb1eX=aleX+0.1*(aleX-cheX);
	pb1eY=mfeY+0.6*(snY-mfeY);
	pb2eX=aleX-0.5*(aleX-cheX);
	pb2eY=pb1eY+0.15*(cheY-pb1eY);
	pb3eX=aleX-0.8*(aleX-cheX);
	pb3eY=pb1eY+0.35*(cheY-pb1eY);
	pb4eX=aleX-1.1*(aleX-cheX);
	pb4eY=pb1eY+0.55*(cheY-pb1eY);
	pb5eX=aleX-1.1*(aleX-cheX);
	pb5eY=pb1eY+0.8*(cheY-pb1eY);

	pb1dX=aldX+0.1*(aldX-chdX);
	pb1dY=pb1eY;
	pb2dX=aldX-0.5*(aldX-chdX);
	pb2dY=pb2eY;
	pb3dX=aldX-0.8*(aldX-chdX);
	pb3dY=pb3eY;
	pb4dX=aldX-1.1*(aldX-chdX);
	pb4dY=pb4eY;
	pb5dX=aldX-1.1*(aldX-chdX);
	pb5dY=pb5eY;

	//nazolabial
	pnl1eX=lsX-0.83*(lsX-cheX);
	pnl1eY=aceY;
	pnl3eX=lsX-1.2*(lsX-cheX);
	pnl3eY=lsY+0.5*(cheY-lsY);
	pnl2eX=pnl3eX-0.1*(pnl1eX-pnl3eX);
	pnl2eY=pnl1eY+0.61*(pnl3eY-pnl1eY);

	pnl1dX=lsX-0.83*(lsX-chdX);
	pnl1dY=acdY;
	pnl3dX=lsX-1.2*(lsX-chdX);
	pnl3dY=lsY+0.5*(cheY-lsY);
	pnl2dX=pnl3dX-0.1*(pnl1dX-pnl3dX);
	pnl2dY=pnl1dY+0.61*(pnl3dY-pnl1dY);

	//nazolabialInterna
	pnli1eX=lsX-0.09*(lsX-cheX);
	pnli1eY=snY+0.13*(lsY-snY);
	pnli3eX=lsX-0.16*(lsX-cheX);
	pnli3eY=snY+0.8*(lsY-snY);
	pnli2eX=lsX-0.18*(lsX-cheX);
	pnli2eY=snY+0.43*(lsY-snY);

	pnli1dX=lsX-0.09*(lsX-chdX);
	pnli1dY=snY+0.13*(lsY-snY);
	pnli3dX=lsX-0.16*(lsX-chdX);
	pnli3dY=snY+0.8*(lsY-snY);
	pnli2dX=lsX-0.18*(lsX-chdX);
	pnli2dY=snY+0.43*(lsY-snY);

}

void Antropometria::getSombrancelhaEsquerda(GLfloat se[8][3])
{
	se[0][0]=p1eX; se[0][1]=p1eY; se[0][2]=0.0;//p1
	se[1][0]=(p1eX+oseX)/2; se[1][1]=(p1eY+oseY)/2; se[1][2]=0.0;//pas1
	se[2][0]=(p1eX+oseX)/2; se[2][1]= (p1eY+oseY)/2; se[2][2]=0.0;//pas1
	se[3][0]=oseX; se[3][1]= oseY; se[3][2]=0.0;//os
	se[4][0]=oseX; se[4][1]= oseY; se[4][2]=0.0;//os
	se[5][0]=(oseX+p2eX)/2; se[5][1]= (oseY+p2eY)/2; se[5][2]=0.0;//pas2
	se[6][0]=(oseX+p2eX)/2; se[6][1]= (oseY+p2eY)/2; se[6][2]=0.0;//pas2
	se[7][0]=p2eX; se[7][1]= p2eY; se[7][2]=0.0;//p2
}

void Antropometria::getSombrancelhaDireita(GLfloat sd[8][3])
{
	sd[0][0]=p1dX; sd[0][1]=p1dY; sd[0][2]=0.0;//p1
	sd[1][0]=(p1dX+osdX)/2; sd[1][1]=(p1dY+osdY)/2; sd[1][2]=0.0;//pas1
	sd[2][0]=(p1dX+osdX)/2; sd[2][1]= (p1dY+osdY)/2; sd[2][2]=0.0;//pas1
	sd[3][0]=osdX; sd[3][1]= osdY; sd[3][2]=0.0;//os
	sd[4][0]=osdX; sd[4][1]= osdY; sd[4][2]=0.0;//os
	sd[5][0]=(osdX+p2dX)/2; sd[5][1]= (osdY+p2dY)/2; sd[5][2]=0.0;//pas2
	sd[6][0]=(osdX+p2dX)/2; sd[6][1]= (osdY+p2dY)/2; sd[6][2]=0.0;//pas2
	sd[7][0]=p2dX; sd[7][1]= p2dY; sd[7][2]=0.0;//p2
}

void Antropometria::getOlhoEsquerdoCima(GLfloat oec[4][3])
{
	oec[0][0]=exeX; oec[0][1]= exeY; oec[0][2]=0.0;//ex
	oec[1][0]=pseX; oec[1][1]= pseY; oec[1][2]=0.0;//ps
	oec[2][0]=pseX; oec[2][1]= pseY; oec[2][2]=0.0;//ps
	oec[3][0]=eneX; oec[3][1]= eneY; oec[3][2]=0.0;//en
}

void Antropometria::getOlhoEsquerdoBaixo(GLfloat oeb[4][3])
{
	oeb[0][0]=exeX; oeb[0][1]=exeY; oeb[0][2]=0.0;//ex
	oeb[1][0]=pieX; oeb[1][1]= pieY; oeb[1][2]=0.0;//pi
	oeb[2][0]=pieX; oeb[2][1]= pieY; oeb[2][2]=0.0;//pi
	oeb[3][0]=eneX; oeb[3][1]= eneY; oeb[3][2]=0.0;//en
}

void Antropometria::getOlhoDireitoCima(GLfloat odc[4][3])
{
	odc[0][0]=exdX; odc[0][1]= exdY; odc[0][2]=0.0;//ex
	odc[1][0]=psdX; odc[1][1]= psdY; odc[1][2]=0.0;//ps
	odc[2][0]=psdX; odc[2][1]= psdY; odc[2][2]=0.0;//ps
	odc[3][0]=endX; odc[3][1]= endY; odc[3][2]=0.0;//en
}

void Antropometria::getOlhoDireitoBaixo(GLfloat odb[4][3])
{
	odb[0][0]=exdX; odb[0][1]= exdY; odb[0][2]=0.0;//ex
	odb[1][0]=pidX; odb[1][1]= pidY; odb[1][2]=0.0;//pi
	odb[2][0]=pidX; odb[2][1]= pidY; odb[2][2]=0.0;//pi
	odb[3][0]=endX; odb[3][1]= endY; odb[3][2]=0.0;//en
}

void Antropometria::getNarizEsquerda(GLfloat ne[6][3])
{
	ne[0][0]=mfeX; ne[0][1]= mfeY; ne[0][2]=0.0;//mf
	ne[1][0]=aleX; ne[1][1]= aleY; ne[1][2]=0.0;//al
	ne[2][0]=aleX; ne[2][1]= aleY; ne[2][2]=0.0;//al
	ne[3][0]=aceX; ne[3][1]= aceY; ne[3][2]=0.0;//ac
	ne[4][0]=aceX; ne[4][1]= aceY; ne[4][2]=0.0;//ac
	ne[5][0]=snX; ne[5][1]= snY; ne[5][2]=0.0;//sn
}

void Antropometria::getNarizDireita(GLfloat nd[4][3])
{
	nd[0][0]=mfdX; nd[0][1]= mfdY; nd[0][2]=0.0;//mf
	nd[1][0]=aldX; nd[1][1]= aldY; nd[1][2]=0.0;//al
	nd[2][0]=aldX; nd[2][1]= aldY; nd[2][2]=0.0;//al
	nd[3][0]=acdX; nd[3][1]= acdY; nd[3][2]=0.0;//ac
	nd[4][0]=acdX; nd[4][1]= acdY; nd[4][2]=0.0;//ac
	nd[5][0]=snX; nd[5][1]= snY; nd[5][2]=0.0;//sn
}

void Antropometria::getLabioSuperiorCima(GLfloat bc[4][3])
{
	bc[0][0]=cheX; bc[0][1]= cheY; bc[0][2]=0.0;//ch(e)
	bc[1][0]=lsX; bc[1][1]= lsY; bc[1][2]=0.0;//ls
	bc[2][0]=lsX; bc[2][1]= lsY; bc[2][2]=0.0;//ls
	bc[3][0]=chdX; bc[3][1]= chdY; bc[3][2]=0.0;//ch(d)
}

void Antropometria::getLabioSuperiorBaixo(GLfloat bm[4][3])
{
	bm[0][0]=cheX; bm[0][1]= cheY; bm[0][2]=0.0;//ch(e)
	bm[1][0]=stoX; bm[1][1]= stoY; bm[1][2]=0.0;//sto
	bm[2][0]=stoX; bm[2][1]= stoY; bm[2][2]=0.0;//sto
	bm[3][0]=chdX; bm[3][1]= chdY; bm[3][2]=0.0;//ch(d)
}

void Antropometria::getLabioInferiorCima(GLfloat bm[4][3])
{
	bm[0][0]=cheX; bm[0][1]= cheY; bm[0][2]=0.0;//ch(e)
	bm[1][0]=stoX; bm[1][1]= stoY; bm[1][2]=0.0;//sto
	bm[2][0]=stoX; bm[2][1]= stoY; bm[2][2]=0.0;//sto
	bm[3][0]=chdX; bm[3][1]= chdY; bm[3][2]=0.0;//ch(d)
}

void Antropometria::getLabioInferiorBaixo(GLfloat bb[4][3])
{
	bb[0][0]=cheX; bb[0][1]= cheY; bb[0][2]=0.0;//ch(e)
	bb[1][0]=liX; bb[1][1]= liY; bb[1][2]=0.0;//li
	bb[2][0]=liX; bb[2][1]= liY; bb[2][2]=0.0;//li
	bb[3][0]=chdX; bb[3][1]= chdY; bb[3][2]=0.0;//ch(d)
}

void Antropometria::getRugasOlhoEsquerdoCima(GLfloat roec[4][3])
{
	roec[0][0]=p3eX; roec[0][1]= p3eY; roec[0][2]=0.0;//p3
	roec[1][0]=p4eX; roec[1][1]= p4eY; roec[1][2]=0.0;//p4
	roec[2][0]=p4eX; roec[2][1]= p4eY; roec[2][2]=0.0;//p4
	roec[3][0]=p5eX; roec[3][1]= p5eY; roec[3][2]=0.0;//p5

}
void Antropometria::getRugasOlhoEsquerdoMeio(GLfloat roem[4][3])
{
	roem[0][0]=p6eX; roem[0][1]= p6eY; roem[0][2]=0.0;//p6
	roem[1][0]=p7eX; roem[1][1]= p7eY; roem[1][2]=0.0;//p7
	roem[2][0]=p7eX; roem[2][1]= p7eY; roem[2][2]=0.0;//p7
	roem[3][0]=p8eX; roem[3][1]= p8eY; roem[3][2]=0.0;//p8

}
void Antropometria::getRugasOlhoEsquerdoBaixo(GLfloat roeb[4][3])
{
	roeb[0][0]=p9eX; roeb[0][1]= p9eY; roeb[0][2]=0.0;//p9
	roeb[1][0]=p10eX; roeb[1][1]= p10eY; roeb[1][2]=0.0;//p10
	roeb[2][0]=p10eX; roeb[2][1]= p10eY; roeb[2][2]=0.0;//p10
	roeb[3][0]=p11eX; roeb[3][1]= p11eY; roeb[3][2]=0.0;//p11
}

void Antropometria::getRugasOlhoDireitoCima(GLfloat rodc[4][3])
{
	rodc[0][0]=p3dX; rodc[0][1]= p3dY; rodc[0][2]=0.0;//p3
	rodc[1][0]=p4dX; rodc[1][1]= p4dY; rodc[1][2]=0.0;//p4
	rodc[2][0]=p4dX; rodc[2][1]= p4dY; rodc[2][2]=0.0;//p4
	rodc[3][0]=p5dX; rodc[3][1]= p5dY; rodc[3][2]=0.0;//p5
}
void Antropometria::getRugasOlhoDireitoMeio(GLfloat rodm[4][3])
{
	rodm[0][0]=p6dX; rodm[0][1]= p6eY; rodm[0][2]=0.0;//p6
	rodm[1][0]=p7dX; rodm[1][1]= p7eY; rodm[1][2]=0.0;//p7
	rodm[2][0]=p7dX; rodm[2][1]= p7eY; rodm[2][2]=0.0;//p7
	rodm[3][0]=p8dX; rodm[3][1]= p8eY; rodm[3][2]=0.0;//p8
}
void Antropometria::getRugasOlhoDireitoBaixo(GLfloat rodb[4][3])
{
	rodb[0][0]=p9dX; rodb[0][1]= p9dY; rodb[0][2]=0.0;//p9
	rodb[1][0]=p10dX; rodb[1][1]= p10dY; rodb[1][2]=0.0;//p10
	rodb[2][0]=p10dX; rodb[2][1]= p10dY; rodb[2][2]=0.0;//p10
	rodb[3][0]=p11dX; rodb[3][1]= p11dY; rodb[3][2]=0.0;//p11
}
void Antropometria::getPalpebraEsquerda(GLfloat pe[4][3])
{
	pe[0][0]=p12eX; pe[0][1]=p12eY; pe[0][2]=0.0;//p12
	pe[1][0]=oreX; pe[1][1]= oreY; pe[1][2]=0.0;//or
	pe[2][0]=oreX; pe[2][1]= oreY; pe[2][2]=0.0;//or
	pe[3][0]=p13eX; pe[3][1]= p13eY; pe[3][2]=0.0;//p13
}
void Antropometria::getPalpebraDireita(GLfloat pd[4][3])
{
	pd[0][0]=p12dX; pd[0][1]=p12dY; pd[0][2]=0.0;//p12
	pd[1][0]=ordX; pd[1][1]= ordY; pd[1][2]=0.0;//or
	pd[2][0]=ordX; pd[2][1]= ordY; pd[2][2]=0.0;//or
	pd[3][0]=p13dX; pd[3][1]= p13dY; pd[3][2]=0.0;//p13
}

void Antropometria::getContornoEsquerdoBaixo(GLfloat ceb[4][3])
{
	ceb[0][0]=gneX; ceb[0][1]=gneY; ceb[0][2]=0.0;//gn
	ceb[1][0]=goeX; ceb[1][1]=goeY; ceb[1][2]=0.0;//go
	ceb[2][0]=goeX; ceb[2][1]=goeY; ceb[2][2]=0.0;//zy
	ceb[3][0]=teX; ceb[3][1]=teY; ceb[4][2]=0.0;//t
}

void Antropometria::getContornoEsquerdoCima(GLfloat cec[4][3])
{
	cec[0][0]=teX; cec[0][1]=teY; cec[0][2]=0.0;//t
	cec[1][0]=eueX; cec[1][1]=eueY; cec[1][2]=0.0;//eu
	cec[2][0]=eueX; cec[2][1]=eueY; cec[2][2]=0.0;//eu
	cec[3][0]=veX; cec[3][1]=veY; cec[3][2]=0.0;//v
}


void Antropometria::getContornoDireitoBaixo(GLfloat cdb[4][3])
{
	cdb[0][0]=gndX; cdb[0][1]=gndY; cdb[0][2]=0.0;//gn
	cdb[1][0]=godX; cdb[1][1]=godY; cdb[1][2]=0.0;//go
	cdb[2][0]=godX; cdb[2][1]=godY; cdb[2][2]=0.0;//zy
	cdb[3][0]=tdX; cdb[3][1]=tdY; cdb[4][2]=0.0;//t
}

void Antropometria::getContornoDireitoCima(GLfloat cdc[4][3])
{
	cdc[0][0]=tdX; cdc[0][1]=tdY; cdc[0][2]=0.0;//t
	cdc[1][0]=eudX; cdc[1][1]=eudY; cdc[1][2]=0.0;//eu
	cdc[2][0]=eudX; cdc[2][1]=eudY; cdc[2][2]=0.0;//eu
	cdc[3][0]=vdX; cdc[3][1]=vdY; cdc[3][2]=0.0;//v
}

void Antropometria::getRugaTestaCima(GLfloat rtc[8][3])
{
	rtc[0][0]=pt1cX; rtc[0][1]= pt1cY; rtc[0][2]=0.0;//pt1
	rtc[1][0]=pt2cX; rtc[1][1]= pt2cY; rtc[1][2]=0.0;//pt2
	rtc[2][0]=pt2cX; rtc[2][1]= pt2cY; rtc[2][2]=0.0;//pt2
	rtc[3][0]=pt3cX; rtc[3][1]= pt3cY; rtc[3][2]=0.0;//pt3
	rtc[4][0]=pt3cX; rtc[4][1]= pt3cY; rtc[4][2]=0.0;//pt3
	rtc[5][0]=pt4cX; rtc[5][1]= pt4cY; rtc[5][2]=0.0;//pt4
	rtc[6][0]=pt4cX; rtc[6][1]= pt4cY; rtc[6][2]=0.0;//pt4
	rtc[7][0]=pt5cX; rtc[7][1]= pt5cY; rtc[7][2]=0.0;//pt5
}
void Antropometria::getRugaTestaMeio(GLfloat rtm[8][3])
{
	rtm[0][0]=pt1mX; rtm[0][1]= pt1mY; rtm[0][2]=0.0;//pt1
	rtm[1][0]=pt2mX; rtm[1][1]= pt2mY; rtm[1][2]=0.0;//pt2
	rtm[2][0]=pt2mX; rtm[2][1]= pt2mY; rtm[2][2]=0.0;//pt2
	rtm[3][0]=pt3mX; rtm[3][1]= pt3mY; rtm[3][2]=0.0;//pt3
	rtm[4][0]=pt3mX; rtm[4][1]= pt3mY; rtm[4][2]=0.0;//pt3
	rtm[5][0]=pt4mX; rtm[5][1]= pt4mY; rtm[5][2]=0.0;//pt4
	rtm[6][0]=pt4mX; rtm[6][1]= pt4mY; rtm[6][2]=0.0;//pt4
	rtm[7][0]=pt5mX; rtm[7][1]= pt5mY; rtm[7][2]=0.0;//pt5
}
void Antropometria::getRugaTestaBaixo(GLfloat rtb[8][3])
{
	rtb[0][0]=pt1bX; rtb[0][1]= pt1bY; rtb[0][2]=0.0;//pt1
	rtb[1][0]=pt2bX; rtb[1][1]= pt2bY; rtb[1][2]=0.0;//pt2
	rtb[2][0]=pt2bX; rtb[2][1]= pt2bY; rtb[2][2]=0.0;//pt2
	rtb[3][0]=pt3bX; rtb[3][1]= pt3bY; rtb[3][2]=0.0;//pt3
	rtb[4][0]=pt3bX; rtb[4][1]= pt3bY; rtb[4][2]=0.0;//pt3
	rtb[5][0]=pt4bX; rtb[5][1]= pt4bY; rtb[5][2]=0.0;//pt4
	rtb[6][0]=pt4bX; rtb[6][1]= pt4bY; rtb[6][2]=0.0;//pt4
	rtb[7][0]=pt5bX; rtb[7][1]= pt5bY; rtb[7][2]=0.0;//pt5
}

void Antropometria::getRugaCentroTestaCima(GLfloat rctc[4][3])
{
	rctc[0][0]=pt2cX; rctc[0][1]= pt2cY; rctc[0][2]=0.0;//pt2
	rctc[1][0]=pt3cX; rctc[1][1]= pt3cY; rctc[1][2]=0.0;//pt3
	rctc[2][0]=pt3cX; rctc[2][1]= pt3cY; rctc[2][2]=0.0;//pt3
	rctc[3][0]=pt4cX; rctc[3][1]= pt4cY; rctc[3][2]=0.0;//pt4
}
void Antropometria::getRugaCentroTestaMeio(GLfloat rctm[4][3])
{
	rctm[0][0]=pt2mX; rctm[0][1]= pt2mY; rctm[0][2]=0.0;//pt2
	rctm[1][0]=pt3mX; rctm[1][1]= pt3mY; rctm[1][2]=0.0;//pt3
	rctm[2][0]=pt3mX; rctm[2][1]= pt3mY; rctm[2][2]=0.0;//pt3
	rctm[3][0]=pt4mX; rctm[3][1]= pt4mY; rctm[3][2]=0.0;//pt4
}
void Antropometria::getRugaCentroTestaBaixo(GLfloat rctb[4][3])
{
	rctb[0][0]=pt2bX; rctb[0][1]= pt2bY; rctb[0][2]=0.0;//pt2
	rctb[1][0]=pt3bX; rctb[1][1]= pt3bY; rctb[1][2]=0.0;//pt3
	rctb[2][0]=pt3bX; rctb[2][1]= pt3bY; rctb[2][2]=0.0;//pt3
	rctb[3][0]=pt4bX; rctb[3][1]= pt4bY; rctb[3][2]=0.0;//pt4
}

void Antropometria::getPupilaEsquerda(GLfloat pe[1][3])
{
	pe[0][0]=pupilaeX; pe[0][1]= pupilaeY; pe[0][2]=0.0;//pupila
}

void Antropometria::getPupilaDireita(GLfloat pd[1][3])
{
	pd[0][0]=pupiladX; pd[0][1]= pupiladY; pd[0][2]=0.0;//pupila
}

GLfloat Antropometria::getRaioPupila()
{
	return pupilaR;
}

void Antropometria::getAuxiliares(GLfloat aux[7][3])
{
	aux[0][0]=nX; aux[0][1]= nY; aux[0][2]=0.0;//n
	aux[1][0]=fteX; aux[1][1]= fteY; aux[1][2]=0.0;//ft(e)
	aux[2][0]=ftdX; aux[2][1]= ftdY; aux[2][2]=0.0;//ft(d)
	aux[3][0]=seX; aux[3][1]= seY; aux[3][2]=0.0;//se
	aux[4][0]=vX+1.0; aux[4][1]= vY+1.0; aux[4][2]=0.0;//v
	aux[5][0]=eueX; aux[5][1]= eueY; aux[5][2]=0.0;//eu(e)
	aux[6][0]=eudX; aux[6][1]= eudY; aux[6][2]=0.0;//eu(d)
}
//
void Antropometria::getRugaInteriorSobrancelhaEsquerda(GLfloat rsie[4][3])
{
	rsie[0][0]=pis1eX; rsie[0][1]= pis1eY; rsie[0][2]=0.0;//pis1
	rsie[1][0]=pis2eX; rsie[1][1]= pis2eY; rsie[1][2]=0.0;//pis2
	rsie[2][0]=pis2eX; rsie[2][1]= pis2eY; rsie[2][2]=0.0;//pis2
	rsie[3][0]=pis3eX; rsie[3][1]= pis3eY; rsie[3][2]=0.0;//pis3
}

void Antropometria::getRugaInteriorSobrancelhaCentro(GLfloat rsic[4][3])
{
	rsic[0][0]=pis1cX; rsic[0][1]= pis1cY; rsic[0][2]=0.0;//pis1
	rsic[1][0]=pis2cX; rsic[1][1]= pis2cY; rsic[1][2]=0.0;//pis2
	rsic[2][0]=pis2cX; rsic[2][1]= pis2cY; rsic[2][2]=0.0;//pis2
	rsic[3][0]=pis3cX; rsic[3][1]= pis3cY; rsic[3][2]=0.0;//pis3
}

void Antropometria::getRugaInteriorSobrancelhaDireita(GLfloat rsid[4][3])
{
	rsid[0][0]=pis1dX; rsid[0][1]= pis1dY; rsid[0][2]=0.0;//pis1
	rsid[1][0]=pis2dX; rsid[1][1]= pis2dY; rsid[1][2]=0.0;//pis2
	rsid[2][0]=pis2dX; rsid[2][1]= pis2dY; rsid[2][2]=0.0;//pis2
	rsid[3][0]=pis3dX; rsid[3][1]= pis3dY; rsid[3][2]=0.0;//pis3
}

//
void Antropometria::getRugaSobrancelhaNarizCima(GLfloat rsnc[4][3])
{
	rsnc[0][0]=psn1cX; rsnc[0][1]= psn1cY; rsnc[0][2]=0.0;//psn1
	rsnc[1][0]=psn2cX; rsnc[1][1]= psn2cY; rsnc[1][2]=0.0;//psn2
	rsnc[2][0]=psn2cX; rsnc[2][1]= psn2cY; rsnc[2][2]=0.0;//psn2
	rsnc[3][0]=psn3cX; rsnc[3][1]= psn3cY; rsnc[3][2]=0.0;//psn3
}

void Antropometria::getRugaSobrancelhaNarizMeio(GLfloat rsnm[4][3])
{
	rsnm[0][0]=psn1mX; rsnm[0][1]= psn1mY; rsnm[0][2]=0.0;//psn1
	rsnm[1][0]=psn2mX; rsnm[1][1]= psn2mY; rsnm[1][2]=0.0;//psn2
	rsnm[2][0]=psn2mX; rsnm[2][1]= psn2mY; rsnm[2][2]=0.0;//psn2
	rsnm[3][0]=psn3mX; rsnm[3][1]= psn3mY; rsnm[3][2]=0.0;//psn3
}

void Antropometria::getRugaSobrancelhaNarizBaixo(GLfloat rsnb[4][3])
{
	rsnb[0][0]=psn1bX; rsnb[0][1]= psn1bY; rsnb[0][2]=0.0;//psn1
	rsnb[1][0]=psn2bX; rsnb[1][1]= psn2bY; rsnb[1][2]=0.0;//psn2
	rsnb[2][0]=psn2bX; rsnb[2][1]= psn2bY; rsnb[2][2]=0.0;//psn2
	rsnb[3][0]=psn3bX; rsnb[3][1]= psn3bY; rsnb[3][2]=0.0;//psn3
}

//
void Antropometria::getRugaNarizEsquerdaCima(GLfloat rnec[4][3])
{
	rnec[0][0]=pn1eX; rnec[0][1]= pn1eY; rnec[0][2]=0.0;//pn1
	rnec[1][0]=pn2eX; rnec[1][1]= pn2eY; rnec[1][2]=0.0;//pn2
	rnec[2][0]=pn2eX; rnec[2][1]= pn2eY; rnec[2][2]=0.0;//pn2
	rnec[3][0]=pn3eX; rnec[3][1]= pn3eY; rnec[3][2]=0.0;//pn3
}

void Antropometria::getRugaNarizEsquerdaBaixo(GLfloat rneb[4][3])
{
	rneb[0][0]=pn4eX; rneb[0][1]= pn4eY; rneb[0][2]=0.0;//pn1
	rneb[1][0]=pn5eX; rneb[1][1]= pn5eY; rneb[1][2]=0.0;//pn2
	rneb[2][0]=pn5eX; rneb[2][1]= pn5eY; rneb[2][2]=0.0;//pn2
	rneb[3][0]=pn6eX; rneb[3][1]= pn6eY; rneb[3][2]=0.0;//pn3
}

void Antropometria::getRugaNarizDireitaCima(GLfloat rndc[4][3])
{
	rndc[0][0]=pn1dX; rndc[0][1]= pn1dY; rndc[0][2]=0.0;//pn1
	rndc[1][0]=pn2dX; rndc[1][1]= pn2dY; rndc[1][2]=0.0;//pn2
	rndc[2][0]=pn2dX; rndc[2][1]= pn2dY; rndc[2][2]=0.0;//pn2
	rndc[3][0]=pn3dX; rndc[3][1]= pn3dY; rndc[3][2]=0.0;//pn3
}

void Antropometria::getRugaNarizDireitaBaixo(GLfloat rndb[4][3])
{
	rndb[0][0]=pn4dX; rndb[0][1]= pn4dY; rndb[0][2]=0.0;//pn1
	rndb[1][0]=pn5dX; rndb[1][1]= pn5dY; rndb[1][2]=0.0;//pn2
	rndb[2][0]=pn5dX; rndb[2][1]= pn5dY; rndb[2][2]=0.0;//pn2
	rndb[3][0]=pn6dX; rndb[3][1]= pn6dY; rndb[3][2]=0.0;//pn3
}

//
void Antropometria::getRugaBochechaEsquerda(GLfloat rbe[8][3])
{
	rbe[0][0]=pb1eX; rbe[0][1]= pb1eY; rbe[0][2]=0.0;//pb1
	rbe[1][0]=pb2eX; rbe[1][1]= pb2eY; rbe[1][2]=0.0;//pb2
	rbe[2][0]=pb2eX; rbe[2][1]= pb2eY; rbe[2][2]=0.0;//pb2
	rbe[3][0]=pb3eX; rbe[3][1]= pb3eY; rbe[3][2]=0.0;//pb3
	rbe[4][0]=pb3eX; rbe[4][1]= pb3eY; rbe[4][2]=0.0;//pb3
	rbe[5][0]=pb4eX; rbe[5][1]= pb4eY; rbe[5][2]=0.0;//pb4
	rbe[6][0]=pb4eX; rbe[6][1]= pb4eY; rbe[6][2]=0.0;//pb4
	rbe[7][0]=pb5eX; rbe[7][1]= pb5eY; rbe[7][2]=0.0;//pb5
}

void Antropometria::getRugaBochechaDireita(GLfloat rbd[8][3])
{
	rbd[0][0]=pb1dX; rbd[0][1]= pb1dY; rbd[0][2]=0.0;//pb1
	rbd[1][0]=pb2dX; rbd[1][1]= pb2dY; rbd[1][2]=0.0;//pb2
	rbd[2][0]=pb2dX; rbd[2][1]= pb2dY; rbd[2][2]=0.0;//pb2
	rbd[3][0]=pb3dX; rbd[3][1]= pb3dY; rbd[3][2]=0.0;//pb3
	rbd[4][0]=pb3dX; rbd[4][1]= pb3dY; rbd[4][2]=0.0;//pb3
	rbd[5][0]=pb4dX; rbd[5][1]= pb4dY; rbd[5][2]=0.0;//pb4
	rbd[6][0]=pb4dX; rbd[6][1]= pb4dY; rbd[6][2]=0.0;//pb4
	rbd[7][0]=pb5dX; rbd[7][1]= pb5dY; rbd[7][2]=0.0;//pb5
}

void Antropometria::getNasolabialEsquerda(GLfloat rnle[4][3])
{
	rnle[0][0]=pnl1eX; rnle[0][1]= pnl1eY; rnle[0][2]=0.0;
	rnle[1][0]=pnl2eX; rnle[1][1]= pnl2eY; rnle[1][2]=0.0;
	rnle[2][0]=pnl2eX; rnle[2][1]= pnl2eY; rnle[2][2]=0.0;
	rnle[3][0]=pnl3eX; rnle[3][1]= pnl3eY; rnle[3][2]=0.0;
}

void Antropometria::getNasolabialDireita(GLfloat rnld[4][3])
{
	rnld[0][0]=pnl1dX; rnld[0][1]= pnl1dY; rnld[0][2]=0.0;
	rnld[1][0]=pnl2dX; rnld[1][1]= pnl2dY; rnld[1][2]=0.0;
	rnld[2][0]=pnl2dX; rnld[2][1]= pnl2dY; rnld[2][2]=0.0;
	rnld[3][0]=pnl3dX; rnld[3][1]= pnl3dY; rnld[3][2]=0.0;
}
void Antropometria::getNasolabialInternaEsquerda(GLfloat rnlie[4][3])
{
	rnlie[0][0]=pnli1eX; rnlie[0][1]= pnli1eY; rnlie[0][2]=0.0;
	rnlie[1][0]=pnli2eX; rnlie[1][1]= pnli2eY; rnlie[1][2]=0.0;
	rnlie[2][0]=pnli2eX; rnlie[2][1]= pnli2eY; rnlie[2][2]=0.0;
	rnlie[3][0]=pnli3eX; rnlie[3][1]= pnli3eY; rnlie[3][2]=0.0;
}

void Antropometria::getNasolabialInternaDireita(GLfloat rnlid[4][3])
{
	rnlid[0][0]=pnli1dX; rnlid[0][1]= pnli1dY; rnlid[0][2]=0.0;
	rnlid[1][0]=pnli2dX; rnlid[1][1]= pnli2dY; rnlid[1][2]=0.0;
	rnlid[2][0]=pnli2dX; rnlid[2][1]= pnli2dY; rnlid[2][2]=0.0;
	rnlid[3][0]=pnli3dX; rnlid[3][1]= pnli3dY; rnlid[3][2]=0.0;
}
