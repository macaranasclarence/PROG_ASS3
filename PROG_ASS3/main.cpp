#include <iostream>

using namespace std;

int main()
{
    int y, b, age;

    cout << " << Millenial or Batang 90's? >>" <<endl <<endl;
    cout << "Enter the year today: ";
    cin >> y;
    cout << "Enter  the year of your birthday: ";
    cin >> b;

    // difference of y and b in stored variable age
    age = y - b;

    // Prints difference
    cout << y << " - " << b << " = " << age <<endl;
    if (age> 18 ){
        cout << "Batang 90's! ";
    }
    else if (age <= 18 ){
        cout << "Millenial Baby! ";
    }

    return 0;

}

