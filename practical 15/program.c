1] check weather leap year or not 
// #!/bin/bash

// echo "Enter a year:"
// read year

// if [ $((year % 4)) -eq 0 ] && { [ $((year % 100)) -ne 0 ] || [ $((year % 400)) -eq 0 ]; }
// then
//     echo "Leap Year"
// else
//     echo "Not a Leap Year"
// fi

2] check even or odd number
// #!/bin/bash

// echo "Enter a number:"
// read num

// if [ $((num % 2)) -eq 0 ]
// then
//     echo "Even Number"
// else
//     echo "Odd Number"
// fi

3] find largest of three number
// #!/bin/bash

// echo "Enter three numbers:"
// read a b c

// if [ $a -ge $b ] && [ $a -ge $c ]
// then
//     echo "Largest number is $a"
// elif [ $b -ge $a ] && [ $b -ge $c ]
// then
//     echo "Largest number is $b"
// else
//     echo "Largest number is $c"
// fi

4]calculate the addition ,substraction,division,multiplication
// #!/bin/bash

// echo "Enter first number:"
// read a

// echo "Enter second number:"
// read b

// echo "===== MENU ====="
// echo "1. Addition"
// echo "2. Subtraction"
// echo "3. Multiplication"
// echo "4. Division"
// echo "================="

// echo "Enter your choice:"
// read ch

// case $ch in

// 1)
//     echo "Sum = $((a + b))"
//     ;;

// 2)
//     echo "Difference = $((a - b))"
//     ;;

// 3)
//     echo "Product = $((a * b))"
//     ;;

// 4)
//     if [ $b -ne 0 ]
//     then
//         echo "Quotient = $((a / b))"
//     else
//         echo "Error: Division by zero not allowed"
//     fi
//     ;;

// *)
//     echo "Invalid choice"
//     ;;

// esac
