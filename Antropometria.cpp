#include "Antropometria.h"


using namespace std;
GLfloat RafaPontos[281];
Grafo gr(1000);
Antropometria::Antropometria(GLint altura, GLint largura, GLint etinia,Grafo g) {
    gr=g;
    lerPontos();
    //g.buscaAndOr(g.n[0], RafaPontos);
	this->altura = altura;
	this->largura = largura;
	if (etinia == caucasiano) {
		caucasianoAmericano();
	} else //if(etinia==afro)
	{
		afroAmericano();
	}

	calculaMedidas();
}

Antropometria::~Antropometria() {
}

void Antropometria::caucasianoAmericano() {
	//utilizando
	alturaCabeca = 229.4;
	enen = 33.3;
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
	tt = 136.8; //146.8
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
	nse = ven - vn;
}

void Antropometria::afroAmericano() {
	alturaCabeca = 229.4;
	enen = 35.8;
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
	snsn = 6.9;
	//
	ngn = 125.9;
	lsgn = 33.1; //conferir
	//
	nsto = 78.0;
	chsto = 33.1;
	lssto = 13.6;
	//
	pior = 8.1;	//conferir
	//
	eueu = 148.8;
	tt = 143.4;
	vtr = 43.3;
	vg = 200.0;	//conferir
	zyzy = 138.7;
	gogo = 104.2;
	stosl = 19.7;	//conferir
	trg = 61.8;
	//
	pupilse = 33.4;	//conferir
	pupilor = 12.6;	//conferir
	pupilos = 24.2;	//conferir
	//
	nse = nY + nse;
}

void Antropometria::lerPontos(){

            /*ifstream infilestream;
            float p;
            string line;
            infilestream.open("PontosRafael.txt");
            infilestream >> RafaPontos[1];
            infilestream >> line;
            infilestream >> line;
            for(int x=1;x<281;x++){
                infilestream >> RafaPontos[x];
                infilestream >> line;
                infilestream >> line;
//              /  cout << line << ":" << RafaPontos[x] <<"\n";

            }
            infilestream.close();*/
        }

