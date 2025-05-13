#pragma once
#ifndef MATH_H
#define MATH_H

#include <vector>
#include <cstdint>

// ������� trailing zeros (���������� ������� ������� �����)
uint32_t ctz(uint32_t value);

// ������� leading zeros (���������� ������� ������� �����)
uint32_t clz(uint32_t value);

// �������� �� �������� (���� �������-������)
bool is_prime(int n, int k = 5);

// ��������� ������ ������� ��������� �����
std::vector<int> prime_factors(int n);

// ������� ���������� � ������� �� ������
int pow_mod(long long a, long long b, long long mod);

// ��������, �������� �� ����� ������������� ������
bool is_primitive_root(int g, int p, const std::vector<int>& factors);

// ����� ���� ������������� ������ �� �������� ������ p
std::vector<int> find_primitive_roots(int p);

// �������������� ���������� ���������� � ������� �� ������
int exp_module(int G, int X, int P);

// ��������� ���������� �������� ����� � ��������� [min, max]
int getRandomPrime(int min, int max);

// ���������� �������� ���������
std::vector<int> calcOpenExps(int f);

// ���������� �������� ����������
int calcClosedExp(int e, int f);

#endif // MATH_H