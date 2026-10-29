Assignment 02 - Default Arguments & Function Overloading

Course: Object Oriented Programming

Student Name: Muhammad Tallal Atif

Registration Number: L1F25BSCS0704

Submission Deadline: October 29, 2026 at 11:59 PM

📌 Repository Overview

This repository contains the solution implementation for Assignment 02 focusing on Default Arguments and Function Overloading in C++. Each task explores core C++ function mechanics, compiler overload resolution rules, parameter matching order/type promotions, and file processing.

📁 Program Summaries

Task 1 & Repository Files

README.md: Provides student identification, assignment breakdown, and a summary of each program implementation.

p1_mobile_bill.cpp: Solves Problem 1 by implementing default parameter values for calculating mobile call, SMS, and data usage bills with structured output formatting.

p2_student_info.cpp: Solves Problem 2 using five overloaded variants of printInfo() to display student card details based on varying parameter types, counts, and orders.

p3_array_tools.cpp: Solves Problem 3 featuring generic array operations (sumArray, countAbove, printArray) overloaded for int and double types alongside default parameters.

p4_ride_fare.cpp: Solves Problem 4 implementing a multi-tiered ride-booking fare calculator using four overloaded fare() functions, file output operations (rides.txt), and ambiguity error analysis.

📝 Program Specifications & Problem Details

Problem 1: Mobile Bill (p1_mobile_bill.cpp)

Objective: Complete missing function prototypes, definitions, and calls using default arguments.

Key Logic:

Base rate: Rs. 2/min for calls, Rs. 1/SMS, Rs. 150/GB for mobile data.

Default SMS count set to 0, default data set to 0.0 GB.

printLine() generates repeated character dividers (defaulting to 30 dashes '-').

Written Conceptual Answers: Included as comments (// Answer 1:, // Answer 2:) at the top of the file covering trailing parameter rules and syntax constraints on default argument placement.

Problem 2: Student Info Card (p2_student_info.cpp)

Objective: Demonstrate function overloading based on parameter number, type, and order.

Implemented Overloads:

void printInfo(string name) $\rightarrow$ Prints name only.

void printInfo(string name, int rollNo) $\rightarrow$ Prints name and roll number.

void printInfo(int rollNo, string name) $\rightarrow$ Overloaded by parameter order.

void printInfo(string name, double cgpa) $\rightarrow$ Prints name and CGPA.

void printInfo(char grade) $\rightarrow$ Prints letter grade.

Written Conceptual Answers: Contains detailed commentary on implicit promotion behavior (e.g., passing 'B' into int rollNo parameter), return-type overloading restrictions, and parameter sequence differentiation.

Problem 3: Array Tools (p3_array_tools.cpp)

Objective: Build overloaded array utility functions combining type overloading (int[] vs double[]) with default parameters.

Implemented Functions:

sumArray: Calculates array sum up to size (default size = 5).

countAbove: Counts elements strictly greater than limit (default limit = 50 or 50.0).

printArray: Displays array elements separated by custom delimiters (sep, default ' ') with clean trailing output formatting.

Written Conceptual Answers: Clarifies how overload resolution uses the explicit array data type (int[] vs double[]) to disambiguate function calls when default parameters are shared.

Problem 4: Ride Fare Calculator (p4_ride_fare.cpp)

Objective: Implement a tiered ride-sharing fare calculation engine, write ride receipts to a file, and analyze compiler overload ambiguities.

Part A (Overloaded Core Functions):

double fare(double km, double ratePerKm = 40.0) $\rightarrow$ Base fare calculation ($100 + \text{km} \times \text{rate}$).

double fare(double km, double ratePerKm, bool peakHour) $\rightarrow$ Adds a 20% surcharge during peak hours (delegates to Version 1).

double fare(double km, char vehicle) $\rightarrow$ Applies rates based on vehicle type ('B' Bike = Rs. 25, 'R' Rickshaw = Rs. 35, 'C' Car = Rs. 50; delegates to Version 1).

double fare(double km, char vehicle, int promoPercent) $\rightarrow$ Computes discounted fare (delegates to Version 3).

Part B (File I/O Processing):

Reads $N$ rides interactively and outputs formatted billing details and total collected revenue into rides.txt.

Part C (Ambiguity Resolution Analysis):

Documents the exact compiler error and structural reasoning behind ambiguous calls like fare(10, 40), providing two concrete resolution fixes via explicit casting and type matching.

🛠️ Compilation & Execution Instructions

All files can be compiled using standard GCC g++:

# Compile individual tasks
g++ -std=c++11 p1_mobile_bill.cpp -o p1_mobile_bill
g++ -std=c++11 p2_student_info.cpp -o p2_student_info
g++ -std=c++11 p3_array_tools.cpp -o p3_array_tools
g++ -std=c++11 p4_ride_fare.cpp -o p4_ride_fare

# Run executables
./p1_mobile_bill
./p2_student_info
./p3_array_tools
./p4_ride_fare