void Antropometria::calculaMedidas() {
	//this->nX=largura/2;
	//this->nY=altura/2-50;

	this->nX = 0;
	this->nY = vn;
    srand(time(NULL));
    int desvio = 1;
    	//this->nY=30;
    gr.buscaAndOr(gr.n[0], RafaPontos);
    cheX	=	RafaPontos[	0	]  ; desvio = 0.5;
    cheY	=	RafaPontos[	1	] ; desvio = 0.5;
    chdX	=	RafaPontos[	2	]  ; desvio = 0.5;
    chdY	=	RafaPontos[	3	] ; desvio = 0.5;
    p1eX	=	RafaPontos[	4	]  ; desvio = 0.5;
    p1eY	=	RafaPontos[	5	] ; desvio = 0.5;
    p2eX	=	RafaPontos[	6	]  ; desvio = 0.5;
    p2eY	=	RafaPontos[	7	] ; desvio = 0.5;
    oseX	=	RafaPontos[	8	] ; desvio = 0.5;
    oseY	=	RafaPontos[	9	] ; desvio = 0.5;
    osdY	=	RafaPontos[	10	] ; desvio = 0.5;
    p1dX	=	RafaPontos[	11	]  ; desvio = 0.5;
    p1dY	=	RafaPontos[	12	] ; desvio = 0.5;
    p2dX	=	RafaPontos[	13	]  ; desvio = 0.5;
    p2dY	=	RafaPontos[	14	] ; desvio = 0.5;
    osdX	=	RafaPontos[	15	] ; desvio = 0.5;
    //olho esquerdo
    eneX	=	RafaPontos[	16	]  ; desvio = 0.5;
    eneY	=	RafaPontos[	17	] ; desvio = 0.5;
    exeX	=	RafaPontos[	18	]  ; desvio = 0.5;
    exeY	=	RafaPontos[	19	] ; desvio = 0.5;
    pseX	=	RafaPontos[	20	]  ; desvio = 0.5;
    pseY	=	RafaPontos[	21	]  ; desvio = 0.5;
    pieX	=	RafaPontos[	22	]  ; desvio = 0.5;
    pieY	=	RafaPontos[	23	]  ; desvio = 0.5;
    //olho direito
    endX	=	RafaPontos[	24	]  ; desvio = 0.5;
    endY	=	RafaPontos[	25	] ; desvio = 0.5;
    exdX	=	RafaPontos[	26	]  ; desvio = 0.5;
    exdY	=	RafaPontos[	27	] ; desvio = 0.5;
    psdX	=	RafaPontos[	28	]  ; desvio = 0.5;
    psdY	=	RafaPontos[	29	]  ; desvio = 0.5;
    pidX	=	RafaPontos[	30	]  ; desvio = 0.5;
    pidY	=	RafaPontos[	31	]  ; desvio = 0.5;
    //nariz
    mfeX	=	RafaPontos[	32	] ; desvio = 3.5;
    mfeY	=	RafaPontos[	33	]  ; desvio = 0.5;
    aleX	=	RafaPontos[	34	]  ; desvio = 3.5;
    aleY	=	RafaPontos[	35	]  ; desvio = 0.5;
    aceX	=	RafaPontos[	36	]  ; desvio = 3.5;
    aceY	=	RafaPontos[	37	]  ; desvio = 0.5;
    snX	=	RafaPontos[	38	] ; desvio = 0.5;
    snY	=	RafaPontos[	39	]  ; desvio = 0.5;
    mfdX	=	RafaPontos[	40	] ; desvio = 3.5;
    mfdY	=	RafaPontos[	41	]  ; desvio = 0.5;
    aldX	=	RafaPontos[	42	]  ; desvio = 3.5;
    aldY	=	RafaPontos[	43	]  ; desvio = 0.5;
    acdX	=	RafaPontos[	44	]  ; desvio = 3.5;
    acdY	=	RafaPontos[	45	]  ; desvio = 0;
    //boca
    stoX	=	RafaPontos[	46	] ; desvio = 0;
    liX	=	RafaPontos[	47	] ; desvio = 0;
    lsX	=	RafaPontos[	48	] ; desvio = 0;
    nX	=	RafaPontos[	49	] ; desvio = 0;
    lsY	=	RafaPontos[	50	] ; desvio = 0;
    liY	=	RafaPontos[	51	]  ; desvio = 0;
    stoY	=	RafaPontos[	52	] ; desvio = 0.5;
    //rugas olhos esquerdo
    p6eY	=	RafaPontos[	53	] ; desvio = 0.5;
    p7eX	=	RafaPontos[	54	] ; desvio = 0.5;
    p7eY	=	RafaPontos[	55	] ; desvio = 0.5;
    p8eX	=	RafaPontos[	56	] ; desvio = 0.5;
    p8eY	=	RafaPontos[	57	] ; desvio = 0.5;
    p3eX	=	RafaPontos[	58	] ; desvio = 0.5;
    p3eY	=	RafaPontos[	59	] ; desvio = 0.5;
    p4eX	=	RafaPontos[	60	] ; desvio = 0.5;
    p4eY	=	RafaPontos[	61	] ; desvio = 0.5;
    p5eX	=	RafaPontos[	62	] ; desvio = 0.5;
    p5eY	=	RafaPontos[	63	] ; desvio = 0.5;
    p9eX	=	RafaPontos[	64	] ; desvio = 0.5;
    p9eY	=	RafaPontos[	65	] ; desvio = 0.5;
    p10eX	=	RafaPontos[	66	] ; desvio = 0.5;
    p10eY	=	RafaPontos[	67	] ; desvio = 0.5;
    p11eX	=	RafaPontos[	68	] ; desvio = 0.5;
    p11eY	=	RafaPontos[	69	] ; desvio = 0.5;
    //rugas olhos direito
    p6dX	=	RafaPontos[	70	] ; desvio = 0.5;
    p6dY	=	RafaPontos[	71	] ; desvio = 0.5;
    p7dX	=	RafaPontos[	72	] ; desvio = 0.5;
    p7dY	=	RafaPontos[	73	] ; desvio = 0.5;
    p8dX	=	RafaPontos[	74	] ; desvio = 0.5;
    p8dY	=	RafaPontos[	75	] ; desvio = 0.5;
    p3dX	=	RafaPontos[	76	] ; desvio = 0.5;
    p3dY	=	RafaPontos[	77	] ; desvio = 0.5;
    p4dX	=	RafaPontos[	78	] ; desvio = 0.5;
    p4dY	=	RafaPontos[	79	] ; desvio = 0.5;
    p5dX	=	RafaPontos[	80	] ; desvio = 0.5;
    p5dY	=	RafaPontos[	81	] ; desvio = 0.5;
    p9dX	=	RafaPontos[	82	] ; desvio = 0.5;
    p9dY	=	RafaPontos[	83	] ; desvio = 0.5;
    p10dX	=	RafaPontos[	84	] ; desvio = 0.5;
    p10dY	=	RafaPontos[	85	] ; desvio = 0.5;
    p11dX	=	RafaPontos[	86	] ; desvio = 0.5;
    p11dY	=	RafaPontos[	87	] ; desvio = 1.5;
    //palpebra inferior esquerda
    p12eX	=	RafaPontos[	88	]  ; desvio = 1.5;
    p12eY	=	RafaPontos[	89	] ; desvio = 1.5;
    oreX	=	RafaPontos[	90	]  ; desvio = 1.5;
    oreY	=	RafaPontos[	91	] ; desvio = 1.5;
    p13eX	=	RafaPontos[	92	]  ; desvio = 1.5;
    p13eY	=	RafaPontos[	93	] ; desvio =  .5;
    //palpebra inferior direita
    p12dX	=	RafaPontos[	94	]  ; desvio =  .5;
    p12dY	=	RafaPontos[	95	] ; desvio =  .5;
    ordX	=	RafaPontos[	96	]  ; desvio =  .5;
    ordY	=	RafaPontos[	97	] ; desvio =  .5;
    p13dX	=	RafaPontos[	98	]  ; desvio =  .5;
    p13dY	=	RafaPontos[	99	] ; desvio = 0.5;
    //contorno esquerdo(rosto)
    sleX	=	RafaPontos[	100	] ; desvio = 0.5;
    sleY	=	RafaPontos[	101	] ; desvio = 0.5;
    treX	=	RafaPontos[	102	] ; desvio = 0.5;
    veY	=	RafaPontos[	103	] ; desvio = 0.5;
    treY	=	RafaPontos[	104	] ; desvio = 0.5;
    gneX	=	RafaPontos[	105	] ; desvio = 0.5;
    gneY	=	RafaPontos[	106	] ; desvio = 0.5;
    goeX	=	RafaPontos[	107	] ; desvio = 0.5;
    goeY	=	RafaPontos[	108	] ; desvio = 0.5;
    zyeX	=	RafaPontos[	109	] ; desvio = 0.5;
    zyeY	=	RafaPontos[	110	] ; desvio = 0.5;
    teX	=	RafaPontos[	111	] ; desvio = 0.5;
    teY	=	RafaPontos[	112	] ; desvio = 0.5;
    eueX	=	RafaPontos[	113	] ; desvio = 0.5;
    eueY	=	RafaPontos[	114	] ; desvio = 0.5;
    veX	=	RafaPontos[	115	] ; desvio = 0.5;
    veY	=	RafaPontos[	116	] ; desvio = 0.5;
    //contorno direito(rosto)
    sldX	=	RafaPontos[	117	] ; desvio = 0.5;
    sldY	=	RafaPontos[	118	] ; desvio = 0.5;
    trdX	=	RafaPontos[	119	] ; desvio = 0.5;
    trdY	=	RafaPontos[	120	] ; desvio = 0.5;
    vX	=	RafaPontos[	121	] ; desvio = 0.5;
    vY	=	RafaPontos[	122	] ; desvio = 0.5;
    gndX	=	RafaPontos[	123	] ; desvio = 0.5;
    gndY	=	RafaPontos[	124	] ; desvio = 0.5;
    godX	=	RafaPontos[	125	] ; desvio = 0.5;
    godY	=	RafaPontos[	126	] ; desvio = 0.5;
    zydX	=	RafaPontos[	127	] ; desvio = 0.5;
    zydY	=	RafaPontos[	128	] ; desvio = 0.5;
    tdX	=	RafaPontos[	129	] ; desvio = 0.5;
    tdY	=	RafaPontos[	130	] ; desvio = 0.5;
    eudX	=	RafaPontos[	131	] ; desvio = 0.5;
    eudY	=	RafaPontos[	132	] ; desvio = 0.5;
    vdX	=	RafaPontos[	133	] ; desvio = 0.5;
    vdY	=	RafaPontos[	134	] ; desvio = 0.5;
    //rugas testa cima
    fteX	=	RafaPontos[	135	] ; desvio = 0.5;
    fteY	=	RafaPontos[	136	] ; desvio = 0.5;
    ftdX	=	RafaPontos[	137	] ; desvio = 0.5;
    ftdY	=	RafaPontos[	138	] ; desvio = 0.5;
    pt3cX	=	RafaPontos[	139	] ; desvio = 0.5;
    pt3cY	=	RafaPontos[	140	] ; desvio = 0.5;
    pt1cX	=	RafaPontos[	141	] ; desvio = 0.5;
    pt1cY	=	RafaPontos[	142	] ; desvio = 0.5;
    pt2cX	=	RafaPontos[	143	] ; desvio = 0.5;
    pt2cY	=	RafaPontos[	144	] ; desvio = 0.5;
    pt4cX	=	RafaPontos[	145	] ; desvio = 0.5;
    pt4cY	=	RafaPontos[	146	] ; desvio = 0.5;
    pt5cX	=	RafaPontos[	147	] ; desvio = 0.5;
    pt5cY	=	RafaPontos[	148	] ; desvio = 0.5;
    //rugas testa meio
    pt3mX	=	RafaPontos[	149	] ; desvio = 0.5;
    pt3mY	=	RafaPontos[	150	] ; desvio = 0.5;
    pt1mX	=	RafaPontos[	151	] ; desvio = 0.5;
    pt1mY	=	RafaPontos[	152	] ; desvio = 0.5;
    pt2mX	=	RafaPontos[	153	] ; desvio = 0.5;
    pt2mY	=	RafaPontos[	154	] ; desvio = 0.5;
    pt4mX	=	RafaPontos[	155	] ; desvio = 0.5;
    pt4mY	=	RafaPontos[	156	] ; desvio = 0.5;
    pt5mX	=	RafaPontos[	157	] ; desvio = 0.5;
    pt5mY	=	RafaPontos[	158	] ; desvio = 0.5;
    //rugas testa baixo
    pt3bX	=	RafaPontos[	159	] ; desvio = 0.5;
    pt3bY	=	RafaPontos[	160	] ; desvio = 0.5;
    pt1bX	=	RafaPontos[	161	] ; desvio = 0.5;
    pt1bY	=	RafaPontos[	162	] ; desvio = 0.5;
    pt2bX	=	RafaPontos[	163	] ; desvio = 0.5;
    pt2bY	=	RafaPontos[	164	] ; desvio = 0.5;
    pt4bX	=	RafaPontos[	165	] ; desvio = 0.5;
    pt4bY	=	RafaPontos[	166	] ; desvio = 0.5;
    pt5bX	=	RafaPontos[	167	] ; desvio = 0.5;
    pt5bY	=	RafaPontos[	168	] ; desvio = 0.5;
    //pupilas
    seX	=	RafaPontos[	169	] ; desvio = 0.5;
    seY	=	RafaPontos[	170	] ; desvio = 0.5;
    pupilaeX	=	RafaPontos[	171	] ;// ;// desvio = 0.5;
    pupilaeY	=	RafaPontos[	172	];// ; //desvio = 0.5;
    pupiladX	=	RafaPontos[	173	] ;// ; //desvio = 0.5;
    pupiladY	=	RafaPontos[	174	];// ; //desvio = 0.5;
    pupilaR	=	RafaPontos[	175	];// ; //desvio = 0.5;
    pupilaR	=	RafaPontos[	176	];// ; //desvio = 0.5;
    //rugas sobrancelha
    pis1eX	=	RafaPontos[	177	] ; desvio = 0.5;
    pis1eY	=	RafaPontos[	178	] ; desvio = 0.5;
    pis2eX	=	RafaPontos[	179	] ; desvio = 0.5;
    pis2eY	=	RafaPontos[	180	] ; desvio = 0.5;
    pis3eX	=	RafaPontos[	181	] ; desvio = 0.5;
    pis3eY	=	RafaPontos[	182	] ; desvio = 0.5;
    pis1cX	=	RafaPontos[	183	] ; desvio = 0.5;
    pis1cY	=	RafaPontos[	184	] ; desvio = 0.5;
    pis2cX	=	RafaPontos[	185	] ; desvio = 0.5;
    pis3cX	=	RafaPontos[	186	] ; desvio = 0.5;
    pis3cY	=	RafaPontos[	187	] ; desvio = 0.5;
    pis2cY	=	RafaPontos[	188	] ; desvio = 0.5;
    pis1dX	=	RafaPontos[	189	] ; desvio = 0.5;
    pis1dY	=	RafaPontos[	190	] ; desvio = 0.5;
    pis2dX	=	RafaPontos[	191	] ; desvio = 0.5;
    pis2dY	=	RafaPontos[	192	] ; desvio = 0.5;
    pis3dX	=	RafaPontos[	193	] ; desvio = 0.5;
    pis3dY	=	RafaPontos[	194	] ; desvio = 0.5;
    //rugas nariz superior
    psn1cX	=	RafaPontos[	195	] ; desvio = 0.5;
    psn1cY	=	RafaPontos[	196	] ; desvio = 0.5;
    psn2cX	=	RafaPontos[	197	] ; desvio = 0.5;
    psn2cY	=	RafaPontos[	198	] ; desvio = 0.5;
    psn3cX	=	RafaPontos[	199	] ; desvio = 0.5;
    psn3cY	=	RafaPontos[	200	] ; desvio = 0.5;
    psn1mX	=	RafaPontos[	201	] ; desvio = 0.5;
    psn1mY	=	RafaPontos[	202	] ; desvio = 0.5;
    psn2mX	=	RafaPontos[	203	] ; desvio = 0.5;
    psn2mY	=	RafaPontos[	204	] ; desvio = 0.5;
    psn3mX	=	RafaPontos[	205	] ; desvio = 0.5;
    psn3mY	=	RafaPontos[	206	] ; desvio = 0.5;
    psn1bX	=	RafaPontos[	207	] ; desvio = 0.5;
    psn1bY	=	RafaPontos[	208	] ; desvio = 0.5;
    psn2bX	=	RafaPontos[	209	] ; desvio = 0.5;
    psn2bY	=	RafaPontos[	210	] ; desvio = 0.5;
    psn3bX	=	RafaPontos[	211	] ; desvio = 0.5;
    psn3bY	=	RafaPontos[	212	] ; desvio = 0.5;
    //rugas nariz inferior
    pn1eX	=	RafaPontos[	213	] ; desvio = 0.5;
    pn1eY	=	RafaPontos[	214	] ; desvio = 0.5;
    pn2eX	=	RafaPontos[	215	] ; desvio = 0.5;
    pn2eY	=	RafaPontos[	216	] ; desvio = 0.5;
    pn3eX	=	RafaPontos[	217	] ; desvio = 0.5;
    pn3eY	=	RafaPontos[	218	] ; desvio = 0.5;
    pn4eX	=	RafaPontos[	219	] ; desvio = 0.5;
    pn4eY	=	RafaPontos[	220	] ; desvio = 0.5;
    pn5eX	=	RafaPontos[	221	] ; desvio = 0.5;
    pn5eY	=	RafaPontos[	222	] ; desvio = 0.5;
    pn6eX	=	RafaPontos[	223	] ; desvio = 0.5;
    pn6eY	=	RafaPontos[	224	] ; desvio = 0.5;
    pn1dX	=	RafaPontos[	225	] ; desvio = 0.5;
    pn1dY	=	RafaPontos[	226	] ; desvio = 0.5;
    pn2dX	=	RafaPontos[	227	] ; desvio = 0.5;
    pn2dY	=	RafaPontos[	228	] ; desvio = 0.5;
    pn3dX	=	RafaPontos[	229	] ; desvio = 0.5;
    pn3dY	=	RafaPontos[	230	] ; desvio = 0.5;
    pn4dX	=	RafaPontos[	231	] ; desvio = 0.5;
    pn4dY	=	RafaPontos[	232	] ; desvio = 0.5;
    pn5dX	=	RafaPontos[	233	] ; desvio = 0.5;
    pn5dY	=	RafaPontos[	234	] ; desvio = 0.5;
    pn6dX	=	RafaPontos[	235	] ; desvio = 0.5;
    pn6dY	=	RafaPontos[	236	] ; desvio = 0.5;
    //rugas bochechas
    pb1eX	=	RafaPontos[	237	] ; desvio = 0.5;
    pb1eY	=	RafaPontos[	238	] ; desvio = 0.5;
    pb2eX	=	RafaPontos[	239	] ; desvio = 0.5;
    pb2eY	=	RafaPontos[	240	] ; desvio = 0.5;
    pb3eX	=	RafaPontos[	241	] ; desvio = 0.5;
    pb3eY	=	RafaPontos[	242	] ; desvio = 0.5;
    pb4eX	=	RafaPontos[	243	] ; desvio = 0.5;
    pb4eY	=	RafaPontos[	244	] ; desvio = 0.5;
    pb5eX	=	RafaPontos[	245	] ; desvio = 0.5;
    pb5eY	=	RafaPontos[	246	] ; desvio = 0.5;
    pb1dX	=	RafaPontos[	247	] ; desvio = 0.5;
    pb1dY	=	RafaPontos[	248	] ; desvio = 0.5;
    pb2dX	=	RafaPontos[	249	] ; desvio = 0.5;
    pb2dY	=	RafaPontos[	250	] ; desvio = 0.5;
    pb3dX	=	RafaPontos[	251	] ; desvio = 0.5;
    pb3dY	=	RafaPontos[	252	] ; desvio = 0.5;
    pb4dX	=	RafaPontos[	253	] ; desvio = 0.5;
    pb4dY	=	RafaPontos[	254	] ; desvio = 0.5;
    pb5dX	=	RafaPontos[	255	] ; desvio = 0.5;
    pb5dY	=	RafaPontos[	256	] ; desvio = 0.5;
    //nazolabial
    pnl1eX	=	RafaPontos[	257	] ; desvio = 0.5;
    pnl1eY	=	RafaPontos[	258	] ; desvio = 0.5;
    pnl3eX	=	RafaPontos[	259	] ; desvio = 0.5;
    pnl3eY	=	RafaPontos[	260	] ; desvio = 0.5;
    pnl2eX	=	RafaPontos[	261	] ; desvio = 0.5;
    pnl2eY	=	RafaPontos[	262	] ; desvio = 0.5;
    pnl1dX	=	RafaPontos[	263	] ; desvio = 0.5;
    pnl1dY	=	RafaPontos[	264	] ; desvio = 0.5;
    pnl3dX	=	RafaPontos[	265	] ; desvio = 0.5;
    pnl3dY	=	RafaPontos[	266	] ; desvio = 0.5;
    pnl2dX	=	RafaPontos[	267	] ; desvio = 0.5;
    pnl2dY	=	RafaPontos[	268	] ; desvio = 0.5;
    //nazolabialInterna
    pnli1eX	=	RafaPontos[	269	] ; desvio = 0.5;
    pnli1eY	=	RafaPontos[	270	] ; desvio = 0.5;
    pnli3eX	=	RafaPontos[	271	] ; desvio = 0.5;
    pnli3eY	=	RafaPontos[	272	] ; desvio = 0.5;
    pnli2eX	=	RafaPontos[	273	] ; desvio = 0.5;
    pnli2eY	=	RafaPontos[	274	] ; desvio = 0.5;
    pnli1dX	=	RafaPontos[	275	] ; desvio = 0.5;
    pnli1dY	=	RafaPontos[	276	] ; desvio = 0.5;
    pnli3dX	=	RafaPontos[	277	] ; desvio = 0.5;
    pnli3dY	=	RafaPontos[	278	] ; desvio = 0.5;
    pnli2dX	=	RafaPontos[	279	] ; desvio = 0.5;
    pnli2dY	=	RafaPontos[	280	] ;

    varicaoROE = p6eX = exeX - 2;
/*
cout<< " cheX = " << cheX << "\n" ;
cout<< " cheY = " << cheY << "\n" ;
cout<< " chdX = " << chdX << "\n" ;
cout<< " chdY = " << chdY << "\n" ;
cout<< " p1eX = " << p1eX << "\n" ;
cout<< " p1eY = " << p1eY << "\n" ;
cout<< " p2eX = " << p2eX << "\n" ;
cout<< " p2eY = " << p2eY << "\n" ;
cout<< " oseX = " << oseX << "\n" ;
cout<< " oseY = " << oseY << "\n" ;
cout<< " osdY = " << osdY << "\n" ;
cout<< " p1dX = " << p1dX << "\n" ;
cout<< " p1dY = " << p1dY << "\n" ;
cout<< " p2dX = " << p2dX << "\n" ;
cout<< " p2dY = " << p2dY << "\n" ;
cout<< " osdX = " << osdX << "\n" ;
cout<< " //olho esquerdo = "   << "\n" ;
cout<< " eneX = " << eneX << "\n" ;
cout<< " eneY = " << eneY << "\n" ;
cout<< " exeX = " << exeX << "\n" ;
cout<< " exeY = " << exeY << "\n" ;
cout<< " pseX = " << pseX << "\n" ;
cout<< " pseY = " << pseY << "\n" ;
cout<< " pieX = " << pieX << "\n" ;
cout<< " pieY = " << pieY << "\n" ;
cout<< " //olho direito = "   << "\n" ;
cout<< " endX = " << endX << "\n" ;
cout<< " endY = " << endY << "\n" ;
cout<< " exdX = " << exdX << "\n" ;
cout<< " exdY = " << exdY << "\n" ;
cout<< " psdX = " << psdX << "\n" ;
cout<< " psdY = " << psdY << "\n" ;
cout<< " pidX = " << pidX << "\n" ;
cout<< " pidY = " << pidY << "\n" ;
cout<< " //nariz = "   << "\n" ;
cout<< " mfeX = " << mfeX << "\n" ;
cout<< " mfeY = " << mfeY << "\n" ;
cout<< " aleX = " << aleX << "\n" ;
cout<< " aleY = " << aleY << "\n" ;
cout<< " aceX = " << aceX << "\n" ;
cout<< " aceY = " << aceY << "\n" ;
cout<< " snX = " << snX << "\n" ;
cout<< " snY = " << snY << "\n" ;
cout<< " mfdX = " << mfdX << "\n" ;
cout<< " mfdY = " << mfdY << "\n" ;
cout<< " aldX = " << aldX << "\n" ;
cout<< " aldY = " << aldY << "\n" ;
cout<< " acdX = " << acdX << "\n" ;
cout<< " acdY = " << acdY << "\n" ;
cout<< " //boca = "   << "\n" ;
cout<< " stoX = " << stoX << "\n" ;
cout<< " lsY = " << lsY << "\n" ;
cout<< " liY = " << liY << "\n" ;
cout<< " stoY = " << stoY << "\n" ;
cout<< " //rugas olhos esquerdo = "   << "\n" ;
cout<< " p6eY = " << p6eY << "\n" ;
cout<< " p7eX = " << p7eX << "\n" ;
cout<< " p7eY = " << p7eY << "\n" ;
cout<< " p8eX = " << p8eX << "\n" ;
cout<< " p8eY = " << p8eY << "\n" ;
cout<< " p3eX = " << p3eX << "\n" ;
cout<< " p3eY = " << p3eY << "\n" ;
cout<< " p4eX = " << p4eX << "\n" ;
cout<< " p4eY = " << p4eY << "\n" ;
cout<< " p5eX = " << p5eX << "\n" ;
cout<< " p5eY = " << p5eY << "\n" ;
cout<< " p9eX = " << p9eX << "\n" ;
cout<< " p9eY = " << p9eY << "\n" ;
cout<< " p10eX = " << p10eX << "\n" ;
cout<< " p10eY = " << p10eY << "\n" ;
cout<< " p11eX = " << p11eX << "\n" ;
cout<< " p11eY = " << p11eY << "\n" ;
cout<< " //rugas olhos direito = "   << "\n" ;
cout<< " p6dX = " << p6dX << "\n" ;
cout<< " p6dY = " << p6dY << "\n" ;
cout<< " p7dX = " << p7dX << "\n" ;
cout<< " p7dY = " << p7dY << "\n" ;
cout<< " p8dX = " << p8dX << "\n" ;
cout<< " p8dY = " << p8dY << "\n" ;
cout<< " p3dX = " << p3dX << "\n" ;
cout<< " p3dY = " << p3dY << "\n" ;
cout<< " p4dX = " << p4dX << "\n" ;
cout<< " p4dY = " << p4dY << "\n" ;
cout<< " p5dX = " << p5dX << "\n" ;
cout<< " p5dY = " << p5dY << "\n" ;
cout<< " p9dX = " << p9dX << "\n" ;
cout<< " p9dY = " << p9dY << "\n" ;
cout<< " p10dX = " << p10dX << "\n" ;
cout<< " p10dY = " << p10dY << "\n" ;
cout<< " p11dX = " << p11dX << "\n" ;
cout<< " p11dY = " << p11dY << "\n" ;
cout<< " //palpebra inferior esquerda = "   << "\n" ;
cout<< " p12eX = " << p12eX << "\n" ;
cout<< " p12eY = " << p12eY << "\n" ;
cout<< " oreX = " << oreX << "\n" ;
cout<< " oreY = " << oreY << "\n" ;
cout<< " p13eX = " << p13eX << "\n" ;
cout<< " p13eY = " << p13eY << "\n" ;
cout<< " //palpebra inferior direita = "   << "\n" ;
cout<< " p12dX = " << p12dX << "\n" ;
cout<< " p12dY = " << p12dY << "\n" ;
cout<< " ordX = " << ordX << "\n" ;
cout<< " ordY = " << ordY << "\n" ;
cout<< " p13dX = " << p13dX << "\n" ;
cout<< " p13dY = " << p13dY << "\n" ;
cout<< " //contorno esquerdo(rosto) = "   << "\n" ;
cout<< " sleX = " << sleX << "\n" ;
cout<< " sleY = " << sleY << "\n" ;
cout<< " treX = " << treX << "\n" ;
cout<< " veY = " << veY << "\n" ;
cout<< " treY = " << treY << "\n" ;
cout<< " gneX = " << gneX << "\n" ;
cout<< " gneY = " << gneY << "\n" ;
cout<< " goeX = " << goeX << "\n" ;
cout<< " goeY = " << goeY << "\n" ;
cout<< " zyeX = " << zyeX << "\n" ;
cout<< " zyeY = " << zyeY << "\n" ;
cout<< " teX = " << teX << "\n" ;
cout<< " teY = " << teY << "\n" ;
cout<< " eueX = " << eueX << "\n" ;
cout<< " eueY = " << eueY << "\n" ;
cout<< " veX = " << veX << "\n" ;
cout<< " veY = " << veY << "\n" ;
cout<< " //contorno direito(rosto) = "   << "\n" ;
cout<< " sldX = " << sldX << "\n" ;
cout<< " sldY = " << sldY << "\n" ;
cout<< " trdX = " << trdX << "\n" ;
cout<< " trdY = " << trdY << "\n" ;
cout<< " vX = " << vX << "\n" ;
cout<< " vY = " << vY << "\n" ;
cout<< " gndX = " << gndX << "\n" ;
cout<< " gndY = " << gndY << "\n" ;
cout<< " godX = " << godX << "\n" ;
cout<< " godY = " << godY << "\n" ;
cout<< " zydX = " << zydX << "\n" ;
cout<< " zydY = " << zydY << "\n" ;
cout<< " tdX = " << tdX << "\n" ;
cout<< " tdY = " << tdY << "\n" ;
cout<< " eudX = " << eudX << "\n" ;
cout<< " eudY = " << eudY << "\n" ;
cout<< " vdX = " << vdX << "\n" ;
cout<< " vdY = " << vdY << "\n" ;
cout<< " //rugas testa cima = "   << "\n" ;
cout<< " fteX = " << fteX << "\n" ;
cout<< " fteY = " << fteY << "\n" ;
cout<< " ftdX = " << ftdX << "\n" ;
cout<< " ftdY = " << ftdY << "\n" ;
cout<< " pt3cX = " << pt3cX << "\n" ;
cout<< " pt3cY = " << pt3cY << "\n" ;
cout<< " pt1cX = " << pt1cX << "\n" ;
cout<< " pt1cY = " << pt1cY << "\n" ;
cout<< " pt2cX = " << pt2cX << "\n" ;
cout<< " pt2cY = " << pt2cY << "\n" ;
cout<< " pt4cX = " << pt4cX << "\n" ;
cout<< " pt4cY = " << pt4cY << "\n" ;
cout<< " pt5cX = " << pt5cX << "\n" ;
cout<< " pt5cY = " << pt5cY << "\n" ;
cout<< " //rugas testa meio = "   << "\n" ;
cout<< " pt3mX = " << pt3mX << "\n" ;
cout<< " pt3mY = " << pt3mY << "\n" ;
cout<< " pt1mX = " << pt1mX << "\n" ;
cout<< " pt1mY = " << pt1mY << "\n" ;
cout<< " pt2mX = " << pt2mX << "\n" ;
cout<< " pt2mY = " << pt2mY << "\n" ;
cout<< " pt4mX = " << pt4mX << "\n" ;
cout<< " pt4mY = " << pt4mY << "\n" ;
cout<< " pt5mX = " << pt5mX << "\n" ;
cout<< " pt5mY = " << pt5mY << "\n" ;
cout<< " //rugas testa baixo = "   << "\n" ;
cout<< " pt3bX = " << pt3bX << "\n" ;
cout<< " pt3bY = " << pt3bY << "\n" ;
cout<< " pt1bX = " << pt1bX << "\n" ;
cout<< " pt1bY = " << pt1bY << "\n" ;
cout<< " pt2bX = " << pt2bX << "\n" ;
cout<< " pt2bY = " << pt2bY << "\n" ;
cout<< " pt4bX = " << pt4bX << "\n" ;
cout<< " pt4bY = " << pt4bY << "\n" ;
cout<< " pt5bX = " << pt5bX << "\n" ;
cout<< " pt5bY = " << pt5bY << "\n" ;
cout<< " //pupilas = "   << "\n" ;
cout<< " seX = " << seX << "\n" ;
cout<< " seY = " << seY << "\n" ;
cout<< " pupilaeX = " << pupilaeX << "\n" ;
cout<< " pupilaeY = " << pupilaeY << "\n" ;
cout<< " pupiladX = " << pupiladX << "\n" ;
cout<< " pupiladY = " << pupiladY << "\n" ;
cout<< " pupilaR = " << pupilaR << "\n" ;
cout<< " pupilaR = " << pupilaR << "\n" ;
cout<< " //rugas sobrancelha = "   << "\n" ;
cout<< " pis1eX = " << pis1eX << "\n" ;
cout<< " pis1eY = " << pis1eY << "\n" ;
cout<< " pis2eX = " << pis2eX << "\n" ;
cout<< " pis2eY = " << pis2eY << "\n" ;
cout<< " pis3eX = " << pis3eX << "\n" ;
cout<< " pis3eY = " << pis3eY << "\n" ;
cout<< " pis1cX = " << pis1cX << "\n" ;
cout<< " pis1cY = " << pis1cY << "\n" ;
cout<< " pis2cX = " << pis2cX << "\n" ;
cout<< " pis3cX = " << pis3cX << "\n" ;
cout<< " pis3cY = " << pis3cY << "\n" ;
cout<< " pis2cY = " << pis2cY << "\n" ;
cout<< " pis1dX = " << pis1dX << "\n" ;
cout<< " pis1dY = " << pis1dY << "\n" ;
cout<< " pis2dX = " << pis2dX << "\n" ;
cout<< " pis2dY = " << pis2dY << "\n" ;
cout<< " pis3dX = " << pis3dX << "\n" ;
cout<< " pis3dY = " << pis3dY << "\n" ;
cout<< " //rugas nariz superior = "   << "\n" ;
cout<< " psn1cX = " << psn1cX << "\n" ;
cout<< " psn1cY = " << psn1cY << "\n" ;
cout<< " psn2cX = " << psn2cX << "\n" ;
cout<< " psn2cY = " << psn2cY << "\n" ;
cout<< " psn3cX = " << psn3cX << "\n" ;
cout<< " psn3cY = " << psn3cY << "\n" ;
cout<< " psn1mX = " << psn1mX << "\n" ;
cout<< " psn1mY = " << psn1mY << "\n" ;
cout<< " psn2mX = " << psn2mX << "\n" ;
cout<< " psn2mY = " << psn2mY << "\n" ;
cout<< " psn3mX = " << psn3mX << "\n" ;
cout<< " psn3mY = " << psn3mY << "\n" ;
cout<< " psn1bX = " << psn1bX << "\n" ;
cout<< " psn1bY = " << psn1bY << "\n" ;
cout<< " psn2bX = " << psn2bX << "\n" ;
cout<< " psn2bY = " << psn2bY << "\n" ;
cout<< " psn3bX = " << psn3bX << "\n" ;
cout<< " psn3bY = " << psn3bY << "\n" ;
cout<< " //rugas nariz inferior = "   << "\n" ;
cout<< " pn1eX = " << pn1eX << "\n" ;
cout<< " pn1eY = " << pn1eY << "\n" ;
cout<< " pn2eX = " << pn2eX << "\n" ;
cout<< " pn2eY = " << pn2eY << "\n" ;
cout<< " pn3eX = " << pn3eX << "\n" ;
cout<< " pn3eY = " << pn3eY << "\n" ;
cout<< " pn4eX = " << pn4eX << "\n" ;
cout<< " pn4eY = " << pn4eY << "\n" ;
cout<< " pn5eX = " << pn5eX << "\n" ;
cout<< " pn5eY = " << pn5eY << "\n" ;
cout<< " pn6eX = " << pn6eX << "\n" ;
cout<< " pn6eY = " << pn6eY << "\n" ;
cout<< " pn1dX = " << pn1dX << "\n" ;
cout<< " pn1dY = " << pn1dY << "\n" ;
cout<< " pn2dX = " << pn2dX << "\n" ;
cout<< " pn2dY = " << pn2dY << "\n" ;
cout<< " pn3dX = " << pn3dX << "\n" ;
cout<< " pn3dY = " << pn3dY << "\n" ;
cout<< " pn4dX = " << pn4dX << "\n" ;
cout<< " pn4dY = " << pn4dY << "\n" ;
cout<< " pn5dX = " << pn5dX << "\n" ;
cout<< " pn5dY = " << pn5dY << "\n" ;
cout<< " pn6dX = " << pn6dX << "\n" ;
cout<< " pn6dY = " << pn6dY << "\n" ;
cout<< " //rugas bochechas = "   << "\n" ;
cout<< " pb1eX = " << pb1eX << "\n" ;
cout<< " pb1eY = " << pb1eY << "\n" ;
cout<< " pb2eX = " << pb2eX << "\n" ;
cout<< " pb2eY = " << pb2eY << "\n" ;
cout<< " pb3eX = " << pb3eX << "\n" ;
cout<< " pb3eY = " << pb3eY << "\n" ;
cout<< " pb4eX = " << pb4eX << "\n" ;
cout<< " pb4eY = " << pb4eY << "\n" ;
cout<< " pb5eX = " << pb5eX << "\n" ;
cout<< " pb5eY = " << pb5eY << "\n" ;
cout<< " pb1dX = " << pb1dX << "\n" ;
cout<< " pb1dY = " << pb1dY << "\n" ;
cout<< " pb2dX = " << pb2dX << "\n" ;
cout<< " pb2dY = " << pb2dY << "\n" ;
cout<< " pb3dX = " << pb3dX << "\n" ;
cout<< " pb3dY = " << pb3dY << "\n" ;
cout<< " pb4dX = " << pb4dX << "\n" ;
cout<< " pb4dY = " << pb4dY << "\n" ;
cout<< " pb5dX = " << pb5dX << "\n" ;
cout<< " pb5dY = " << pb5dY << "\n" ;
cout<< " //nazolabial = "   << "\n" ;
cout<< " pnl1eX = " << pnl1eX << "\n" ;
cout<< " pnl1eY = " << pnl1eY << "\n" ;
cout<< " pnl3eX = " << pnl3eX << "\n" ;
cout<< " pnl3eY = " << pnl3eY << "\n" ;
cout<< " pnl2eX = " << pnl2eX << "\n" ;
cout<< " pnl2eY = " << pnl2eY << "\n" ;
cout<< " pnl1dX = " << pnl1dX << "\n" ;
cout<< " pnl1dY = " << pnl1dY << "\n" ;
cout<< " pnl3dX = " << pnl3dX << "\n" ;
cout<< " pnl3dY = " << pnl3dY << "\n" ;
cout<< " pnl2dX = " << pnl2dX << "\n" ;
cout<< " pnl2dY = " << pnl2dY << "\n" ;
cout<< " //nazolabialInterna = "   << "\n" ;
cout<< " pnli1eX = " << pnli1eX << "\n" ;
cout<< " pnli1eY = " << pnli1eY << "\n" ;
cout<< " pnli3eX = " << pnli3eX << "\n" ;
cout<< " pnli3eY = " << pnli3eY << "\n" ;
cout<< " pnli2eX = " << pnli2eX << "\n" ;
cout<< " pnli2eY = " << pnli2eY << "\n" ;
cout<< " pnli1dX = " << pnli1dX << "\n" ;
cout<< " pnli1dY = " << pnli1dY << "\n" ;
cout<< " pnli3dX = " << pnli3dX << "\n" ;
cout<< " pnli3dY = " << pnli3dY << "\n" ;
cout<< " pnli2dX = " << pnli2dX << "\n" ;
cout<< " pnli2dY = " << pnli2dY << "\n" ;
system("pause");
*/

}

