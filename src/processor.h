#ifndef PROCESSOR_H
#define PROCESSOR_H

#include "memory_interface.h"

/* Addresses */
#define A_REG 0000
#define B_REG 0001
#define X_REG 0002
#define P_REG 0003
#define OUTPUT_REG 0200
#define AFLAG_REG 0201
#define BFLAG_REG 0202
#define XFLAG_REG 0203
#define INPUT_REG 0377

/* Instructions */
#define ADD_INST 0x00
#define SUB_INST 0x01
#define LOAD_INST 0x02
#define STORE_INST 0x03

#define OR_INST 0x04
#define AND_INST 0x05
#define LNEG_INST 0x06

#define JPD_INST 0x07
#define JPI_INST 0x08
#define JMD_INST 0x09
#define JMI_INST 0x0A

#define RESETBIT_INST 0x0B
#define SETBIT_INST 0x0C
#define SKIPON0BIT_INST 0x0D
#define SKIPON1BIT_INST 0x0E

#define RSHIFT_INST 0x0F
#define RROTATE_INST 0x10
#define LSHIFT_INST 0x11
#define LROTATE_INST 0x12

#define HALT_INST 0x13
#define NOOP_INST 0x14

typedef struct Instruction {
  unsigned char inputByte;
  unsigned char operation;
} instruction;

/* getInstruction :
 * Interprete the input byte and return a instruction structure
 * return an instruction from a byte
 */
instruction getInstruction(unsigned char inputByte);

unsigned char getNextInstruction(MEMORY_INTERFACE memory);

#endif // PROCESSOR_H
