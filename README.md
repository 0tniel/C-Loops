# C-Loops
<br> <p align='center'><b>Printing Numbers from 1 to 20</b></p>

## Aim

To print the numbers from 1 to 20 using a while loop in C++.

## Software Used
- Dev C++

## Theory

<p>
  A while loop in C++ is used to execute a block of code repeatedly as long as a specified condition remains true. In this program, a while loop is utilized to print numbers sequentially from 1 to 20.
</p>

### While Loop
<p>
  The while loop checks the condition before each iteration. If the condition is true, the loop body is executed. The condition in this program is i < 20, which means the loop will continue to run as long as i is less than 20.
</p>

## Algorithm

Step 1: Start. <br> 
Step 2: Initialize a variable i with the value 0. <br> 
Step 3: Enter the while loop with the condition i < 20. <br> 
Step 4: Inside the loop, print the value of i + 1. <br> 
Step 5: Increment i by 1 to move to the next number. <br> 
Step 6: Repeat steps 4 and 5 until the condition i < 20 becomes false. <br> 
Step 7: End. <br>

## Output

![image](https://github.com/user-attachments/assets/e99dd8b8-bfe0-449c-9327-4bfb7a87c419)

## Conclusion

The program successfully prints the numbers from 1 to 20 using a while loop. This demonstrates the basic usage of the while loop for iterative operations in C++.

<br> <p align='center'><b>Printing Numbers from 1 to 20 Using do-while Loop</b></p>

## Aim

To print the numbers from 1 to 20 using a do-while loop in C++.

## Software Used

- Dev C++

## Theory

<p>
  A do-while loop in C++ is used to execute a block of code at least once and then repeat the execution as long as a specified condition remains true. The key difference from a while loop is that a do-while loop guarantees at least one iteration of the loop body before checking the condition.
</p>

## Algorithm

Step 1: Start. <br> Step 2: Initialize a variable a with the value 1. <br> Step 3: Enter the do-while loop. <br> Step 4: Inside the loop, print the value of a followed by a space. <br> Step 5: Increment a by 1. <br> Step 6: Check if a is less than or equal to 20. If true, repeat steps 4 and 5. <br> Step 7: If false, exit the loop and print a newline. <br> Step 8: End. <br>

## Output

![image](https://github.com/user-attachments/assets/4743c208-ea1e-45a3-9308-1fe2e5cf3f45)

<br> <p align='center'><b>Number Pattern Triangle </b></p>

## Aim

To print a triangular number pattern based on user input for the number of rows using nested for loops in C++.

## Software Used

- Dev C++

## Theory
This program uses nested for loops to generate and print a triangular pattern of numbers. The number pattern starts from 1 and increases sequentially in each row, with each row containing one more number than the previous row.

### Pattern Generation

<p>
  The outer loop controls the number of rows, and the inner loop controls the number of elements in each row. As the inner loop executes, numbers are printed in a sequence, and the sequence continues across rows.
</p>

## Algorithm

Step 1: Start. <br> Step 2: Prompt the user to enter the number of rows n. <br> Step 3: Initialize a variable num with the value 1. <br> Step 4: Enter the outer for loop that iterates from 1 to n to handle rows. <br> Step 5: Within the outer loop, enter the inner for loop that iterates from 1 to i to handle the elements in each row. <br> Step 6: Print the value of num, followed by a space. <br> Step 7: Increment num by 1. <br> Step 8: After completing the inner loop, print a newline to move to the next row. <br> Step 9: Repeat steps 5 to 8 until all rows are processed. <br> Step 10: End. <br>

## Output

![image](https://github.com/user-attachments/assets/0947d459-0465-41b1-8228-7c2c3e715892)

## Conclusion

The program successfully prints a triangular number pattern based on user input. It demonstrates the use of nested for loops to generate a pattern where the number of elements in each row increases sequentially.

<br> <p align='center'><b>Even Numbers Printer </b></p>

## Aim

To print all even numbers from 0 up to a user-specified upper limit using a for loop in C++.

## Software Used

- Dev C++

## Theory
<p>
  The program uses a for loop to iterate from 0 to a specified upper limit. It checks whether each number in this range is even by using the modulus operator (%). If a number is even, it is printed along with a label.
</p>

### Even Numbers

<p>
  An even number is any integer that is divisible by 2 without leaving a remainder. In mathematical terms, a number a is even if a % 2 == 0.
</p>

## Algorithm

Step 1: Start. <br> Step 2: Prompt the user to enter the upper limit n. <br> Step 3: Enter a for loop that iterates from 0 to n. <br> Step 4: Inside the loop, use an if statement to check if the current number is even (a % 2 == 0). <br> Step 5: If the number is even, print it along with the label "Even number:". <br> Step 6: End. <br>

## Output

![image](https://github.com/user-attachments/assets/0a7d6bbb-7fdb-4687-b413-a3ee3609c2d4)

## Conclusion
<p>
  The program efficiently prints all even numbers from 0 up to the specified upper limit using a for loop. This demonstrates basic loop control and conditional checking in C++.
</p>

<br> <p align='center'><b>Asterisk Triangle Pattern</b></p>


## Aim

To print a right-angled triangle pattern using asterisks (*) in C++.

## Software Used

- Dev C++

## Theory

<p>
  The program uses nested for loops to generate a triangular pattern of asterisks. The outer loop controls the number of rows, and the inner loop controls the number of asterisks in each row.
</p>

### Pattern Description

<p>
  In this pattern, each row contains an increasing number of asterisks, starting with one asterisk in the first row and increasing by one asterisk per subsequent row.
</p>

## Algorithm

Step 1: Start. <br> Step 2: Enter the outer for loop that iterates from 0 to 4 to handle rows. <br> Step 3: Inside the outer loop, enter the inner for loop that iterates from 0 to i to handle the number of asterisks in each row. <br> Step 4: Print an asterisk (*) for each iteration of the inner loop. <br> Step 5: After completing the inner loop for the current row, print a newline character to move to the next row. <br> Step 6: Repeat steps 3 to 5 until all rows are processed. <br> Step 7: End. <br>

## Output

![image](https://github.com/user-attachments/assets/4ebe9499-657b-4d76-942e-736cbb0d963c)

## Conclusion

<p>
  The program successfully prints a right-angled triangle pattern of asterisks. This demonstrates the use of nested for loops to create simple geometric patterns in C++.
</p>

<br> <p align='center'><b>Password Verification System</b></p>

## Aim

To create a password verification system that continuously prompts the user to enter a password until the correct one is provided.

## Software Used

- Dev C++

## Theory

<p>
  This program uses a while loop to repeatedly prompt the user for a password. It checks if the entered password matches a predefined password. If it does, the system unlocks; otherwise, it keeps asking for the correct password.
</p>

### Password Verification
<p>
  Password verification involves comparing a user-entered password with a predefined correct password. In this program, the password is hardcoded as "sit", and the user is repeatedly prompted until they provide the correct password.
</p>

## Algorithm

Step 1: Start. <br> Step 2: Initialize the correct password as "sit" and store it in a string variable pass. <br> Step 3: Prompt the user to enter a password and store it in the string variable input. <br> Step 4: Enter a while(true) loop that continuously runs until the correct password is entered. <br> Step 5: Inside the loop, compare the user-entered password with the predefined password. <br> Step 6: If the passwords match, print "System Unlocked" and exit the loop. <br> Step 7: If the passwords do not match, prompt the user to enter the password again. <br> Step 8: Repeat steps 5 to 7 until the correct password is entered. <br> Step 9: End. <br>

## Output

![image](https://github.com/user-attachments/assets/d469c943-a2e0-4462-a5c7-3dd9a584aac4)

## Conclusion

The program successfully implements a basic password verification system. It demonstrates the use of a while loop for repeated input validation and comparison in C++.
