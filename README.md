## 250 C++ Template

## TODO

1. In main, create an Employee called your name with some made up ID.  Output the Employee data to the display.  

2. Create a pointer variable of type HourlyEmployee.  

3. Create a dynamically allocated HourlyEmployee pointed to by the variable pcHourlyEmployee. Output the HourlyEmployee data to the display.

4. In the terminal, type the command "make valgrind" without the quotes. Do you get any memory leaks? If so, fix the problem.

5. Show me your work.

6. A salaried employee is one that has a yearly salary and gets paid monthly. Create a SalariedEmployee class in SalariedEmployee.h.

7. Implement SalariedEmployee.cpp.

8. Create a dynamically allocated SalariedEmployee pointed to be the variable pcSalariedEmployee. Output the SalariedEmployee data to the display.

9. Run "make valgrind" to make sure you have no memory leaks.

10. Ask the user to enter information for a SalariedEmployee from the terminal. After getting the information, output the information entered to the display.

## Commands

1. Execute without debugging

    * Open a Terminal session
    * Make sure you are in the directory where the Makefile is located
    * Type the command <b>make</b>. If all goes well, you will see something similar to 

      ```
        @ryan2135 ➜ /workspaces/CPPTemplateS25 (main) $ make
        mkdir -p bin
        clang++-16 -g -Wall -fstandalone-debug -std=c++2b  -o bin/main.exe src/*.cpp -Iinclude
        @ryan2135 ➜ /workspaces/CPPTemplateS25 (main) $ 
      ```
    * Type bin/main.exe

2. Debug

    * Set a break point in your program
    * In the VS Code Activity Bar, select the Debug option (triangle)
    * Select the RUN AND DEBUG lldb - debug option

3. Print PDF

    * Open task bar with Ctrl+P
    * Type <b>task</b> in the task bar followed by a space
    * Select printToPDF
    * The pdf will be created in the pdfs directory

4. Create and run GoogleTest

    * You will be asked to select a Kit. Select the Kit that says **unspecified**. Further, this only needs to be done once. Once you select the Kit, you will see an attempt to build the unit tests which will fail because the GoogleTest test suite is not installed yet. Proceed to the next bullet point.

    * From the **TERMINAL**, type in the following command (or copy and paste all 4 statements at once)
      ```
        wget https://github.com/google/googletest/archive/refs/tags/v1.15.2.tar.gz;
        tar zxf v1.15.2.tar.gz;
        mv googletest-1.15.2/ googletest;
        rm v1.15.2.tar.gz;
      ```

    * In the lower left of the Explorer window you will see Codespaces: and the name of your running codespace which is two words. At the far right you will see a triangle pointing right. Click that icon which will run the unit tests in SampleClassTests.cpp which will unit test the factorial program in class SampleClass.

    * A GoogleTest should run that tests a function called factorial that is a member of a class called SampleClass. You should see the function factorial tested and passed in green text.