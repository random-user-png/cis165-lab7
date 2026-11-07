#include <iostream>

int main()
{
    int input, smallest_value, largest_value;
    bool error_flag = false;
    bool first = true;
    input = 0;
    std::cout << "Enter integers. Finish by entering -99. ";
    while (input != -99)
    {
        std::cin >> input;
        if (first == true)
        {
            if (input == -99)
            {
                error_flag = true;
            }
            else
            {
                smallest_value = input;
                largest_value = input;
            }
        first = false;
        }
        if ((input < smallest_value) && (input != -99))
        {
            smallest_value = input;
        }
        if ((input > largest_value) && (input != -99))
        {
            largest_value = input;
        }
    }

    if (error_flag)
    {
        std::cout << "Error: no data values were entered.\n";
    }
    else
    {
        std::cout << "Smallest value: " << smallest_value << std::endl;
        std::cout << "Largest value: " << largest_value;
    }

    return 0;
}