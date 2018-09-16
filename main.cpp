#include <iostream>
#include "Vector3.h"

using namespace std;

int main(){
    
    // abaixo está a criação de uns vetores e uns testes para os métodos implementados.
    Vector3 vetor1(7, 3, 5);
    Vector3 vetor2(-8, 4, 2);
    Vector3 vetor3(3, 0, -2);
    Vector3 vetor4(1, -2, 2);
    Vector3 vetor5 = vetor3 + vetor4;
    Vector3 vetor6 = vetor2 - vetor1;
    Vector3 vetor7 = vetor3 * 4;
    Vector3 vetor8 = vetor2 / 2;
    Vector3 vetor9(1, 2, -2);
    Vector3 vetor10(3, 0, 1);
    
    cout << "Vetor 1: " << endl;
    vetor1.showVector();
    cout << "\nVetor 2: " << endl;
    vetor2.showVector();
    cout << "\nVetor 3: " << endl;
    vetor3.showVector();
    cout << "\nVetor 4: " << endl;
    vetor4.showVector();
    cout << "\nVetor 5: " << endl;
    vetor5.showVector();
    cout << "\nVetor 6: " << endl;
    vetor6.showVector();
    cout << "\nVetor 7: " << endl;
    vetor7.showVector();
    cout << "\nVetor 8: " << endl;
    vetor8.showVector();
    cout << "\nVetor 9: " << endl;
    vetor9.showVector();
    cout << "\nVetor 10: " << endl;
    vetor10.showVector();
    
    cout << endl << "====================================================================" << endl;
    
    vetor1 *= 2;
    cout << "\nVetor 1 multiplicado por 2: " << endl;
    vetor1.showVector();
    
    cout << endl << "====================================================================" << endl;
    
    vetor2 /= 2;
    cout << "\nVetor 2 dividido por 2: " << endl;
    vetor2.showVector();
    
    cout << endl << "====================================================================" << endl;
    
    cout << "\nNorma do vetor 3: " << vetor3.norma() << endl;
    
    vetor4.normalizarVetor();
    cout << "\nVetor 4 normalizado: " << endl;
    vetor4.showVector();
    
    cout << endl << "====================================================================" << endl;
    
    cout << "\nProduto escalar entre vetor1 e vetor2: " << vetor1.produtoEscalar(vetor2) << endl;
    
    cout << endl << "====================================================================" << endl;
    
    // há 3 maneiras de se gerar um produto vetorial entre 2 vetores:
    // utilizarei o vetor9 e vetor 10 cujo produto vetorial é (2, -7, -6) para formar o vetor11 e vetor12 que devem ter o mesmo valor.
    // na terceira maneira irei modificar diretamente o vetor9 para ser o produto vetorial dele com o vetor10.
    Vector3 vetor11 = vetor9.produtoVetorial(vetor10);
    Vector3 vetor12 = vetor9 % vetor10;
    
    cout << "\nVetor 11: " << endl;
    vetor11.showVector();
    cout << "\nVetor 12: " << endl;
    vetor12.showVector();
    
    vetor9 %= vetor10;
    
    cout << "\nVetor 9 que foi modificado para ser o produto vetorial dele com o vetor 10: " << endl;
    vetor9.showVector();
    
    cout << "\nVetor UP: " << endl;
    Vector3::UP.showVector();
    
    cout << "\nVetor DOWN: " << endl;
    Vector3::DOWN.showVector();
    
    if (vetor1 != vetor2){
        cout << "\nVetor 1 é diferente do vetor 2." << endl;
    } else {
        cout << "\nVetor 1 é igual ao vetor 2." << endl;
    }
    
    Vector3 vetor13(3, 0, 1);
    
    if (vetor10 == vetor13){
        cout << "\nVetor 10 é igual ao vetor 13." << endl;
    } else {
        cout << "\nVetor 10 é diferente do vetor 13." << endl;
    }
    
    cout << "\nO angulo entre LEFT e UP é: " << Vector3::LEFT.angle(Vector3::UP) << " graus." << endl;
    
    Vector3 vetor14 = vetor13.reflect(vetor4);
    cout << "\nO vetor 13 refletido em relação a normal do vetor 4 é: " << endl;
    vetor14.showVector();
    
    Vector3 vetor15;
    vetor15.showVector();
    
    cout << endl;
    
    return 0;
}