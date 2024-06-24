#include <iostream>
#include <string>
using namespace std;

class Pessoas{
	private:
		int RG;
		string nome;
	public:
		Pessoas(int r, string n);
		string devome();
		int devRG();
		void setname(string n);
		void setrg(int r);
};
