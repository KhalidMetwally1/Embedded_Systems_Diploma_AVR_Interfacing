
/*
 * BIT_MATH.h
 *
 * Created: 9/30/2024 6:14:24 PM
 *  Author: Khalid Metwally
 *   Layer: LIB
 *
 */ 

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define REGISTER_SIZE 8
#define SET_BIT(reg,bit)	reg|=(1<<bit)
#define CLR_BIT(reg,bit)	reg&=(~(1<<bit))
#define GET_BIT(reg,bit)	reg&(1<<bit) /*[OR] (reg>>n)&1 */
#define IS_BIT_SET(reg,bit) ((reg&(1<<bit))>>bit)
#define IS_BIT_CLR(reg,bit) !((reg&(1<<bit))>>bit)
#define ROR(reg,num)		reg=((reg>>num)|(reg<<(REGISTER_SIZE-num)))
#define ROL(reg,num)		reg=((reg<<num)|(reg>>(REGISTER_SIZE-num)))

#endif /* BIT_MATH_H_*/