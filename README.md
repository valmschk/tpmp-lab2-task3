## tpmp-lab2-task3

## Overview
This program is designed to manage student records and analyze academic performance. It allows users to input data, automatically sorts records alphabetically, and identifies high-achieving students.

The program utilizes the **STUDENT** structure with the following fields:
* **Name**: Last name and initials of the student.
* **Kurs**: The current year of study (course).
* **SES**: An array of five integers representing the student's performance.

## Author
* **Student**: Валерия Мещенко
* **Group**: 10
* **Project**: Laboratory Work #2, Task 3

## Usage
To use the program, follow these instructions:

1. **Inputting Student Data**: 
    * Run the compiled executable.
    * Enter the required information (Name, Course, 5 Grades) for each student when prompted.
    * Repeat this step until data for all students is entered.
2. **Sorting**: 
    * Once data entry is complete, the program automatically sorts all records in alphabetical order based on the students' names.
3. **Analysis**: 
    * The system calculates the individual average for each student and the overall average for the entire group.
    * It displays the names of students whose average grade exceeds the overall threshold.

## Building
To compile and run the project:
1. Open a terminal or command prompt.
2. Navigate to the directory containing the source files.
3. Use the `make` command to compile:
   ```bash
   make
   ```
4. Execute the program:
   ```bash
   ./prog
   ```

## Additional Notes
* [Task 1](https://github.com/valmschk/tpmp-lab2-task1) 
* [Task 2](https://github.com/valmschk/tpmp-lab2-task2)
