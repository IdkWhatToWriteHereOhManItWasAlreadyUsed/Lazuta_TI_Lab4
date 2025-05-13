#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout, std::endl;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<int> calcOpenExps(int f)
{
    std::vector<int> exps;
    for (int e = 2; e < f; e++)
    {
        if (gcd(e, f) == 1)
            exps.push_back(e);
    }
    return exps;
}

int calcClosedExp(int e, int f)
{
    int d = 1;
    while ((e * ++d) % f != 1) {}
    return d;
}

int pow_mod(int a, int b, int mod) {
    int res = 1;
    a %= mod;
    while (b > 0) {
        if (b % 2 == 1) res = (1LL * res * a) % mod;
        a = (1LL * a * a) % mod;
        b /= 2;
    }
    return res;
}

bool is_prime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

// вычисление хеша строки
int calcMessageHash(const std::string& message, int p = 17, int H0 = 100 /* произвольное начальное значние! */)
{
    int n = p;
    int Hi = H0;

    for (char c : message)
    {
        // тут мб отнять 96 понадобится ну посмотрим кароч
        int Mi = static_cast<unsigned char>(c);
        Hi = ((Hi + Mi) * (Hi + Mi)) % n;
    }

    return Hi;
}

int calcSignature(int m, int d, int r)
{
    return(pow_mod(m, d, r));
}