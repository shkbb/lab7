#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;
    vector<int> numbers(n);
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    vector<int> primeNumbers;
    for (int num : numbers) {
        if (isPrime(num)) {
            primeNumbers.push_back(num);
        }
    }
    cout << "Прості числа: ";
    for (int num : primeNumbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
