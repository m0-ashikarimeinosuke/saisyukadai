#include <iostream>
using namespace std;

int main() { 
    int min = 10;
    int max = 15;
    size_t n = max - min;
    int even[] = { n };
    
    for (int i = min; i <= max; ++i)
        if (i % 2 == 0)cout << even[i] << ",";
    cout << endl;
    
    delete[] even;
}
