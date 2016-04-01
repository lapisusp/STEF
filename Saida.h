#ifndef SAIDA_H_
#define SAIDA_H_

class Saida {
public:
	Saida();
	virtual ~Saida();
	void salvarImagem(char* filename);
	int dt();
};

#endif /* SAIDA_H_ */
