#!/bin/bash

calculate_sum() 
{
    local N=$1
    if [ $N -eq 1 ]; then
        echo 1
    else
        local prev_sum=$((N - 1))
        local prev_result=$(calculate_sum $prev_sum)
        local current_sum=$((prev_result + N))
        echo $current_sum
    fi
}

# Read N from the user
echo "Enter a positive integer N: "
read N

# Calculate the sum of the first N numbers using the recursive function
result=$(calculate_sum $N)

# Display the result
echo "The sum of the first $N numbers is: $result"

