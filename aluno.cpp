#include "aluno.h"
#include <string>

Aluno:: Aluno(int r, string n, int mat, int ano_ingre): Pessoas (r,n){
	this->mat = mat;
	this->ano_ingre = ano_ingre;
}
int Aluno:: devMat(){
	return mat;

}
int Aluno:: devAno(){
	return ano_ingre;
}
