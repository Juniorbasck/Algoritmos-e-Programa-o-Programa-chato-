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
    cout << "se vc n�o quiser digite: n�o" << endl;
    cin >> pergunta1;

    switch(pergunta1)
    {
     case 'sim':
         cout << "s� vamos ent�o" << endl;
         break;
     case 'n�o':
         cout << "vamos sim conversar e fica quieto" << endl;
         break;
    }

  //pergunta 2
  cout << "Qual � o seu nome?" << endl;
  cin >> nome;
  cout << "Nossa que nome feio, com um nome assim nunca vai ter respeito" << endl;

  cout << "vc � de qual cidade?" << endl;
  cout << "escolha pela letra" << endl;
  cout << " A - s�o paulo" << endl;
  cout << " B - Campinas" << endl;
  cout << " c - Americana" << endl;
  cout << " D - outra"<< endl;

  cin >> cidade;

  if(cidade == a)
      cout << "cidade feia s� tem polui��o" << endl;
    else if (cidade == B)
      cout << "essa cidade � muito longe, e tamb�m n�o gosto dela" << endl;
    else if (cidade == c)
      cout << "essa cidade s� tem velho, n�o encontra ningu�m com menos de 30 nessa cidade" >> endl;
    else
    cout << "se vc n�o � de nenhumas dessas cidades n�o importa" endl;

  //pergunta 3
  cout << "vc tem irm�os ou irm�s?" << endl;
  cout << "responda com sim ou n�o" <<< endl;
  cin >> pergunta3;
    if(pergunta == sim)
        cout << "Nossa espero que eles n�o sejam feios igual a vc" << endl;
    else
        cout << "Al�m de feio � solitario"


  //pergunta 4
  cout << "vc trabalha" << endl;
  cin >> pergunta4;
  switch(pergunta4)
  {
      case 'sim'
        cout << "Deve fazer tudo errado no trabalho" << endl;
        break;
      case 'n�o'
        cout << "sabia, deve ser um desoculpado, que s� dorme o dia inteiro!" << endl;
        break;
  }

  //pergunta 5
   cout << "E vc tem quantos anos?"
   cin >> idade;
     if(idade >= 35)
        cout << "nossa vc � muito velho, ta explicado porque � feio assim" endl;
     else
        cout << "vc � jovem mas continua feio" << endl;
  //pergunta final
  cout << "nossa j� cansei de falar com vc" endl;
  cout << "gostou de falar comigo?" endl;
  cin << pergunta6;
  cout << "nem sei pq perguntei se vc gostou, pq n�o me importo" endl;
  cout << "tchau!" << endl;

  return 0;
}
