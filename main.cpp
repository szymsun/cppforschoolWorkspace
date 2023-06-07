#include <iostream>
#include <string>

using namespace std;



int main() {
    cout << "Czas: " << jak_szybko(2.5f) << " h\n";
    cout << "Czas: " << jak_szybko(3.0f) << " h\n";
    
    return 0;
}

int jak_szybko(float Czas){
    float velocity = 1320 / Czas; 
    
    return velocity;
}
