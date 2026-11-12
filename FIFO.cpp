#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> A;
    int B, C;

    cout << "Cuantos valores desea ingresar: ";
    cin >> B;

    for (int D = 0; D < B; D++) {
        cout << "Ingrese un valor: ";
        cin >> C;
        A.push(C);
    }

    cout << "\nElementos en orden:\n";

    while (!A.empty()) {
        cout << A.front() << endl;
        A.pop();
    }

    return 0;
}