#pragma once
#include <iostream>
using namespace std;
namespace Listas {
	template<class tipo>class Lista {
	public:
		template<class tipo>class Elemento {
		private:
			Elemento<tipo>* pProx;
			tipo* pInfo;
		public:

			Elemento() {
				pProx = nullptr;	pInfo = nullptr;
			}
			~Elemento() {
				pProx = nullptr;	pInfo = nullptr;
			}

			Elemento<tipo>* getProx() {
				return pProx;
			}
			void setProx(Elemento<tipo>* Prox) {
				pProx = Prox;
			}
			tipo* getInfo() {
				return pInfo;
			}

			void setInfo(tipo* info) {
				pInfo = info;
			}

		};
	private:
		Elemento<tipo>* pPrimeiro;
		Elemento<tipo>* pAtual;
	public:

		Lista();
		~Lista();

		bool InserirElemento(tipo* Elemento);

		Elemento<tipo>* getPrimeiro() {
			return pPrimeiro;
		}
		
		Elemento<tipo>* getAtual() {
			return pAtual;
		}
		
		bool RemoverElemento(tipo* Elemen) {
			if (Elemen == nullptr) { 
				cout << "Elemento invalido" << endl;
				return false; 
			}

			Elemento<tipo>* pAux = pPrimeiro;

			while (pAux != pAtual) {
				if (pAux->getProx()->getInfo() == Elemen) {
					delete pAux->getProx();
					pAux->setProx(pAux->getProx()->getProx());
					cout << "Elemento removido com sucesso" << endl;
					return true;
				}
				pAux = pAux->getProx();
			}


		}
		
		void LimpaLista();

	};

	template<class tipo>
	inline Lista<tipo>::Lista() {
		pPrimeiro = nullptr;
		pAtual = nullptr;
	}

	template<class tipo>
	inline Lista<tipo>::~Lista() {
		LimpaLista();
	}

	template<class tipo>
	inline bool Lista<tipo>::InserirElemento(tipo* Elemen) {

		if (Elemen != nullptr) {
			
			Elemento<tipo>* pAux = new Elemento<tipo>;	pAux->setInfo(Elemen);

			if (pPrimeiro == nullptr && pAtual == nullptr) {
				pPrimeiro = pAux;	pAtual = pAux;
				return true;
			}
			else {
				pAtual->setProx(pAux);
				pAtual = pAux;
			}

		}
		else {
			cout << "Elemento Invalido" << endl;
			return false;
		}
	}

	template<class tipo>
	inline void Lista<tipo>::LimpaLista(){
		Elemento<tipo>* aux;

		while (pPrimeiro != nullptr) {
			aux = pPrimeiro->getProx();
			delete pPrimeiro;
			pPrimeiro = aux;
		}
	}


	
}