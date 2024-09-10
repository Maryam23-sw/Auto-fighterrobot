/*
 * BIT_MATH.h
 *
 *  Created on: Jul 24, 2024
 *      Author: Maryam
 */

#ifndef LIBRARY_BIT_MATH_H_
#define LIBRARY_BIT_MATH_H_

#define SET_(REG , BIT_NUM) (REG |= (1 << BIT_NUM))
#define CLEAR_(REG , BIT_NUM) (REG &= ~(1<< BIT_NUM))
#define TOGGLE_(REG , BIT_NUM) (REG ^=(1<< BIT_NUM))
#define GET_(REG , BIT_NUM) ((REG >> BIT_NUM) & 1)


#endif /* LIBRARY_BIT_MATH_H_ */
