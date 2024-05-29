#include <iostream>
#include <vector>
#include <string>

class TorresDeHanoi {
public:
    TorresDeHanoi(int n) : numDiscos(n) {}

    void resolver() {
        moverDiscos(numDiscos, "A", "C", "B");
    }

private:
    int numDiscos;

    void moverDiscos(int n, const std::string& origen, const std::string& destino, const std::string& auxiliar) {
        if (n == 1) {
            std::cout << "Mover disco 1 de " << origen << " a " << destino << std::endl;
        } else {
            moverDiscos(n - 1, origen, auxiliar, destino);
            std::cout << "Mover disco " << n << " de " << origen << " a " << destino << std::endl;
            moverDiscos(n - 1, auxiliar, destino, origen);
        }
    }
};

int main() {
    int numDiscos;
    std::cout << "Ingrese el número de discos: ";
    std::cin >> numDiscos;

    TorresDeHanoi torres(numDiscos);
    torres.resolver();

    return 0;
}
