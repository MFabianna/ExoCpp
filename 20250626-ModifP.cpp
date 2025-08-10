#include <iostream>
#include <string>
using namespace std;

int main(){
    string P, nouvMot, motRemp, motRecup = "", nouvellePhrase = "";

    cout << "Ecrivez une phrase!" << endl;
    getline(cin, P);

    cout << "Longueur de la phrase est: " << P.length() << endl;

    cout << "Veuillez choisir le mot à remplacer : ";
    cin >> motRemp;

    cout << "Entrez le nouveau mot : ";
    cin >> nouvMot;

    // Pour bien capter le dernier mot
    P += ' ';

    for(int i = 0; i < P.length(); i++){
	// Récupération des caractères dans P jusqu'à ce qu'on trouve un espace 
        if(P[i] != ' '){
            motRecup = motRecup + P[i];
        } else {
            // Quand on rencontre un espace, on compare le mot récupéré au mot à remplacer 
		    if(motRecup == motRemp){
                // Ajout du nouveau mot
                nouvellePhrase = nouvellePhrase + nouvMot + " ";
            } else {
                // Sinon, on garde le mot tel quel
                nouvellePhrase = nouvellePhrase + motRecup + " ";
            }
            // On réinitialise motRecup pour recommencer avec un nouveau mot
            motRecup = "";
        }
    }

    // Afficher la nouvelle phrase
    cout << "Nouvelle phrase : " << nouvellePhrase << endl;

    return 0;
}