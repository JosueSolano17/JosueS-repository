#include <iostream>
#include <functional>
#include <vector>

using namespace std;

template<class TIPO, int size>
vector<TIPO> Secuencia(TIPO a, TIPO b, function<TIPO(TIPO, TIPO, int)> secu) {
    vector<TIPO> result;
    for (int i = 0; i < size; i++) {
        result.push_back(secu(a, b, i));
    }
    return result;
}

int main() {
    constexpr int size = 10;

    auto arr = Secuencia<int, size>(1, 10, [](int a, int b, int i) -> int {
        int step = (b - a) / (size - 1);
        return a + step * i;
    });

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




