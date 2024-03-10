#include <iostream>

using namespace std;

int main()
{
    int n;
    int fib1 = 0, fib2 = 1;
    int aux;
    
    cin >> n;
    
    if (n == 0 || n == 1) {
        cout << "Pertence" << endl;
        return 0;
    }
    
    while (fib2 <= n) {
        aux = fib1 + fib2;
        fib1 = fib2;
        fib2 = aux;
        
        if (fib2 == n) {
            cout << "Pertence" << endl;
            return 0;
        }
    }
    
    
    cout << "Não pertence" << endl;
    
    return 0;
}
