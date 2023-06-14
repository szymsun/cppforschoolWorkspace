#include <iostream>
#include <string>

using namespace std;

float jak_szybko(float t){
    float velocity = 1320 / t; 
    
    return velocity;
}

  


int main() { 
    
    cout << "time " << jak_szybko(2.5f) << " h\n";
    cout << "time " << jak_szybko(3.0f) << " h\n";
    
    return 0;
}

