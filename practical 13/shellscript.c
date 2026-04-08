print the number from 1 to 5 using for loop
// #!/bin/bash

// for (( i=1; i<=5; i++ ))
// do
//     echo $i
// done

print the number from 1 to 5 using while loop
// #!/bin/bash

// i=1
// while [ $i -le 5 ]
// do
//     echo $i
//     i=$((i + 1))
// done

sum of first number(while loop)
// #!/bin/bash

// echo "Enter a number:"
// read n

// sum=0
// i=1

// while [ $i -le $n ]
// do
//     sum=$((sum + i))
//     i=$((i + 1))
// done

// echo "Sum = $sum"

print the table of any number
// #!/bin/bash

// echo "Enter a number:"
// read num

// for (( i=1; i<=10; i++ ))
// do
//     echo "$num x $i = $((num * i))"
// done

chech the prime number
// #!/bin/bash

// echo "Enter a number:"
// read num

// flag=0

// if [ $num -le 1 ]
// then
//     flag=1
// fi

// for (( i=2; i<=num/2; i++ ))
// do
//     if [ $((num % i)) -eq 0 ]
//     then
//         flag=1
//         break
//     fi
// done

// if [ $flag -eq 0 ]
// then
//     echo "Prime number"
// else
//     echo "Not a prime number"
// fi

find out the factorial number
// #!/bin/bash

// echo "Enter a number:"
// read num

// fact=1

// for (( i=1; i<=num; i++ ))
// do
//     fact=$((fact * i))
// done

// echo "Factorial = $fact"