void Antropometria::getSombrancelhaEsquerda(GLfloat se[8][3]) {
	se[0][0] = p1eX;
	se[0][1] = p1eY;
	se[0][2] = 0.0;	//p1
	se[1][0] = (p1eX + oseX) / 2;
	se[1][1] = (p1eY + oseY) / 2;
	se[1][2] = 0.0;	//pas1
	se[2][0] = (p1eX + oseX) / 2;
	se[2][1] = (p1eY + oseY) / 2;
	se[2][2] = 0.0;	//pas1
	se[3][0] = oseX;
	se[3][1] = oseY;
	se[3][2] = 0.0;	//os
	se[4][0] = oseX;
	se[4][1] = oseY;
	se[4][2] = 0.0;	//os
	se[5][0] = (oseX + p2eX) / 2;
	se[5][1] = (oseY + p2eY) / 2;
	se[5][2] = 0.0;	//pas2
	se[6][0] = (oseX + p2eX) / 2;
	se[6][1] = (oseY + p2eY) / 2;
	se[6][2] = 0.0;	//pas2
	se[7][0] = p2eX;
	se[7][1] = p2eY;
	se[7][2] = 0.0;	//p2
}

void Antropometria::getSombrancelhaDireita(GLfloat sd[8][3]) {
	sd[0][0] = p1dX;
	sd[0][1] = p1dY;
	sd[0][2] = 0.0;	//p1
	sd[1][0] = (p1dX + osdX) / 2;
	sd[1][1] = (p1dY + osdY) / 2;
	sd[1][2] = 0.0;	//pas1
	sd[2][0] = (p1dX + osdX) / 2;
	sd[2][1] = (p1dY + osdY) / 2;
	sd[2][2] = 0.0;	//pas1
	sd[3][0] = osdX;
	sd[3][1] = osdY;
	sd[3][2] = 0.0;	//os
	sd[4][0] = osdX;
	sd[4][1] = osdY;
	sd[4][2] = 0.0;	//os
	sd[5][0] = (osdX + p2dX) / 2;
	sd[5][1] = (osdY + p2dY) / 2;
	sd[5][2] = 0.0;	//pas2
	sd[6][0] = (osdX + p2dX) / 2;
	sd[6][1] = (osdY + p2dY) / 2;
	sd[6][2] = 0.0;	//pas2
	sd[7][0] = p2dX;
	sd[7][1] = p2dY;
	sd[7][2] = 0.0;	//p2
}

