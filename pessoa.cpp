#include "pessoa.h"

using namespace std;

Pessoas::Pessoas(int r, string n){
	RG = r;
	nome = n;
}
string Pessoas::devome(){
	return nome;
}
int Pessoas::devRG(){
	return RG;
}
void Pessoas::setname(string n){
	nome = n;
}
void Pessoas::setrg(int r){
	RG = r;
}
	
