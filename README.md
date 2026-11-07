# cis165-lab7

The program should ask the user for input in the form of integer values. Variables include input, smallest_value, and largest_value, which will be updated as more values are entered by the user. The program will check whether the newly entered value is smaller than the current smallest_value or larger than the current largest_value. This process will loop until the sentinel -99 is entered, when the program will display the final smallest and largest values.

|Test / data|Expected result|Actual result|
|-|-|-|
|8, 3, 12, -99|Smallest 3; largest 12.|Expected|
|-8, -3, -12, -99|Smallest -12; largest -3. The sentinel is excluded.|Expected|
|5, -99|Smallest 5; largest 5.|Expected|
|0, 0, -99|Smallest 0; largest 0.|Expected|
|-99|Clear no-data message.|Expected|
|11, -11, 19, -4|Smallest -11; largest 19.|Expected|