void Antropometria::getOlhoEsquerdoCima(GLfloat oec[4][3]) {
	oec[0][0] = exeX;
	oec[0][1] = exeY;
	oec[0][2] = 0.0;	//ex
	oec[1][0] = pseX;
	oec[1][1] = pseY;
	oec[1][2] = 0.0;	//ps
	oec[2][0] = pseX;
	oec[2][1] = pseY;
	oec[2][2] = 0.0;	//ps
	oec[3][0] = eneX;
	oec[3][1] = eneY;
	oec[3][2] = 0.0;	//en
}

void Antropometria::getOlhoEsquerdoBaixo(GLfloat oeb[4][3]) {
	oeb[0][0] = exeX;
	oeb[0][1] = exeY;
	oeb[0][2] = 0.0;	//ex
	oeb[1][0] = pieX;
	oeb[1][1] = pieY;
	oeb[1][2] = 0.0;	//pi
	oeb[2][0] = pieX;
	oeb[2][1] = pieY;
	oeb[2][2] = 0.0;	//pi
	oeb[3][0] = eneX;
	oeb[3][1] = eneY;
	oeb[3][2] = 0.0;	//en
}

void Antropometria::getOlhoDireitoCima(GLfloat odc[4][3]) {
	odc[0][0] = exdX;
	odc[0][1] = exdY;
	odc[0][2] = 0.0;	//ex
	odc[1][0] = psdX;
	odc[1][1] = psdY;
	odc[1][2] = 0.0;	//ps
	odc[2][0] = psdX;
	odc[2][1] = psdY;
	odc[2][2] = 0.0;	//ps
	odc[3][0] = endX;
	odc[3][1] = endY;
	odc[3][2] = 0.0;	//en
}

