/**
 * @file coversion.h
 * @author Prapti Bhajiyawala (praptibhajiyawala312@gmail.com)
 * @brief  Header file for Number System conversion
 * @version 0.1
 * @date 2021-04-07
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef __CONVERSION_H__
#define __CONVERSION_H__

/**
 * @brief Function for Binary to Decimal Number Conversion
 *
 * @param int
 * @return long int
 */
long int Binary_to_Decimal(long int);
/**
 * @brief Function for Binary to Octal Number Conversion
 *
 * @param int
 * @return long int
 */
long int Binary_to_Octal(long int);
/**
 * @brief Function for Binary to Hexadecimal Number Conversion
 *
 * @param int
 * @return long int
 */
char* Binary_to_Hexadecimal(long int);
/**
 * @brief Function for Decimal to Binary Number Conversion
 *
 * @param int
 * @return long int
 */
long int Decimal_to_Binary(long int);
/**
 * @brief Function for Decimal to Octal Number Conversion
 *
 * @param int
 * @return long int
 */
long int Decimal_to_Octal(long int);
/**
 * @brief Function for Decimal to Hexadecimal Number Conversion
 *
 * @param int
 * @return long int
 */
char* Decimal_to_Hexadecimal(long int);
/**
 * @brief function for calculating power
 *
 * @param base
 * @param exponent
 * @return int
 */
long int Power(int base,long int exponent);

#endif