# Student Grade Logbook

This project is a beginner-friendly C++ console program that stores student names and grades, then calculates and displays each student's average.

## About The Program

The source file [grades.cc](grades.cc) creates a simple grade tracking system.

Each student record includes:
- Student name
- Midterm 1 score
- Midterm 2 score
- Assignment average
- Final exam score

The program then computes each student's average and prints it to the console.

## How It Works

### 1. Student data model

The program uses a `Student` struct with a nested `Grades` struct:
- `Student` holds the student's name.
- `Grades` holds all grade values.
- A global array stores up to 15 students.

### 2. Input collection (`fillInfo`)

The `fillInfo()` function is responsible for collecting data from the user:
- Shows a welcome message.
- Prompts for student names.
- Prompts for each grade category.
- Asks whether the user wants to continue.

### 3. Grade calculation (`averageGrade`)

The `averageGrade(Student s)` function:
1. Adds all 4 grade components.
2. Divides by 4 to get the mean.
3. Multiplies by 100 and returns the result.

### 4. Program output (`main`)

In `main()`:
- `fillInfo()` is called to gather input.
- A loop prints each student's name and computed average.

## Skills Learned While Building This

This project helped me practice:
- Defining and using `struct` in C++
- Using nested structs to organize related data
- Creating arrays of custom data types
- Building reusable functions for separate tasks
- Using loops (`for`, `while`) for repeated logic
- Handling console input/output with `cin` and `cout`
- Structuring a program into input, processing, and output stages

## Build And Run

Compile:

```bash
g++ -std=c++17 grades.cc -o grades
```

Run:

```bash
./grades
```

On Windows (MinGW), run:

```bash
grades.exe
```

## Possible Improvements

- Use `count` to track exactly how many students were entered.
- Validate inputs so grades stay within an expected range.
- Replace fixed-size arrays with `std::vector` for flexibility.
- Improve average logic if grades have different weights.