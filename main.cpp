#include <iostream>
#include <locale>
#include <cstring>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cidade, nome, pergunta1, pergunta3, pergunta4, idade, pergunta6;

    //Pergunta 1
    cout << "Eae vamos conversar?" << endl;
    cout << "Se vc quiser digite: sim" << endl;
    cout << "se vc não quiser digite: não" << endl;
    cin >> pergunta1;

    switch(pergunta1)
    {
     case 'sim':
         cout << "só vamos então" << endl;
         break;
     case 'não':
         cout << "vamos sim conversar e fica quieto" << endl;
         break;
    }

  //pergunta 2
  cout << "Qual é o seu nome?" << endl;
  cin >> nome;
  cout << "Nossa que nome feio, com um nome assim nunca vai ter respeito" << endl;

  cout << "vc é de qual cidade?" << endl;
  cout << "escolha pela letra" << endl;
  cout << " A - são paulo" << endl;
  cout << " B - Campinas" << endl;
  cout << " c - Americana" << endl;
  cout << " D - outra"<< endl;

  cin >> cidade;

  if(cidade == a)
      cout << "cidade feia só tem poluição" << endl;
    else if (cidade == B)
      cout << "essa cidade é muito longe, e também não gosto dela" << endl;
    else if (cidade == c)
      cout << "essa cidade só tem velho, não encontra ninguém com menos de 30 nessa cidade" >> endl;
    else
    cout << "se vc não é de nenhumas dessas cidades não importa" endl;

  //pergunta 3
  cout << "vc tem irmãos ou irmãs?" << endl;
  cout << "responda com sim ou não" <<< endl;
  cin >> pergunta3;
    if(pergunta == sim)
        cout << "Nossa espero que eles não sejam feios igual a vc" << endl;
    else
        cout << "Além de feio é solitario"


  //pergunta 4
  cout << "vc trabalha" << endl;
  cin >> pergunta4;
  switch(pergunta4)
  {
      case 'sim'
        cout << "Deve fazer tudo errado no trabalho" << endl;
        break;
      case 'não'
        cout << "sabia, deve ser um desoculpado, que só dorme o dia inteiro!" << endl;
        break;
  }

  //pergunta 5
   cout << "E vc tem quantos anos?"
   cin >> idade;
     if(idade >= 35)
        cout << "nossa vc é muito velho, ta explicado porque é feio assim" endl;
     else
        cout << "vc é jovem mas continua feio" << endl;
  //pergunta final
  cout << "nossa já cansei de falar com vc" endl;
  cout << "gostou de falar comigo?" endl;
  cin << pergunta6;
  cout << "nem sei pq perguntei se vc gostou, pq não me importo" endl;
  cout << "tchau!" << endl;

  return 0;
}
