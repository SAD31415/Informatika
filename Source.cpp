#include <cmath> 
#include <locale>
int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    float x, y;
    std::cout << "Введите X и Y: ";
    std::cin >> x >> y;

    float R = 1 / tan(M_PI * x) - 1 / cos(y); // ctg(π * x) - sec(y) 
    float S = log(2 * x); // ln(2 * x)

    std::cout << "R = " << R << std::endl;
    std::cout << "S = " << S << std::endl;

    float C = std::fmax(R, S);

    std::cout << "Максимальное значение C = " << C << std::endl;
    system("pause");
    return 0;
}
