#ifndef CONVERTIR_H
#define CONVERTIR_H

class Numero{
	private:
		float num;
		int numi;
	public:
		Numero();
		Numero(float num, int numi);
		void setnum(float num);
		void setnumi(int numi);
		void ConvertirBinario(int);
		void ConvertirBinario(float);
};


#endif
