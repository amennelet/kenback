#include "processor.h"

instruction getInstruction(unsigned char inputByte) {
  instruction calculatedInstruction;

  calculatedInstruction.inputByte = inputByte;

  if ((inputByte & 0700) < 0300 && (inputByte & 0070) == 0000 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = ADD_INST;
  if ((inputByte & 0700) < 0300 && (inputByte & 0070) == 0010 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = SUB_INST;
  if ((inputByte & 0700) < 0300 && (inputByte & 0070) == 0020 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = LOAD_INST;
  if ((inputByte & 0700) < 0300 && (inputByte & 0070) == 0030 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = STORE_INST;
  if ((inputByte & 0700) == 0300 && (inputByte & 0070) == 0000 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = OR_INST;
  if ((inputByte & 0700) == 0300 && (inputByte & 0070) == 0020 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = AND_INST;
  if ((inputByte & 0700) == 0300 && (inputByte & 0070) == 0030 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = LNEG_INST;
  if ((inputByte & 0700) < 0400 && (inputByte & 0070) == 0040 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = JPD_INST;
  if ((inputByte & 0700) < 0400 && (inputByte & 0070) == 0050 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = JPI_INST;
  if ((inputByte & 0700) < 0400 && (inputByte & 0070) == 0060 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = JMD_INST;
  if ((inputByte & 0700) < 0400 && (inputByte & 0070) == 0070 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = JMI_INST;
  if ((inputByte & 0700) == 0000 && (inputByte & 0007) == 0002)
    calculatedInstruction.operation = RESETBIT_INST;
  if ((inputByte & 0700) == 0100 && (inputByte & 0007) == 0002)
    calculatedInstruction.operation = SETBIT_INST;
  if ((inputByte & 0700) == 0200 && (inputByte & 0007) == 0002)
    calculatedInstruction.operation = SKIPON0BIT_INST;
  if ((inputByte & 0700) == 0300 && (inputByte & 0007) == 0002)
    calculatedInstruction.operation = SKIPON1BIT_INST;
  if ((inputByte & 0700) == 0000 && (inputByte & 0007) == 0001)
    calculatedInstruction.operation = RSHIFT_INST;
  if ((inputByte & 0700) == 0100 && (inputByte & 0007) == 0001)
    calculatedInstruction.operation = RROTATE_INST;
  if ((inputByte & 0700) == 0200 && (inputByte & 0007) == 0001)
    calculatedInstruction.operation = LSHIFT_INST;
  if ((inputByte & 0700) == 0300 && (inputByte & 0007) == 0001)
    calculatedInstruction.operation = LROTATE_INST;
  if ((inputByte & 0700) < 0200 && (inputByte & 0007) == 0000)
    calculatedInstruction.operation = HALT_INST;
  if ((inputByte & 0700) > 0100 && (inputByte & 0007) == 0000)
    calculatedInstruction.operation = NOOP_INST;

  return calculatedInstruction;
}

enum Registry getRegistryAddressFromInstruction(instruction inst) {
  if (inst.operation == ADD_INST || inst.operation == SUB_INST ||
      inst.operation == LOAD_INST || inst.operation == STORE_INST ||
      inst.operation == JPI_INST || inst.operation == JPD_INST ||
      inst.operation == JMI_INST || inst.operation == JMD_INST) {
    if ((inst.inputByte & 0700) == 0000)
      return A;
    if ((inst.inputByte & 0700) == 0100)
      return B;
    if ((inst.inputByte & 0700) == 0200)
      return X;
  }
  if (inst.operation == RSHIFT_INST || inst.operation == LSHIFT_INST ||
      inst.operation == RROTATE_INST || inst.operation == LROTATE_INST) {
    if ((inst.inputByte & 0040) == 0000)
      return A;
    if ((inst.inputByte & 0040) == 0040)
      return B;
  }
  return None;
}

void processAdd(instruction inst) {
  /* TODO
   * get the registry to process
   * get the addressing mode
   *
   * process the operation
   */
}
