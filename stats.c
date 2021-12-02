/**
 * @file <stats.c> 
 * @brief <Source file - Statistics calculation>
 *
 * Calculates and prints mean, max, min, median and array
 *
 * @author <Adi>
 * @date <1st Dec 2021>
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  
  /* Print unsorted array */
  printf("\nUnsorted array : \n\n");
  print_array(test, SIZE);
  
  /* Sort array */
  sort_array(test, SIZE);
  
  /* Print statitsics */
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */
/**
 * @brief Print Statistics
 *
 * Function to print the statistics of an array
 * including minimum, maximum, mean, and median.
 *
 * @param <arr - Array of data>
 * @param <len - Length of array>
 *
 */
void print_statistics(unsigned char arr[], unsigned int len)
{
	/* Print Max */
	printf("Maximum value : %d\n", find_maximum(arr, len));
	
	/* Print Min */
	printf("Minimum value : %d\n", find_minimum(arr, len));
	
	/* Print Mean */
	printf("Mean value : %d\n", find_mean(arr, len));
	
	/* Print Median */
	printf("Median value : %d\n\n", find_median(arr, len));
	
	/* Print sorted array */
	printf("Sorted array : \n\n");
	print_array(arr, SIZE);
	
	return;
}

/**
 * @brief Print Array
 *
 * Function to print the array to the screen
 *
 * @param <arr - Array of data>
 * @param <len - Length of array>
 *
 */
void print_array(unsigned char arr[], unsigned int len)
{	
	unsigned int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
	
	return;
}

/**
 * @brief Find Median
 *
 * Function to find the median of an array
 *
 * @param <arr - Array of data>
 * @param <len - Length of array>
 *
 * @return <Median value>
 */
unsigned char find_median(unsigned char arr[], unsigned int len)
{
	return (arr[(len - 1) / 2] + arr[len / 2]) / 2;;
}

/**
 * @brief Find Mean
 *
 * Function to find the mean of an array
 *
 * @param <arr - Array of data>
 * @param <len - Length of array>
 *
 * @return <Mean value>
 */
unsigned char find_mean(unsigned char arr[], unsigned int len)
{
	unsigned int sum = 0;
	unsigned int i;
    for (i = 0; i < len; i++) {
        sum += arr[i];
	 printf("Sum : %d ", sum);
	}
	return sum / len;
}

/**
 * @brief Find Maximum
 *
 * Function to find the maximum value of an array
 *
 * @param <arr - Array of data>
 * @param <len - Length of array>
 *
 * @return <Maximum value>
 */
unsigned char find_maximum(unsigned char arr[], unsigned int len)
{
	unsigned char max = arr[0];
	unsigned int i;
    for (i = 0; i < len; i++) {
        if(max < arr[i])
			max = arr[i];
	}
	return max;
}

/**
 * @brief Find Minimum
 *
 * Function to find the minimum value of an array
 *
 * @param <arr - Array of data>
 * @param <len - Length of array>
 *
 * @return <Minimum value>
 */
unsigned char find_minimum(unsigned char arr[], unsigned int len)
{
	unsigned char min = arr[0];
	unsigned int i;
    for (i = 0; i < len; i++) {
        if(min > arr[i])
			min = arr[i];
	}
	return min;
}

/**
 * @brief Swap array elements
 *
 * Swap elements to sort
 *
 * @param <xp - element 1>
 * @param <yp - element 2>
 *
 */
void swap(unsigned char* xp, unsigned char* yp)
{
	unsigned char temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/**
 * @brief Sort Array
 *
 * Sorts the array from largest to smallest.
 * (The zeroth Element should be the largest value,
 * and the last element (n-1) should be the smallest value.)
 *
 * @param <arr - Array of data>
 * @param <len - Length of array>
 *
 */
void sort_array(unsigned char  arr[], int len)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < len - 1; i++) {

        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < len; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}	