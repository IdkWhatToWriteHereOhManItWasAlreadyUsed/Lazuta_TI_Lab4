#include <string>
#include "RSAChecker.h"


int getHash(const std::string& message, int p = 17, int q = 19, int H0 = 100) 
{
    int n = p * q;
    int Hi = H0;

    for (char c : message) {
        int Mi = static_cast<unsigned char>(c); // Получаем числовое значение символа (0-255)
        Hi = (Hi + Mi) * (Hi + Mi) % n;        // Формула (3.2): (H_{i-1} + M_i)^2 mod n
    }
    return Hi;
}