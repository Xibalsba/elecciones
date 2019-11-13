#include <iostream>
#include <fstream>

using namespace std;
using std::ifstream;
using std::ofstream;

int main(int argc, char **argv){
 int cantidad_candidatos;
 int cantidad_distritos;
 cout << "Cantidad de candidatos:";
 cin >> cantidad_candidatos;
 cout << "Cantidad de distritos";
 cin >> cantidad_distritos;
 
 string candidatos[cantidad_candidatos];
 string candidato;
 string voto;
 
 ofstream archivo("archivo.txt", std::fstream::in | std::fstream::out | std::fstream::app);
 
 for(int i = 0; i < cantidad_candidatos; i++){
  cout << "\n******* Candidato " << i + 1 << "********:\n";
        cout << "Nombre del candidato: ";
  cin >> candidato;
  candidatos[i] = candidato;
  archivo << candidato+"\t";
 }
 
 for(int l = 0; l < cantidad_distritos; l++){
  archivo << "\n";
  for(int m = 0; m < cantidad_candidatos; m++){
   cout << "\n******* Candidato " <<  candidatos[m] << "******** Distrito: " << l+1 << "********:\n";
   cout << "Cantidad de votos: ";
   cin >> voto;
   archivo << voto+"\t";
  }
 }
 
}