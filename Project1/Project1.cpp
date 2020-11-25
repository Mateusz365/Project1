// Project1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

void setValue(int* a) {
    *a = 20;

}


int main()
{
    int a = 2;
    int b = 4;
    int c = 8;
    int d = 20;
    cout <<"Przed zmiana: "<< a << endl;
    setValue(&a);
    cout <<"Po zmianie: "<< a << endl;

}