void Antropometria::getOlhoDireitoBaixo(GLfloat odb[4][3]) {
	odb[0][0] = exdX;
	odb[0][1] = exdY;
	odb[0][2] = 0.0;	//ex
	odb[1][0] = pidX;
	odb[1][1] = pidY;
	odb[1][2] = 0.0;	//pi
	odb[2][0] = pidX;
	odb[2][1] = pidY;
	odb[2][2] = 0.0;	//pi
	odb[3][0] = endX;
	odb[3][1] = endY;
	odb[3][2] = 0.0;	//en
}

void Antropometria::getNarizEsquerda(GLfloat ne[6][3]) {
	ne[0][0] = mfeX;
	ne[0][1] = mfeY;
	ne[0][2] = 0.0;	//mf
	ne[1][0] = aleX;
	ne[1][1] = aleY;
	ne[1][2] = 0.0;	//al
	ne[2][0] = aleX;
	ne[2][1] = aleY;
	ne[2][2] = 0.0;	//al
	ne[3][0] = aceX;
	ne[3][1] = aceY;
	ne[3][2] = 0.0;	//ac
	ne[4][0] = aceX;
	ne[4][1] = aceY;
	ne[4][2] = 0.0;	//ac
	ne[5][0] = snX;
	ne[5][1] = snY;
	ne[5][2] = 0.0;	//sn
}

void Antropometria::getNarizDireita(GLfloat nd[4][3]) {
	nd[0][0] = mfdX;
	nd[0][1] = mfdY;
	nd[0][2] = 0.0;	//mf
	nd[1][0] = aldX;
	nd[1][1] = aldY;
	nd[1][2] = 0.0;	//al
	nd[2][0] = aldX;
	nd[2][1] = aldY;
	nd[2][2] = 0.0;	//al
	nd[3][0] = acdX;
	nd[3][1] = acdY;
	nd[3][2] = 0.0;	//ac
	nd[4][0] = acdX;
	nd[4][1] = acdY;
	nd[4][2] = 0.0;	//ac
	nd[5][0] = snX;
	nd[5][1] = snY;
	nd[5][2] = 0.0;	//sn
}

void Antropometria::getLabioSuperiorCima(GLfloat bc[4][3]) {
	bc[0][0] = cheX;
	bc[0][1] = cheY;
	bc[0][2] = 0.0;	//ch(e)
	bc[1][0] = lsX;
	bc[1][1] = lsY;
	bc[1][2] = 0.0;	//ls
	bc[2][0] = lsX;
	bc[2][1] = lsY;
	bc[2][2] = 0.0;	//ls
	bc[3][0] = chdX;
	bc[3][1] = chdY;
	bc[3][2] = 0.0;	//ch(d)
}

