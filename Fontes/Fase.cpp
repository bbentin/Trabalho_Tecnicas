#include "../Cabecalhos/Fase.h"
using namespace Fases;


Fase::Fase(sf::RenderWindow* tela):Ente(),horizontal(30),vertical(30) {
	pTela = tela;
	Colecao.pTela = tela;
	Segundo = nullptr;	Primeiro = nullptr;	Chao_1 = nullptr; Chao_2 = nullptr;
	background.setSize(sf::Vector2f(640, 480));	background.setFillColor(sf::Color::Blue);// ainda vou fazer o background correto mas vou ter de criar uma classe
	Colecao.LimpaLista();//Limpa a lista pra não ter memória de lixo
}
Fase::~Fase(){
	Colecao.LimpaLista();
}

void Fases::Fase::criar_fase() {
	ifstream arquivo;
	arquivo.open("C:/Users/rbben/Documents/Faculdade/2022-2/Tecnicas/Jogo_Trabalho/Jogo_Trabalho/Fontes/Summer.txt"); 
	// Abre o arquivo base da fase, dê uma olhada nele!
	string linha;
	if (!arquivo.is_open()) {
		cout << "Nao abriu" << endl;
	}
	int j = 0;
	while (getline(arquivo, linha)) {
		for (int i = 0; i < linha.size(); i++) {
			if (linha[i] != ' ') {
				criarEntidade(linha[i], sf::Vector2f(i, j)); //Cria cada objeto dependendo do que estiver no txt
			}
		}
		j++;
	}
	arquivo.close();
}

void Fases::Fase::criarEntidade(char letra,sf::Vector2f pos){//Cria as entidades
	switch (letra){
	case '1':
		CriarChao(pos, 1);
		break;
	case '2':
		CriarChao(pos, 2);
		break;
	case '3':
		CriarCactus(pos);
		break;
		case '4':
		CriarAgua(pos);
			break; 
		case '5':
			Criar_Jogadores(pos);
			break;
	default:
		break;
	}
}
//todas essas aqui criam as entidades, setam posições e as colocam na Lista de Entidades "coleção"
void Fases::Fase::CriarBomba(sf::Vector2f pos){
	Bomba* auxiliar = new Bomba();
	auxiliar->setPosicao(pos.x* espaco,pos.y *espaco);
	Colecao.InserirElemento(auxiliar);
}

void Fases::Fase::CriarBalao(sf::Vector2f pos){
	Balao* auxiliar = new Balao();
	auxiliar->setPosicao(pos.x * espaco, pos.y * espaco);
	static_cast<Entidade*> (auxiliar);
	Colecao.InserirElemento(auxiliar);
}

void Fases::Fase::CriarCogumelo(sf::Vector2f pos){
	Cogumelus* auxiliar = new Cogumelus;
	auxiliar->setPosicao(pos.x * espaco, pos.y * espaco);
	static_cast<Entidade*> (auxiliar);
	Colecao.InserirElemento(auxiliar);

}

void Fases::Fase::CriarAgua(sf::Vector2f pos){
	Lava* auxiliar = new Lava();
	auxiliar->setPosicao(pos.x * espaco, pos.y * espaco);
	static_cast<Entidade*> (auxiliar);
	Colecao.InserirElemento(auxiliar);
}

void Fases::Fase::CriarPedra(sf::Vector2f pos){
	Pedra* auxiliar = new Pedra();
	auxiliar->setPosicao(pos.x * espaco, pos.y * espaco);
	static_cast<Entidade*> (auxiliar);
	Colecao.InserirElemento(auxiliar);
}

void Fases::Fase::CriarChao(sf::Vector2f pos, int tipo){
	Chao* auxiliar = new Chao(tipo);
	auxiliar->setPosicao(pos.x * espaco, pos.y * espaco);
	Colecao.InserirElemento(auxiliar);
}

void Fases::Fase::CriarCactus(sf::Vector2f pos){
	Cactus* auxiliar = new Cactus();
	auxiliar->setPosicao(pos.x * espaco, pos.y * espaco); 
	static_cast<Entidade*> (auxiliar);
	Colecao.InserirElemento(auxiliar);
}

void Fases::Fase::Criar_Jogadores(sf::Vector2f pos) {
	Jogador* auxiliar = new Jogador();
	auxiliar->setPosicao(pos.x * espaco, pos.y * espaco);
	static_cast<Entidade*> (auxiliar);
	Colecao.InserirElemento(auxiliar);
}