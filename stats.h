/**
 * @file <stats.h> 
 * @brief <Header file - Statistics calculation>
 *
 * Calculates and prints mean, max, min, median and array
 *
 * @author <Adi>
 * @date <1st Dec 2021>
 *
 */
 
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print Statistics
 *
 * Function to print the statistics of an array
 * including minimum, maximum, mean, and median.
 *
 */
void print_statistics(unsigned char arr[], unsigned int len);

/**
 * @brief Print Array
 *
 * Function to print the array to the screen
 *
 * @param <arr - Array of data>
 * @param <len - Length of array>
 *
 */
void print_array(unsigned char arr[], unsigned int len);

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
unsigned char find_median(unsigned char arr[], unsigned int len);

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
unsigned char find_mean(unsigned char arr[], unsigned int len);

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
unsigned char find_maximum(unsigned char arr[], unsigned int len);

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
unsigned char find_minimum(unsigned char arr[], unsigned int len);

/**
 * @brief Swap array elements
 *
 * Swap elements to sort
 *
 * @param <xp - element 1>
 * @param <yp - element 2>
 *
 */
void swap(unsigned char* xp, unsigned char* yp);

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
void sort_array(unsigned char arr[], int len);

#endif /* __STATS_H__ */
