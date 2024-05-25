#include <functional>

template<typename T>
void ingreso(T* p, int t, std::function<T()> ingresoFunc);

template<typename T>
void impresion(T* p, int t);

template<typename T>
void proceso(T* p, int t, std::function<T(T)> procesoFunc);




