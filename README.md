[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/G6xtdRX0)

index no :AS20250490
# Student Grade Analyzer

## Description

This program calculates a student's:

* Total Marks
* Average Marks
* Grade
* Pass/Fail Status

The program accepts marks for three subjects:

* Mathematics
* Science
* English

## Grade System

| Average Range | Grade |
| ------------- | ----- |
| 80 - 100      | A     |
| 70 - 79       | B     |
| 60 - 69       | C     |
| 50 - 59       | D     |
| Below 50      | F     |

## Pass / Fail Rule

* PASS → All subjects must be 40 or above.
* FAIL → If any subject is below 40.

## Compilation

```bash
gcc main.c -o grade_analyzer
```

## Run

```bash
./grade_analyzer
```

## Example

Input:

```
Mathematics: 80
Science: 75
English: 85
```

Output:

```
Total: 240
Average: 80.00
Grade: A
Result: PASS
```
