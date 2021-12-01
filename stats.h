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
void print_statistics(void);

/**
 * @brief Print Array
 *
 * Function to print the array to the screen
 *
 * @param <arr - Array of data>
 * @param <len - Length of array>
 *
 */
void print_array(void);

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
char find_median(void);

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
char find_mean(void);

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
char find_maximum(void);

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
char find_minimum(void);

#endif /* __STATS_H__ */
