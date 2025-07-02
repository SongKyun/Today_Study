#include <iostream>
using namespace std;
int num;
int main()
{
    cin >> num;
    if (num >= 90 && num <= 100) { cout << "A"; }
    else if(num >= 80 && num <= 89) { cout << "B"; }
    else if (num >= 70 && num <= 79) { cout << "C"; }
    else if (num >= 60 && num <= 69) { cout << "D"; }
    else { cout << "F"; }
}

// 7/2 : GameplayTag/explicit/시스템 콜/사용자 모드/커널 모드/래스터화/퀵 정렬

// C++ explicit / mutable