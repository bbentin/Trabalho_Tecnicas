#pragma once
template<class tipo>class Lista{

private:
	Elemento<tipo>* pPrimeiro;
	Elemento<tipo>* pAtual;
public:

	Lista();
	~Lista();



	template<class elem>class Elemento {
	private:
		Elemento<elem>* pProx;
		elem* pInfo;
	public:

		Elemento();
		~Elemento();

		Elemento<elem>* getProx();
		void setProx(Elemento<elem>* Prox);

	};
};

template<class tipo>
inline Lista<tipo>::Lista(){
	pPrimeiro = nullptr;
	pAtual = nullptr;
}

template<class tipo>
inline Lista<tipo>::~Lista(){
	Elemento<tipo>* aux;

	while (pPrimeiro != pAtual) {
		aux = pPrimeiro
	}
}

