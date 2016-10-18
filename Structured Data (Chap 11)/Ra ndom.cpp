#include <iostream>
3 #include <iomanip>
4 using namespace std;
5
6 enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
7
8 // Function prototype
9 void displayDayName(Day);
10
11 int main()
12 {
13 const int NUM_DAYS = 5; // The number of days
14 double sales[NUM_DAYS]; // To hold sales for each day
15 double total = 0.0; // Accumulator
16 Day workDay; // Loop counter
17
18 // Get the sales for each day.
19 for (workDay = MONDAY; workDay <= FRIDAY;
20 workDay = static_cast<Day>(workDay + 1))
21 {
22 cout << "Enter the sales for day ";
23 displayDayName(workDay);
24 cout << ": ";
25 cin >> sales[workDay];
26 }
27
28 // Calculate the total sales.
29 for (workDay = MONDAY; workDay <= FRIDAY;
30 workDay = static_cast<Day>(workDay + 1))
31 total += sales[workDay];
32
33 // Display the total.
34 cout << "The total sales are $" << setprecision(2)
35 << fixed << total << endl;
36
37 return 0;
38 }
39
40 //**********************************************************
41 // Definition of the displayDayName function *
42 // This function accepts an argument of the Day type and *
43 // displays the corresponding name of the day. *
44 //**********************************************************

46 void displayDayName(Day d)
47 {
48 switch(d)
49 {
50 case MONDAY : cout << "Monday";
51 break;
52 case TUESDAY : cout << "Tuesday";
53 break;
54 case WEDNESDAY : cout << "Wednesday";
55 break;
56 case THURSDAY : cout << "Thursday";
57 break;
58 case FRIDAY : cout << "Friday";
59 }
60 }














// This program demonstrates an enumerated data type.
2 #include <iostream>
3 #include <iomanip>
4 using namespace std;
5
6 enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
7
8 int main()
9 {
10 const int NUM_DAYS = 5; // The number of days
11 double sales[NUM_DAYS]; // To hold sales for each day
12 double total = 0.0; // Accumulator
13 int index; // Loop counter
14
15 // Get the sales for each day.
16 for (index = MONDAY; index <= FRIDAY; index++)
17 {
18 cout << "Enter the sales for day "
19 << index << ": ";
20 cin >> sales[index];
21 }
22
23 // Calculate the total sales.
24 for (index = MONDAY; index <= FRIDAY; index++)
25 total += sales[index];
26
27 // Display the total.
28 cout << "The total sales are $" << setprecision(2)
29 << fixed << total << endl;
30
31 return 0;
32 }