void Antropometria::getLabioSuperiorBaixo(GLfloat bm[4][3]) {
	bm[0][0] = cheX;
	bm[0][1] = cheY;
	bm[0][2] = 0.0;	//ch(e)
	bm[1][0] = stoX;
	bm[1][1] = stoY;
	bm[1][2] = 0.0;	//sto
	bm[2][0] = stoX;
	bm[2][1] = stoY;
	bm[2][2] = 0.0;	//sto
	bm[3][0] = chdX;
	bm[3][1] = chdY;
	bm[3][2] = 0.0;	//ch(d)
}

void Antropometria::getLabioInferiorCima(GLfloat bm[4][3]) {
	bm[0][0] = cheX;
	bm[0][1] = cheY;
	bm[0][2] = 0.0;	//ch(e)
	bm[1][0] = stoX;
	bm[1][1] = stoY;
	bm[1][2] = 0.0;	//sto
	bm[2][0] = stoX;
	bm[2][1] = stoY;
	bm[2][2] = 0.0;	//sto
	bm[3][0] = chdX;
	bm[3][1] = chdY;
	bm[3][2] = 0.0;	//ch(d)
}

void Antropometria::getLabioInferiorBaixo(GLfloat bb[4][3]) {
	bb[0][0] = cheX;
	bb[0][1] = cheY;
	bb[0][2] = 0.0;	//ch(e)
	bb[1][0] = liX;
	bb[1][1] = liY;
	bb[1][2] = 0.0;	//li
	bb[2][0] = liX;
	bb[2][1] = liY;
	bb[2][2] = 0.0;	//li
	bb[3][0] = chdX;
	bb[3][1] = chdY;
	bb[3][2] = 0.0;	//ch(d)
}

void Antropometria::getRugasOlhoEsquerdoCima(GLfloat roec[4][3]) {
	roec[0][0] = p3eX;
	roec[0][1] = p3eY;
	roec[0][2] = 0.0;	//p3
	roec[1][0] = p4eX;
	roec[1][1] = p4eY;
	roec[1][2] = 0.0;	//p4
	roec[2][0] = p4eX;
	roec[2][1] = p4eY;
	roec[2][2] = 0.0;	//p4
	roec[3][0] = p5eX;
	roec[3][1] = p5eY;
	roec[3][2] = 0.0;	//p5

}
void Antropometria::getRugasOlhoEsquerdoMeio(GLfloat roem[4][3]) {
	roem[0][0] = p6eX;
	roem[0][1] = p6eY;
	roem[0][2] = 0.0;	//p6
	roem[1][0] = p7eX;
	roem[1][1] = p7eY;
	roem[1][2] = 0.0;	//p7
	roem[2][0] = p7eX;
	roem[2][1] = p7eY;
	roem[2][2] = 0.0;	//p7
	roem[3][0] = p8eX;
	roem[3][1] = p8eY;
	roem[3][2] = 0.0;	//p8

}
void Antropometria::getRugasOlhoEsquerdoBaixo(GLfloat roeb[4][3]) {
	roeb[0][0] = p9eX;
	roeb[0][1] = p9eY;
	roeb[0][2] = 0.0;	//p9
	roeb[1][0] = p10eX;
	roeb[1][1] = p10eY;
	roeb[1][2] = 0.0;	//p10
	roeb[2][0] = p10eX;
	roeb[2][1] = p10eY;
	roeb[2][2] = 0.0;	//p10
	roeb[3][0] = p11eX;
	roeb[3][1] = p11eY;
	roeb[3][2] = 0.0;	//p11
}

void Antropometria::getRugasOlhoDireitoCima(GLfloat rodc[4][3]) {
	rodc[0][0] = p3dX;
	rodc[0][1] = p3dY;
	rodc[0][2] = 0.0;	//p3
	rodc[1][0] = p4dX;
	rodc[1][1] = p4dY;
	rodc[1][2] = 0.0;	//p4
	rodc[2][0] = p4dX;
	rodc[2][1] = p4dY;
	rodc[2][2] = 0.0;	//p4
	rodc[3][0] = p5dX;
	rodc[3][1] = p5dY;
	rodc[3][2] = 0.0;	//p5
}
void Antropometria::getRugasOlhoDireitoMeio(GLfloat rodm[4][3]) {
	rodm[0][0] = p6dX;
	rodm[0][1] = p6eY;
	rodm[0][2] = 0.0;	//p6
	rodm[1][0] = p7dX;
	rodm[1][1] = p7eY;
	rodm[1][2] = 0.0;	//p7
	rodm[2][0] = p7dX;
	rodm[2][1] = p7eY;
	rodm[2][2] = 0.0;	//p7
	rodm[3][0] = p8dX;
	rodm[3][1] = p8eY;
	rodm[3][2] = 0.0;	//p8
}
void Antropometria::getRugasOlhoDireitoBaixo(GLfloat rodb[4][3]) {
	rodb[0][0] = p9dX;
	rodb[0][1] = p9dY;
	rodb[0][2] = 0.0;	//p9
	rodb[1][0] = p10dX;
	rodb[1][1] = p10dY;
	rodb[1][2] = 0.0;	//p10
	rodb[2][0] = p10dX;
	rodb[2][1] = p10dY;
	rodb[2][2] = 0.0;	//p10
	rodb[3][0] = p11dX;
	rodb[3][1] = p11dY;
	rodb[3][2] = 0.0;	//p11
}
void Antropometria::getPalpebraEsquerda(GLfloat pe[4][3]) {
	pe[0][0] = p12eX;
	pe[0][1] = p12eY;
	pe[0][2] = 0.0;	//p12
	pe[1][0] = oreX;
	pe[1][1] = oreY;
	pe[1][2] = 0.0;	//or
	pe[2][0] = oreX;
	pe[2][1] = oreY;
	pe[2][2] = 0.0;	//or
	pe[3][0] = p13eX;
	pe[3][1] = p13eY;
	pe[3][2] = 0.0;	//p13
}
void Antropometria::getPalpebraDireita(GLfloat pd[4][3]) {
	pd[0][0] = p12dX;
	pd[0][1] = p12dY;
	pd[0][2] = 0.0;	//p12
	pd[1][0] = ordX;
	pd[1][1] = ordY;
	pd[1][2] = 0.0;	//or
	pd[2][0] = ordX;
	pd[2][1] = ordY;
	pd[2][2] = 0.0;	//or
	pd[3][0] = p13dX;
	pd[3][1] = p13dY;
	pd[3][2] = 0.0;	//p13
}

void Antropometria::getContornoEsquerdoBaixo(GLfloat ceb[4][3]) {
	ceb[0][0] = oreX;
	ceb[0][1] = gneY - 10;
	ceb[0][2] = 0.0;	//gn
	ceb[1][0] = goeX;
	ceb[1][1] = goeY;
	ceb[1][2] = 0.0;	//go
	//ceb[2][0]=oreX; ceb[2][1]=goeY+70; ceb[2][2]=0.0;//zy
	ceb[2][0] = goeX;
	ceb[2][1] = goeY;
	ceb[2][2] = 0.0;	//zy
	ceb[3][0] = teX;
	ceb[3][1] = teY;
	ceb[3][2] = 0.0;	//t

}

void Antropometria::getContornoEsquerdoCima(GLfloat cec[7][3]) {
	/*cec[0][0]=teX; cec[0][1]=teY; cec[0][2]=0.0;//t
	 cec[1][0]=eueX; cec[1][1]=eueY; cec[1][2]=0.0;//eu
	 cec[2][0]=eueX+30 ; cec[2][1]=eueY-30; cec[2][2]=0.0;//eu
	 //cec[3][0]=veX; cec[3][1]=veY; cec[3][2]=0.0;//v
	 */

	/*
	 Para ligar no ponto v
	 cec[0][0]=teX; cec[0][1]=teY; cec[0][2]=0.0;//t
	 cec[1][0]=eueX; cec[1][1]=eueY; cec[1][2]=0.0;//eu
	 cec[2][0]=eueX; cec[2][1]=eueY; cec[2][2]=0.0;//eu
	 cec[3][0]=eueX; cec[3][1]=veY; cec[3][2]=0.0;//v
	 cec[4][0]=veX; cec[4][1]=veY; cec[4][2]=0.0;//v

	 */

	// Parte de cima cabeça completa (sem usar a direita)

	cec[0][0] = teX;
	cec[0][1] = teY;
	cec[0][2] = 0.0;	//t
	cec[1][0] = eueX;
	cec[1][1] = eueY;
	cec[1][2] = 0.0;	//eu
	cec[2][0] = eueX;
	cec[2][1] = eueY;
	cec[2][2] = 0.0;	//eu
	cec[3][0] = veX;
	cec[3][1] = veY - 110;
	cec[3][2] = 0.0;	//v

	cec[4][0] = eudX;
	cec[4][1] = eueY;
	cec[4][2] = 0.0;	//eu
	cec[5][0] = eudX;
	cec[5][1] = eueY;
	cec[5][2] = 0.0;	//eu
	cec[6][0] = tdX;
	cec[6][1] = tdY;
	cec[6][2] = 0.0;	//t

}

void Antropometria::getContornoQueixo(GLfloat queixo[3][3]) {
	queixo[0][0] = oreX;
	queixo[0][1] = gneY - 10;
	queixo[0][2] = 0.0;
	queixo[1][0] = gndX;
	queixo[1][1] = gndY + 20;
	queixo[1][2] = 0.0;
	queixo[2][0] = ordX;
	queixo[2][1] = gndY - 10;
	queixo[2][2] = 0.0;
}

