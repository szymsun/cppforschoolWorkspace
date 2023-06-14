#include <iostream>


using namespace std;

int time_NYC(int _time){
    
    if(_time - 6 < 0){
        return (_time - 6) + 24;
    }
    else{
        return _time - 6;
    }
    
    
    
    
}


int main() { 
    cout << time_NYC(18) << endl;
    cout << time_NYC(2) << endl;

    return 0;
}

