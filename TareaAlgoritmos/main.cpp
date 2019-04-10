#include <iostream>
using namespace std;

int main() {

	int arreglo[10] = { 9,3,5,8,2,1,4,6,7 };
	int temp = 0;
	int buscar = 0;
	bool encontro = false;

	//Arreglar
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 10 - 1; j++) {
			if (arreglo[j] > arreglo[j + 1]) {
				temp = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = temp;
			}
		}
	}

	//Imprimir arreglo ahora en orden
	for (int j = 0; j < 10; j++) {
		int cont = j + 1;
		cout << cont << ". " << arreglo[j] << "\n";
	}

	//Buscar
	cout << "Que elemento desea buscar?\n";
	cin >> buscar;
	
	for (int x = 0; x < 10;x++) {
		if (arreglo[x] == buscar)
			encontro = true;
	}

	cout << (encontro ? "El elemento se encuentra en la lista\n" : "El elemento no se encontro dentro de la lista\n");

	//Ordenamiento inverso
	int aux = 0;
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arreglo[j] < arreglo[j + 1]) {
				aux = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = aux;
			}
		}
	}

	//Imprimir en nuevo orden
	for (int c = 0; c < 10; c++) {
		cout << c + 1 << ". " << arreglo[c] << "\n";
	}

	system("pause");

}
