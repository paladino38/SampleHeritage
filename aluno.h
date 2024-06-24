#include "pessoa.h"
#include <string>
class Aluno: public Pessoas {
	private:
		int mat, ano_ingre;
	public:
		Aluno(int r, string n, int mat, int ano_ingre);
		int devMat();
		int devAno();
};
		
