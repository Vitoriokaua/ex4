#include <iostream>
using namespace std;

//4. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
//Imprima o vetor, o maior elemento e a posição que ele se encontra.


void ler_vetor(int v[], int tam) {
	for (int i = 0; i < tam; i++){
		cout<<"informe um numero: ";
		cin >> v[i];
    }
}



void imprimir_vetor(int v[], int tam) {
	for (int i = 0; i < tam; i++){
		cout<< v[i]<<"  ";

	}

}

// Função para encontrar o elemento máximo e sua posição
void maior(int v[], int tam, int& max, int& pos) {
    max = v[0]; // Inicializa max com o primeiro elemento
    pos = 0;   // Inicializa pos com 0
    for (int i = 1; i < tam; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            pos = i;
        }
    }
}

int main() {
    const int tam = 10;
    int vetor[tam];
    int pos;
    int max;

    ler_vetor(vetor, tam); // Lê os inteiros no vetor
    imprimir_vetor(vetor, tam); // Imprime o vetor

    // Encontra o elemento máximo e sua posição
    maior(vetor, tam, max, pos);
    cout << "\nO Maior Valor digitado foi: " << max << " na posição " << pos << "\n";

    return 0;
}