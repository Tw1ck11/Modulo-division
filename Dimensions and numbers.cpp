// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

using namespace std;

double square_calc(double a, double b, double c) {
    double s = 2 * (a * b + b * c + a * c);
    return s;
}

int main()
{
    ///////Task 1
    setlocale(0, "rus");

    double width; 
    double height; 
    double length; 

    double N;
    double M;
    double R; 

    double square; 
    double cost; 
    double to_paint; 

    cout << "Room length(м): ";
    cin >> length;

    cout << "Room width (м): ";
    cin >> width;

    cout << "Room height (м): ";
    cin >> height;

    cout << "How many l. paint goes per sq. m.: ";
    cin >> N;

    cout << "What % of the surface is occupied by windows, doors ";
    cin >> M;

    cout << "How much is 1 l. paints (UAH): ";
    cin >> R;

    square = square_calc(length, width, height);

    square -= square * M / 100; 

    to_paint = ceil(square * N); 

    cost = to_paint * R;

    cout << "Painting such a room will cost you " << cost << " UAH\n";
    cout << "You will need " << to_paint << " l. paint\n";


    //////Task 2
    int findMaximum(int arr[]) {
        int max = 0;
    
        for (int i = 0; i < 5; i++)
        {
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        return max;
    }

    int findMinimum(int arr[]) {
        int min = findMaximum(arr);
        for (int i = 0; i < 5; i++)
        {
            if (min > arr[i]) {
                min = arr[i];
            }
        }
        return min;
    }


    int main()
    {

        int arr[5];

        cout << "Enter 5 numbers: \n";

        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }

        cout << "\n Smallest number: " << findMinimum(arr) << "\n";
    }



    //////Task 3
    string check(double x) {
        if (x < 0)
        {
            return "Positive";
        }
        else if (x > 0)
        {
            return "Negative";
        }
        else
        {
            return "It is 0";
        }
    }

    int main()
    {

        double num;

        cout << "Enter number: ";
        cin >> num;

        cout << " Your number is: " << check(num) << "\n";
    }



    //////Task 4
    double calculate(double x, char operation, double y) {
        if (y != 0)
        {
            switch (operation)
            {
            case '+':
                return x + y;
            case '-':
                return x - y;
            case '*':
                return x * y;
            case '/':
                return x / y;
            case '%':
                return fmod(x, y);
            }
        }
        else {
            return 0.0;
        }

    }

    int main()
    {
        double x;
        double y;
        char operation;

        cout << "Welcome to the calculator.\n";

        while (true)
        {
            cout << "Calculator features : +, -, *, /, %.\n";
            cout << "Example: 10.3 + 20, result: 30.3\n";

            cin >> x >> operation >> y;

            cout << "Result: " << calculate(x, operation, y) << "\n";
            system("pause");
            system("cls");
        }
    }
}

