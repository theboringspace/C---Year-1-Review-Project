#include <iostream>

float GetTemperature(int choice);
int   GetChoice();

int main()
{
    int   choice{};
    float temperature{};

    choice = GetChoice();
    temperature = GetTemperature(choice);

    std::cout << "Choice: " << choice << "\nTemperature: " << temperature;

    return 0;
}

float GetTemperature(int choice)
{
    float input{};
    bool  inputValid = false;

    while (!inputValid)
    {
        std::cout << "Please enter a temperature: ";

        if (std::cin >> input)
        {
            inputValid = true;
        }
        else
        {
            std::cout << "\n\nInvalid Input. Please try again.\n\n";
        }
    }

    switch(choice)
    {
        case 1 : return input * 9 / 5 + 32;
            break;
        case 2 : return (input - 32) * 5 / 9;
            break;
    }
      

    return input;
}

int GetChoice()
{
    int  input{};
    bool inputValid = false;

    while (!inputValid)
    {
        std::cout << "Pick an option for the Temperature Converter!\n"
                    "1) Celsius    -> Fahrenheit\n"
                    "2) Fahrenheit -> Celsius\n"
                    "3) Quit\n";

        if (std::cin >> input && input > 0 && input < 4)
        { 
            inputValid = true;
        }
        else
        {
            std::cout << "\n\nInvalid Input. Please try again.\n\n";
        }
    }

    return input;
}