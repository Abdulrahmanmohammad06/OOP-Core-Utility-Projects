#include <iostream>
#include "clsPeriod.h"

int main()

{

    clsPeriod Period1(clsDate(1, 1, 2022), clsDate(10, 1, 2022));
    Period1.Print();

    cout << "\n";

    clsPeriod Period2(clsDate(3, 1, 2022), clsDate(5, 1, 2022));
    Period2.Print();


   
    cout << Period1.IsOverLapWith(Period2) << endl;


   
    cout << clsPeriod::IsOverlapPeriods(Period1, Period2) << endl;

    system("pause>0");
    return 0;
}