#include <iostream>
#include <cmath>

void Power(float, float);
void Sine(float);
void Square(float);
void Cos(float);
void Tan(float);
void Log(float);
void Baselog(float);

int main()
{
    float a, b;
    int z;

    std::cout << "WHAT YOU WANT TO FIND: " << std::endl;
    std::cout << "Press '1' for Power: " << std::endl;
    std::cout << "Press '2' for Sin: " << std::endl;
    std::cout << "Press '3' for Square: " << std::endl;
    std::cout << "Press '4' for Cos: " << std::endl;
    std::cout << "Press '5' for Tan: " << std::endl;
    std::cout << "Press '6' for Log: " << std::endl;
    std::cout << "Press '7' for Base Log: " << std::endl;

    std::cin >> z;

    switch (z)
    {
    case 1:
        std::cout << "Enter the Number for Calculating its Power: " << std::endl;
        std::cin >> a;
        std::cout << "Enter the Power for a Number: " << std::endl;
        std::cin >> b;
        Power(a, b);
        break;

    case 2:
        std::cout << "Enter the Number for Calculating SIN: " << std::endl;
        std::cin >> a;
        Sine(a);
        break;

    case 3:
        std::cout << "Enter the Number for Calculating Square: " << std::endl;
        std::cin >> a;
        Square(a);
        break;

    case 4:
        std::cout << "Enter the Number for Calculating COS: " << std::endl;
        std::cin >> a;
        Cos(a);
        break;

    case 5:
        std::cout << "Enter the Number for Calculating TAN: " << std::endl;
        std::cin >> a;
        Tan(a);
        break;

    case 6:
        std::cout << "Enter the Number for Calculating LOG: " << std::endl;
        std::cin >> a;
        Log(a);
        break;

    case 7:
        std::cout << "Enter the Number for Calculating LOG WITH BASE 10: " << std::endl;
        std::cin >> a;
        Baselog(a);
        break;
    }

    return 0;
}

void Power(float x, float y)
{
    float p;
    p = std::pow(x, y);
    std::cout << "Power: " << p;
}

void Sine(float x)
{
    float s;
    s = std::sin(x);
    std::cout << "Sin: " << s;
}

void Square(float x)
{
    float sq;
    sq = std::sqrt(x);
    std::cout << "Square of a Given Value is: " << sq;
}

void Cos(float x)
{
    float c;
    c = std::cos(x);
    std::cout << "COS: " << c;
}

void Tan(float x)
{
    float t;
    t = std::tan(x);
    std::cout << "TAN: " << t;
}

void Log(float x)
{
    float l;
    l = std::log(x);
    std::cout << "Natural Logarithm: " << l;
}

void Baselog(float x)
{
    float bl;
    bl = std::log10(x);
    std::cout << "LOG with Base 10: " << bl;
}
