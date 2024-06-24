#include "aluno.h"
#include <string>
using namespace std;

class Professor : public Aluno {
	private:
		int ano_ingresso;
		int salario;
		string unidade;
	public:
		Professor(int r, string n, int mat, int ano_ingresso, int salario,string unidade);
		int devAnoin ();
		int devSa();
		
		string devUnid();
};
