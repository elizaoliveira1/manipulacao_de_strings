#include<iostream>
#include<string>
#include<vector>

using namespace std;

string myString = "Nao estou em casa. Por favor ligue mais tarde ou nao ligue. ";

int palavra(){

    int palavrinhas = 1;

    for (int i = 0; 1 < myString.length(); i++){
        if (myString[1] == ' '){
            palavrinhas++;
        }
    }

    return palavrinhas;

}
  void repetida(){

  vector <string> palavras_frase;

  string palavra_frase;

   for(int i = 0; i < myString.length(); i++){
      if (myString[i] != ' '){
        palavra_frase = myString[i];

      }else{

        palavras_frase.push_back(palavra_frase);

      }
   }
}

 int main (){

    cout << myString << endl << endl;


    ///--------------------------------parte 1------------------------------------

    cout << "1. O número de caracteres dessa frase: " << myString.at(8) << endl;

    ///--------------------------------parte 2------------------------------------

    cout << "2. O número de caracteres dessa frase: " << myString.length() << endl;

    ///--------------------------------parte 3------------------------------------

    cout << "3. O número de vezes que a letra “a” aparece na frase: " << myString.find("a") << endl;

    ///--------------------------------parte 4------------------------------------

    cout << "4. A quantidade de palavras repetidas: " << repetida << endl;

    ///--------------------------------parte 5------------------------------------

    cout << "5. Troque a primeira palavra da frase pela última: " << myString.assign(" ligue estou em casa. Por favor ligue mais tarde ou nao Nao. ") << endl;

return 0;
}
