#include <iostream>
#include <Windows.h>
#include"D4.h";
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    B1 o0(777);
    cout << "B1 o0(777);" << endl;
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << endl << "Ієрархія класу B1: " << endl;
    o0.show_B1();
    cout << "~~~~~~" << endl;

    B2 o1(111);
    cout << "B2 o1(111);" << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << endl << "Ієрархія класу B2: " << endl;
    o1.show_B2();
    cout << "~~~~~~" << endl;
    D1 o2(333,111,222);
    cout << "D1 o2(333,111,222);" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << endl << "Ієрархія класу D1: " << endl;
    o2.show_D1();
    cout << "~~~~~~" << endl;

    D2 o3(444);
    cout << "D2 o3(444);" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << endl << "Ієрархія класу D2: " << endl;
    o3.show_D2();
    cout << "~~~~~~" << endl;

    D3 o4(555,444,333,222,111);
    cout << "D3 o4(555,444,333,222,111);" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << endl << "Ієрархія класу D3: " << endl;
    o4.show_D3();
    cout << "~~~~~~" << endl;

    D4 o5(666, 555, 444, 333, 222, 111);
    cout << "D4 o4(666, 555, 444, 333, 222, 111);" << endl;
    cout << "sizeof(D4) = " << sizeof(D4) << endl;
    cout << endl << "Ієрархія класу D4: " << endl;
    o5.show_D4();
    cout << "~~~~~~" << endl;
}

