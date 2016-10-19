/*
main file

*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <list>

using namespace std;

void creerGraphe(string fileName) {

	ifstream textFile;
	textFile.open(fileName);
	string lineByLine;
	string copyLine;
	string infoChars;
	string unSommet[2];
	string unArc[2];
	//list<Sommet> sommets;
	//list<Arc> arcs;


	if (textFile.is_open()) {

	while (!textFile.eof()){
		getline(textFile, lineByLine);
		stringstream lineOne(lineByLine);

		while (getline(lineOne, copyLine, ';')){
			stringstream copyVerticex(copyLine);
			for (int i = 0;  i < 2; i++) {
					getline(copyVerticex, infoChars, ',');
					unSommet[i] = infoChars;
                cout << infoChars << endl;
			}
				//sommet(unSommet[0], unSommet[1]);
			//sommets.push_back(sommet);
		}

		lineByLine.clear();
		copyLine.clear();
		infoChars.clear();

		getline(textFile, lineByLine);
		stringstream lineTwo(lineByLine);

		while (getline(lineTwo, copyLine, ';')){
			stringstream copyArcs(copyLine);

			for (int i = 0; i < 3; i++) {
				getline(copyArcs, infoChars, ',');
				unArc[i] = infoChars;
			}
			//arc(unArc[0], unArc[1]);
			//arcs.push_back(arc);
		}


	}

	// graph(sommets,arcs);
        
    }
    else{
        
        cout << "Ouverture du fichier echouee!";
    }
}
	




int main() {
	string name = "graphetest.txt";

	string stop;
	creerGraphe(name);
	cin >> stop;
	return 0;
}