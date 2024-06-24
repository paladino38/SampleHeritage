#include "professor.h"

Professor::Professor(int r, string n, int mat, int ano_ingresso, int salario,string unidade): Aluno (r, n, mat, ano_ingresso){
	this->salario = salario;
	this-> unidade = unidade;
}
int Professor:: devAnoin (){
	return ano_ingresso;
}
int Professor:: devSa(){
	return salario;
}
string Professor:: devUnid(){
	return unidade;
}
