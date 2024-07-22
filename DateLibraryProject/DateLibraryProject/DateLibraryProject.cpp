#include <iostream>

#include"clsString.h"
#include"clsDate.h"

using namespace std;

int main()
{   
    clsDate Date2("31/1/2024");
    Date2.Print();

    clsDate Date3(20, 12, 2024);
    Date3.Print(); clsDate Date1;
    Date1.Print();


    clsDate Date4(250, 2024);
    Date4.Print();

    Date1.IncreaseDateByOneMonth();
    Date1.Print();

    Date3.PrintYearCalendar();
    cout << Date2.IsValid() << endl;

    cout << "My Age InDays:" << clsDate::CalculateMyAgeInDays(clsDate(11, 11, 1995));
   


    system("pause>0");
    return 0;

};

