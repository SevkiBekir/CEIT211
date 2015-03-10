# Lab 1 Homework
# 1.
Write a C++ program which prints the calendar of a month. This program should ask for the following information from user:
Days of month (e.g. 28, 29, 30, 31),
Starting day of week (e.g. 1 for monday, 3 for wednesday, 7 for sunday, etc)
Then, this program should pass these values to a function and this function should display a monthly calendar accordingly.
Sample Run:

Enter days of month: 31
Enter starting day: 3

        1   2   3   4   5
6   7   8   9   10  11  12
13 14   15  16  17  18  19
20 21   22  23  24  25  26
27 28   29  30  31

Enter days of month: 28
Enter starting day: 6

                         1   2
3     4    5    6    7   8   9
10   11   12  13  14    15  16
17   18   19  20  21    22  23
24   25   26  27  28

# 2.
When an automobile is moving through the atmosphere, it must overcome a force called drag that works against the motion of the vehicle. The drag force can be expressed as
F = 1⁄2 CD * A * p * V * V
where F is the force, CD is the drag coefficient, A is the projected area of
the vehicle, p (p = 1.23) is the density of the gas and V is the body's velocity. For an automobile, the range of drag coefficient is from approximately 0.2 to 0.5. Write a program that allows a user to input A and CD interactively and calls a function to compute and return drag force. Your program should call the drag force function, that receives velocity, CD and area values as parameters,
repeatedly and display a table showing drag force for the input shape for a range of velocities from 5 to 40 in increments 5.

Sample Run:
Please enter drag coefficient value : 0.6
Invalid coefficient value !!!
Please enter drag coefficient value : 0.3
Please enter projected area : 10
Velocity      Drag Coefficient      Area      Force
5             0.3                   10        46.125
Please enter drag coefficient value : 0.4
Please enter projected area : 20 Velocity Drag Coefficient
Velocity      Drag Coefficient      Area      Force
1             0.4                   20        492

# 3.
The electric company charges according to the following rate schedule: 9 cents per kilowatt-hour for the first 300 kwh
8 cents per kilowatt-hour for the next 300 kwh (up to 600 kwh)
6 cents per kilowatt-hour for the next 400 kwh (up to 1000 kwh)
5 cents per kilowatt-hour for all electricity used over 1000 kwh
Write a function that receives necessary parameters to compute the total charge for each customer. Write a main function will input customer number and Kilowatt-hours Used and will call the charge calculation function using the following data:

Customer Number
     123
     205
     464
     596
     601
     613
     722

Kilowatt-hours Used
     725
     115
     600
     327
     915
     1011
     47

Example: First customer is 123 and s/he used 725 kwh.

￼￼# 4.
Write a
shown in below.
+ add
- subtract
* multiply
/ divide
^ power
q quit
Your calculator should display the accumulator value after each operation. Sample Run:
Please enter operation symbol and the value: + 5
Result is 5.0
Please enter operation symbol and the value: ^ 2
Result is 25.0
Please enter operation symbol and the value: / 2
Result is 12.5
Please enter operation symbol and the value: q 0
Final result is 12.5

# NOTE
If you do not understand this README.md, you can look at pdf file in this folder.
