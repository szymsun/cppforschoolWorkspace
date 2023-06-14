#include <iostream>
#include <string>

using namespace std;


float Calc(float _miles){
    return _miles * 1.909;
}


int main() { 
// co to jest czas
    std::cout << Calc(10) << "km\n";
    std::cout << Calc(12) << "km\n";

    return 0;
}

