#ifndef MATH_H
#define MATH_H

#include <iostream>
#include <string>
#include <vector>

bool is_prime(int n);

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b);

// Function to calculate open exponents
std::vector<int> calcOpenExps(int f);

// Function to calculate closed exponent
int calcClosedExp(int e, int f);

// Function to perform modular exponentiation
int pow_mod(int a, int b, int mod);

// Function to compute the hash of a string
int calcMessageHash(const std::string& message, int p = 17, int H0 = 100);

// Function to calculate the digital signature
int calcSignature(int m, int d, int r);

#endif // MATH_H