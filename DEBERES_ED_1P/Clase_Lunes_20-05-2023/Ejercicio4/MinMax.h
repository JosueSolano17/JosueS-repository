
template<typename T>
class MinMaxCalculator {
public:
    MinMaxCalculator(T a, T b) : value1(a), value2(b) {}

    T max() const { return (value1 > value2) ? value1 : value2; }
    T min() const { return (value1 < value2) ? value1 : value2; }

private:
    T value1;
    T value2;
};