void Antropometria::getContornoDireitoBaixo(GLfloat cdb[4][3]) {
	cdb[0][0] = ordX;
	cdb[0][1] = gndY - 10;
	cdb[0][2] = 0.0;	//gn queixo
	cdb[1][0] = godX;
	cdb[1][1] = godY;
	cdb[1][2] = 0.0;	//go
	cdb[2][0] = godX;
	cdb[2][1] = godY;
	cdb[2][2] = 0.0;	//go
	//cdb[2][0]=ordX; cdb[2][1]=godY+40; cdb[2][2]=0.0;//go
	cdb[3][0] = tdX;
	cdb[3][1] = tdY;
	cdb[4][2] = 0.0;	//t
}

void Antropometria::getContornoDireitoCima(GLfloat cdc[4][3]) {
	/*cdc[0][0]=tdX; cdc[0][1]=teY; cdc[0][2]=0.0;//t
	 cdc[1][0]=eudX; cdc[1][1]=eueY; cdc[1][2]=0.0;//eu
	 cdc[2][0]=eudX-30 ; cdc[2][1]=eueY-30; cdc[2][2]=0.0;//eu
	 */
	/*
	 Para ligar no ponto v
	 cdc[0][0]=tdX; cdc[0][1]=tdY; cdc[0][2]=0.0;//t
	 cdc[1][0]=eudX; cdc[1][1]=eueY; cdc[1][2]=0.0;//eu
	 cdc[2][0]=eudX; cdc[2][1]=eueY; cdc[2][2]=0.0;//eu
	 cdc[3][0]=eudX; cdc[3][1]=vdY; cdc[3][2]=0.0;//eu
	 cdc[4][0]=vdX; cdc[4][1]=vdY; cdc[4][2]=0.0;//v
	 */
}

void Antropometria::getRugaTestaCima(GLfloat rtc[8][3]) {
	rtc[0][0] = pt1cX;
	rtc[0][1] = pt1cY;
	rtc[0][2] = 0.0;	//pt1
	rtc[1][0] = pt2cX;
	rtc[1][1] = pt2cY;
	rtc[1][2] = 0.0;	//pt2
	rtc[2][0] = pt2cX;
	rtc[2][1] = pt2cY;
	rtc[2][2] = 0.0;	//pt2
	rtc[3][0] = pt3cX;
	rtc[3][1] = pt3cY;
	rtc[3][2] = 0.0;	//pt3
	rtc[4][0] = pt3cX;
	rtc[4][1] = pt3cY;
	rtc[4][2] = 0.0;	//pt3
	rtc[5][0] = pt4cX;
	rtc[5][1] = pt4cY;
	rtc[5][2] = 0.0;	//pt4
	rtc[6][0] = pt4cX;
	rtc[6][1] = pt4cY;
	rtc[6][2] = 0.0;	//pt4
	rtc[7][0] = pt5cX;
	rtc[7][1] = pt5cY;
	rtc[7][2] = 0.0;	//pt5
}
void Antropometria::getRugaTestaMeio(GLfloat rtm[8][3]) {
	rtm[0][0] = pt1mX;
	rtm[0][1] = pt1mY;
	rtm[0][2] = 0.0;	//pt1
	rtm[1][0] = pt2mX;
	rtm[1][1] = pt2mY;
	rtm[1][2] = 0.0;	//pt2
	rtm[2][0] = pt2mX;
	rtm[2][1] = pt2mY;
	rtm[2][2] = 0.0;	//pt2
	rtm[3][0] = pt3mX;
	rtm[3][1] = pt3mY;
	rtm[3][2] = 0.0;	//pt3
	rtm[4][0] = pt3mX;
	rtm[4][1] = pt3mY;
	rtm[4][2] = 0.0;	//pt3
	rtm[5][0] = pt4mX;
	rtm[5][1] = pt4mY;
	rtm[5][2] = 0.0;	//pt4
	rtm[6][0] = pt4mX;
	rtm[6][1] = pt4mY;
	rtm[6][2] = 0.0;	//pt4
	rtm[7][0] = pt5mX;
	rtm[7][1] = pt5mY;
	rtm[7][2] = 0.0;	//pt5
}
void Antropometria::getRugaTestaBaixo(GLfloat rtb[8][3]) {
	rtb[0][0] = pt1bX;
	rtb[0][1] = pt1bY;
	rtb[0][2] = 0.0;	//pt1
	rtb[1][0] = pt2bX;
	rtb[1][1] = pt2bY;
	rtb[1][2] = 0.0;	//pt2
	rtb[2][0] = pt2bX;
	rtb[2][1] = pt2bY;
	rtb[2][2] = 0.0;	//pt2
	rtb[3][0] = pt3bX;
	rtb[3][1] = pt3bY;
	rtb[3][2] = 0.0;	//pt3
	rtb[4][0] = pt3bX;
	rtb[4][1] = pt3bY;
	rtb[4][2] = 0.0;	//pt3
	rtb[5][0] = pt4bX;
	rtb[5][1] = pt4bY;
	rtb[5][2] = 0.0;	//pt4
	rtb[6][0] = pt4bX;
	rtb[6][1] = pt4bY;
	rtb[6][2] = 0.0;	//pt4
	rtb[7][0] = pt5bX;
	rtb[7][1] = pt5bY;
	rtb[7][2] = 0.0;	//pt5
}

void Antropometria::getRugaCentroTestaCima(GLfloat rctc[4][3]) {
	rctc[0][0] = pt2cX;
	rctc[0][1] = pt2cY;
	rctc[0][2] = 0.0;	//pt2
	rctc[1][0] = pt3cX;
	rctc[1][1] = pt3cY;
	rctc[1][2] = 0.0;	//pt3
	rctc[2][0] = pt3cX;
	rctc[2][1] = pt3cY;
	rctc[2][2] = 0.0;	//pt3
	rctc[3][0] = pt4cX;
	rctc[3][1] = pt4cY;
	rctc[3][2] = 0.0;	//pt4
}
void Antropometria::getRugaCentroTestaMeio(GLfloat rctm[4][3]) {
	rctm[0][0] = pt2mX;
	rctm[0][1] = pt2mY;
	rctm[0][2] = 0.0;	//pt2
	rctm[1][0] = pt3mX;
	rctm[1][1] = pt3mY;
	rctm[1][2] = 0.0;	//pt3
	rctm[2][0] = pt3mX;
	rctm[2][1] = pt3mY;
	rctm[2][2] = 0.0;	//pt3
	rctm[3][0] = pt4mX;
	rctm[3][1] = pt4mY;
	rctm[3][2] = 0.0;	//pt4
}
void Antropometria::getRugaCentroTestaBaixo(GLfloat rctb[4][3]) {
	rctb[0][0] = pt2bX;
	rctb[0][1] = pt2bY;
	rctb[0][2] = 0.0;	//pt2
	rctb[1][0] = pt3bX;
	rctb[1][1] = pt3bY;
	rctb[1][2] = 0.0;	//pt3
	rctb[2][0] = pt3bX;
	rctb[2][1] = pt3bY;
	rctb[2][2] = 0.0;	//pt3
	rctb[3][0] = pt4bX;
	rctb[3][1] = pt4bY;
	rctb[3][2] = 0.0;	//pt4
}

void Antropometria::getPupilaEsquerda(GLfloat pe[1][3]) {
	pe[0][0] = pupilaeX;
	pe[0][1] = pupilaeY;
	pe[0][2] = 0.0;	//pupila
}

void Antropometria::getPupilaDireita(GLfloat pd[1][3]) {
	pd[0][0] = pupiladX;
	pd[0][1] = pupiladY;
	pd[0][2] = 0.0;	//pupila
}

GLfloat Antropometria::getRaioPupila() {
	return pupilaR;
}

void Antropometria::getAuxiliares(GLfloat aux[7][3]) {
	//aux[0][0]=nX; aux[0][1]= nY; aux[0][2]=0.0;//n
	//aux[1][0]=fteX; aux[1][1]= fteY; aux[1][2]=0.0;//ft(e)
	//aux[2][0]=ftdX; aux[2][1]= ftdY; aux[2][2]=0.0;//ft(d)
	//aux[3][0]=seX; aux[3][1]= seY; aux[3][2]=0.0;//se
	aux[4][0] = vX + 1.0;
	aux[4][1] = vY + 1.0;
	aux[4][2] = 0.0;	//v
	//aux[5][0]=eueX; aux[5][1]= eueY; aux[5][2]=0.0;//eu(e)
	//aux[6][0]=eudX; aux[6][1]= eudY; aux[6][2]=0.0;//eu(d)

}
//
void Antropometria::getRugaInteriorSobrancelhaEsquerda(GLfloat rsie[4][3]) {
	rsie[0][0] = pis1eX;
	rsie[0][1] = pis1eY;
	rsie[0][2] = 0.0;	//pis1
	rsie[1][0] = pis2eX;
	rsie[1][1] = pis2eY;
	rsie[1][2] = 0.0;	//pis2
	rsie[2][0] = pis2eX;
	rsie[2][1] = pis2eY;
	rsie[2][2] = 0.0;	//pis2
	rsie[3][0] = pis3eX;
	rsie[3][1] = pis3eY;
	rsie[3][2] = 0.0;	//pis3
}

void Antropometria::getRugaInteriorSobrancelhaCentro(GLfloat rsic[4][3]) {
	rsic[0][0] = pis1cX;
	rsic[0][1] = pis1cY;
	rsic[0][2] = 0.0;	//pis1
	rsic[1][0] = pis2cX;
	rsic[1][1] = pis2cY;
	rsic[1][2] = 0.0;	//pis2
	rsic[2][0] = pis2cX;
	rsic[2][1] = pis2cY;
	rsic[2][2] = 0.0;	//pis2
	rsic[3][0] = pis3cX;
	rsic[3][1] = pis3cY;
	rsic[3][2] = 0.0;	//pis3
}

