#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> cola;

    cola.push(1);
    cola.push(2);
    cola.push(3);

    while (!cola.empty()) {
        cout << cola.front() << endl;
        cola.pop();
    }

    return 0;
}