void Antropometria::getRugaInteriorSobrancelhaDireita(GLfloat rsid[4][3]) {
	rsid[0][0] = pis1dX;
	rsid[0][1] = pis1dY;
	rsid[0][2] = 0.0;	//pis1
	rsid[1][0] = pis2dX;
	rsid[1][1] = pis2dY;
	rsid[1][2] = 0.0;	//pis2
	rsid[2][0] = pis2dX;
	rsid[2][1] = pis2dY;
	rsid[2][2] = 0.0;	//pis2
	rsid[3][0] = pis3dX;
	rsid[3][1] = pis3dY;
	rsid[3][2] = 0.0;	//pis3
}

//
void Antropometria::getRugaSobrancelhaNarizCima(GLfloat rsnc[4][3]) {
	rsnc[0][0] = psn1cX;
	rsnc[0][1] = psn1cY;
	rsnc[0][2] = 0.0;	//psn1
	rsnc[1][0] = psn2cX;
	rsnc[1][1] = psn2cY;
	rsnc[1][2] = 0.0;	//psn2
	rsnc[2][0] = psn2cX;
	rsnc[2][1] = psn2cY;
	rsnc[2][2] = 0.0;	//psn2
	rsnc[3][0] = psn3cX;
	rsnc[3][1] = psn3cY;
	rsnc[3][2] = 0.0;	//psn3
}

void Antropometria::getRugaSobrancelhaNarizMeio(GLfloat rsnm[4][3]) {
	rsnm[0][0] = psn1mX;
	rsnm[0][1] = psn1mY;
	rsnm[0][2] = 0.0;	//psn1
	rsnm[1][0] = psn2mX;
	rsnm[1][1] = psn2mY;
	rsnm[1][2] = 0.0;	//psn2
	rsnm[2][0] = psn2mX;
	rsnm[2][1] = psn2mY;
	rsnm[2][2] = 0.0;	//psn2
	rsnm[3][0] = psn3mX;
	rsnm[3][1] = psn3mY;
	rsnm[3][2] = 0.0;	//psn3
}

void Antropometria::getRugaSobrancelhaNarizBaixo(GLfloat rsnb[4][3]) {
	rsnb[0][0] = psn1bX;
	rsnb[0][1] = psn1bY;
	rsnb[0][2] = 0.0;	//psn1
	rsnb[1][0] = psn2bX;
	rsnb[1][1] = psn2bY;
	rsnb[1][2] = 0.0;	//psn2
	rsnb[2][0] = psn2bX;
	rsnb[2][1] = psn2bY;
	rsnb[2][2] = 0.0;	//psn2
	rsnb[3][0] = psn3bX;
	rsnb[3][1] = psn3bY;
	rsnb[3][2] = 0.0;	//psn3
}

//
void Antropometria::getRugaNarizEsquerdaCima(GLfloat rnec[4][3]) {
	rnec[0][0] = pn1eX;
	rnec[0][1] = pn1eY;
	rnec[0][2] = 0.0;	//pn1
	rnec[1][0] = pn2eX;
	rnec[1][1] = pn2eY;
	rnec[1][2] = 0.0;	//pn2
	rnec[2][0] = pn2eX;
	rnec[2][1] = pn2eY;
	rnec[2][2] = 0.0;	//pn2
	rnec[3][0] = pn3eX;
	rnec[3][1] = pn3eY;
	rnec[3][2] = 0.0;	//pn3
}

void Antropometria::getRugaNarizEsquerdaBaixo(GLfloat rneb[4][3]) {
	rneb[0][0] = pn4eX;
	rneb[0][1] = pn4eY;
	rneb[0][2] = 0.0;	//pn1
	rneb[1][0] = pn5eX;
	rneb[1][1] = pn5eY;
	rneb[1][2] = 0.0;	//pn2
	rneb[2][0] = pn5eX;
	rneb[2][1] = pn5eY;
	rneb[2][2] = 0.0;	//pn2
	rneb[3][0] = pn6eX;
	rneb[3][1] = pn6eY;
	rneb[3][2] = 0.0;	//pn3
}

void Antropometria::getRugaNarizDireitaCima(GLfloat rndc[4][3]) {
	rndc[0][0] = pn1dX;
	rndc[0][1] = pn1dY;
	rndc[0][2] = 0.0;	//pn1
	rndc[1][0] = pn2dX;
	rndc[1][1] = pn2dY;
	rndc[1][2] = 0.0;	//pn2
	rndc[2][0] = pn2dX;
	rndc[2][1] = pn2dY;
	rndc[2][2] = 0.0;	//pn2
	rndc[3][0] = pn3dX;
	rndc[3][1] = pn3dY;
	rndc[3][2] = 0.0;	//pn3
}

void Antropometria::getRugaNarizDireitaBaixo(GLfloat rndb[4][3]) {
	rndb[0][0] = pn4dX;
	rndb[0][1] = pn4dY;
	rndb[0][2] = 0.0;	//pn1
	rndb[1][0] = pn5dX;
	rndb[1][1] = pn5dY;
	rndb[1][2] = 0.0;	//pn2
	rndb[2][0] = pn5dX;
	rndb[2][1] = pn5dY;
	rndb[2][2] = 0.0;	//pn2
	rndb[3][0] = pn6dX;
	rndb[3][1] = pn6dY;
	rndb[3][2] = 0.0;	//pn3
}

//
void Antropometria::getRugaBochechaEsquerda(GLfloat rbe[8][3]) {
	rbe[0][0] = pb1eX;
	rbe[0][1] = pb1eY;
	rbe[0][2] = 0.0;	//pb1
	rbe[1][0] = pb2eX;
	rbe[1][1] = pb2eY;
	rbe[1][2] = 0.0;	//pb2
	rbe[2][0] = pb2eX;
	rbe[2][1] = pb2eY;
	rbe[2][2] = 0.0;	//pb2
	rbe[3][0] = pb3eX;
	rbe[3][1] = pb3eY;
	rbe[3][2] = 0.0;	//pb3
	rbe[4][0] = pb3eX;
	rbe[4][1] = pb3eY;
	rbe[4][2] = 0.0;	//pb3
	rbe[5][0] = pb4eX;
	rbe[5][1] = pb4eY;
	rbe[5][2] = 0.0;	//pb4
	rbe[6][0] = pb4eX;
	rbe[6][1] = pb4eY;
	rbe[6][2] = 0.0;	//pb4
	rbe[7][0] = pb5eX;
	rbe[7][1] = pb5eY;
	rbe[7][2] = 0.0;	//pb5
}

void Antropometria::getRugaBochechaDireita(GLfloat rbd[8][3]) {
	rbd[0][0] = pb1dX;
	rbd[0][1] = pb1dY;
	rbd[0][2] = 0.0;	//pb1
	rbd[1][0] = pb2dX;
	rbd[1][1] = pb2dY;
	rbd[1][2] = 0.0;	//pb2
	rbd[2][0] = pb2dX;
	rbd[2][1] = pb2dY;
	rbd[2][2] = 0.0;	//pb2
	rbd[3][0] = pb3dX;
	rbd[3][1] = pb3dY;
	rbd[3][2] = 0.0;	//pb3
	rbd[4][0] = pb3dX;
	rbd[4][1] = pb3dY;
	rbd[4][2] = 0.0;	//pb3
	rbd[5][0] = pb4dX;
	rbd[5][1] = pb4dY;
	rbd[5][2] = 0.0;	//pb4
	rbd[6][0] = pb4dX;
	rbd[6][1] = pb4dY;
	rbd[6][2] = 0.0;	//pb4
	rbd[7][0] = pb5dX;
	rbd[7][1] = pb5dY;
	rbd[7][2] = 0.0;	//pb5
}

void Antropometria::getNasolabialEsquerda(GLfloat rnle[4][3]) {
	rnle[0][0] = pnl1eX;
	rnle[0][1] = pnl1eY;
	rnle[0][2] = 0.0;
	rnle[1][0] = pnl2eX;
	rnle[1][1] = pnl2eY;
	rnle[1][2] = 0.0;
	rnle[2][0] = pnl2eX;
	rnle[2][1] = pnl2eY;
	rnle[2][2] = 0.0;
	rnle[3][0] = pnl3eX;
	rnle[3][1] = pnl3eY;
	rnle[3][2] = 0.0;
}

void Antropometria::getNasolabialDireita(GLfloat rnld[4][3]) {
	rnld[0][0] = pnl1dX;
	rnld[0][1] = pnl1dY;
	rnld[0][2] = 0.0;
	rnld[1][0] = pnl2dX;
	rnld[1][1] = pnl2dY;
	rnld[1][2] = 0.0;
	rnld[2][0] = pnl2dX;
	rnld[2][1] = pnl2dY;
	rnld[2][2] = 0.0;
	rnld[3][0] = pnl3dX;
	rnld[3][1] = pnl3dY;
	rnld[3][2] = 0.0;
}
void Antropometria::getNasolabialInternaEsquerda(GLfloat rnlie[4][3]) {
	rnlie[0][0] = pnli1eX;
	rnlie[0][1] = pnli1eY;
	rnlie[0][2] = 0.0;
	rnlie[1][0] = pnli2eX;
	rnlie[1][1] = pnli2eY;
	rnlie[1][2] = 0.0;
	rnlie[2][0] = pnli2eX;
	rnlie[2][1] = pnli2eY;
	rnlie[2][2] = 0.0;
	rnlie[3][0] = pnli3eX;
	rnlie[3][1] = pnli3eY;
	rnlie[3][2] = 0.0;
}

void Antropometria::getNasolabialInternaDireita(GLfloat rnlid[4][3]) {
	rnlid[0][0] = pnli1dX;
	rnlid[0][1] = pnli1dY;
	rnlid[0][2] = 0.0;
	rnlid[1][0] = pnli2dX;
	rnlid[1][1] = pnli2dY;
	rnlid[1][2] = 0.0;
	rnlid[2][0] = pnli2dX;
	rnlid[2][1] = pnli2dY;
	rnlid[2][2] = 0.0;
	rnlid[3][0] = pnli3dX;
	rnlid[3][1] = pnli3dY;
	rnlid[3][2] = 0.0;
}

