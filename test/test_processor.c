#include "../src/processor.h"
#include <criterion/criterion.h>

Test(TestProcessor, EnsureGetAddInstruction) {
  cr_expect(getInstruction(0003).operation == ADD_INST,
            "Ensure 0003 is an ADD_INST");
  cr_expect(getInstruction(0004).operation == ADD_INST,
            "Ensure 0004 is an ADD_INST");
  cr_expect(getInstruction(0005).operation == ADD_INST,
            "Ensure 0005 is an ADD_INST");
  cr_expect(getInstruction(0006).operation == ADD_INST,
            "Ensure 0006 is an ADD_INST");
  cr_expect(getInstruction(0007).operation == ADD_INST,
            "Ensure 0007 is an ADD_INST");
  cr_expect(getInstruction(0103).operation == ADD_INST,
            "Ensure 0103 is an ADD_INST");
  cr_expect(getInstruction(0104).operation == ADD_INST,
            "Ensure 0104 is an ADD_INST");
  cr_expect(getInstruction(0105).operation == ADD_INST,
            "Ensure 0105 is an ADD_INST");
  cr_expect(getInstruction(0106).operation == ADD_INST,
            "Ensure 0106 is an ADD_INST");
  cr_expect(getInstruction(0107).operation == ADD_INST,
            "Ensure 0107 is an ADD_INST");
  cr_expect(getInstruction(0203).operation == ADD_INST,
            "Ensure 0203 is an ADD_INST");
  cr_expect(getInstruction(0204).operation == ADD_INST,
            "Ensure 0204 is an ADD_INST");
  cr_expect(getInstruction(0205).operation == ADD_INST,
            "Ensure 0205 is an ADD_INST");
  cr_expect(getInstruction(0206).operation == ADD_INST,
            "Ensure 0206 is an ADD_INST");
  cr_expect(getInstruction(0207).operation == ADD_INST,
            "Ensure 0207 is an ADD_INST");
}

Test(TestProcessor, EnsureGetSubInstruction) {
  cr_expect(getInstruction(0013).operation == SUB_INST,
            "Ensure 0013 is an SUB_INST");
  cr_expect(getInstruction(0014).operation == SUB_INST,
            "Ensure 0014 is an SUB_INST");
  cr_expect(getInstruction(0015).operation == SUB_INST,
            "Ensure 0015 is an SUB_INST");
  cr_expect(getInstruction(0016).operation == SUB_INST,
            "Ensure 0016 is an SUB_INST");
  cr_expect(getInstruction(0017).operation == SUB_INST,
            "Ensure 0017 is an SUB_INST");
  cr_expect(getInstruction(0113).operation == SUB_INST,
            "Ensure 0113 is an SUB_INST");
  cr_expect(getInstruction(0114).operation == SUB_INST,
            "Ensure 0114 is an SUB_INST");
  cr_expect(getInstruction(0115).operation == SUB_INST,
            "Ensure 0115 is an SUB_INST");
  cr_expect(getInstruction(0116).operation == SUB_INST,
            "Ensure 0116 is an SUB_INST");
  cr_expect(getInstruction(0117).operation == SUB_INST,
            "Ensure 0117 is an SUB_INST");
  cr_expect(getInstruction(0213).operation == SUB_INST,
            "Ensure 0213 is an SUB_INST");
  cr_expect(getInstruction(0214).operation == SUB_INST,
            "Ensure 0214 is an SUB_INST");
  cr_expect(getInstruction(0215).operation == SUB_INST,
            "Ensure 0215 is an SUB_INST");
  cr_expect(getInstruction(0216).operation == SUB_INST,
            "Ensure 0216 is an SUB_INST");
  cr_expect(getInstruction(0217).operation == SUB_INST,
            "Ensure 0217 is an SUB_INST");
}

Test(TestProcessor, EnsureGetLoadInstruction) {
  cr_expect(getInstruction(0023).operation == LOAD_INST,
            "Ensure 0023 is an LOAD_INST");
  cr_expect(getInstruction(0024).operation == LOAD_INST,
            "Ensure 0024 is an LOAD_INST");
  cr_expect(getInstruction(0025).operation == LOAD_INST,
            "Ensure 0025 is an LOAD_INST");
  cr_expect(getInstruction(0026).operation == LOAD_INST,
            "Ensure 0026 is an LOAD_INST");
  cr_expect(getInstruction(0027).operation == LOAD_INST,
            "Ensure 0027 is an LOAD_INST");
  cr_expect(getInstruction(0123).operation == LOAD_INST,
            "Ensure 0123 is an LOAD_INST");
  cr_expect(getInstruction(0124).operation == LOAD_INST,
            "Ensure 0124 is an LOAD_INST");
  cr_expect(getInstruction(0125).operation == LOAD_INST,
            "Ensure 0125 is an LOAD_INST");
  cr_expect(getInstruction(0126).operation == LOAD_INST,
            "Ensure 0126 is an LOAD_INST");
  cr_expect(getInstruction(0127).operation == LOAD_INST,
            "Ensure 0127 is an LOAD_INST");
  cr_expect(getInstruction(0223).operation == LOAD_INST,
            "Ensure 0223 is an LOAD_INST");
  cr_expect(getInstruction(0224).operation == LOAD_INST,
            "Ensure 0224 is an LOAD_INST");
  cr_expect(getInstruction(0225).operation == LOAD_INST,
            "Ensure 0225 is an LOAD_INST");
  cr_expect(getInstruction(0226).operation == LOAD_INST,
            "Ensure 0226 is an LOAD_INST");
  cr_expect(getInstruction(0227).operation == LOAD_INST,
            "Ensure 0227 is an LOAD_INST");
}

Test(TestProcessor, EnsureGetStoreInstruction) {
  cr_expect(getInstruction(0033).operation == STORE_INST,
            "Ensure 0033 is an STORE_INST");
  cr_expect(getInstruction(0034).operation == STORE_INST,
            "Ensure 0034 is an STORE_INST");
  cr_expect(getInstruction(0035).operation == STORE_INST,
            "Ensure 0035 is an STORE_INST");
  cr_expect(getInstruction(0036).operation == STORE_INST,
            "Ensure 0036 is an STORE_INST");
  cr_expect(getInstruction(0037).operation == STORE_INST,
            "Ensure 0037 is an STORE_INST");
  cr_expect(getInstruction(0133).operation == STORE_INST,
            "Ensure 0133 is an STORE_INST");
  cr_expect(getInstruction(0134).operation == STORE_INST,
            "Ensure 0134 is an STORE_INST");
  cr_expect(getInstruction(0135).operation == STORE_INST,
            "Ensure 0135 is an STORE_INST");
  cr_expect(getInstruction(0136).operation == STORE_INST,
            "Ensure 0136 is an STORE_INST");
  cr_expect(getInstruction(0137).operation == STORE_INST,
            "Ensure 0137 is an STORE_INST");
  cr_expect(getInstruction(0233).operation == STORE_INST,
            "Ensure 0233 is an STORE_INST");
  cr_expect(getInstruction(0234).operation == STORE_INST,
            "Ensure 0234 is an STORE_INST");
  cr_expect(getInstruction(0235).operation == STORE_INST,
            "Ensure 0235 is an STORE_INST");
  cr_expect(getInstruction(0236).operation == STORE_INST,
            "Ensure 0236 is an STORE_INST");
  cr_expect(getInstruction(0237).operation == STORE_INST,
            "Ensure 0237 is an STORE_INST");
}

Test(TestProcessor, EnsureGetOrInstruction) {
  cr_expect(getInstruction(0303).operation == OR_INST,
            "Ensure 0303 is an OR_INST");
  cr_expect(getInstruction(0304).operation == OR_INST,
            "Ensure 0304 is an OR_INST");
  cr_expect(getInstruction(0305).operation == OR_INST,
            "Ensure 0305 is an OR_INST");
  cr_expect(getInstruction(0306).operation == OR_INST,
            "Ensure 0306 is an OR_INST");
  cr_expect(getInstruction(0307).operation == OR_INST,
            "Ensure 0307 is an OR_INST");
}

Test(TestProcessor, EnsureGetAndInstruction) {
  cr_expect(getInstruction(0323).operation == AND_INST,
            "Ensure 0323 is an AND_INST");
  cr_expect(getInstruction(0324).operation == AND_INST,
            "Ensure 0324 is an AND_INST");
  cr_expect(getInstruction(0325).operation == AND_INST,
            "Ensure 0325 is an AND_INST");
  cr_expect(getInstruction(0326).operation == AND_INST,
            "Ensure 0326 is an AND_INST");
  cr_expect(getInstruction(0327).operation == AND_INST,
            "Ensure 0327 is an AND_INST");
}

Test(TestProcessor, EnsureGetLnegInstruction) {
  cr_expect(getInstruction(0333).operation == LNEG_INST,
            "Ensure 0333 is an LNEG_INST");
  cr_expect(getInstruction(0334).operation == LNEG_INST,
            "Ensure 0334 is an LNEG_INST");
  cr_expect(getInstruction(0335).operation == LNEG_INST,
            "Ensure 0335 is an LNEG_INST");
  cr_expect(getInstruction(0336).operation == LNEG_INST,
            "Ensure 0336 is an LNEG_INST");
  cr_expect(getInstruction(0337).operation == LNEG_INST,
            "Ensure 0337 is an LNEG_INST");
}

Test(TestProcessor, EnsureGetJPDInstruction) {
  cr_expect(getInstruction(0043).operation == JPD_INST,
            "Ensure 0043 is an JPD_INST");
  cr_expect(getInstruction(0044).operation == JPD_INST,
            "Ensure 0044 is an JPD_INST");
  cr_expect(getInstruction(0045).operation == JPD_INST,
            "Ensure 0045 is an JPD_INST");
  cr_expect(getInstruction(0046).operation == JPD_INST,
            "Ensure 0046 is an JPD_INST");
  cr_expect(getInstruction(0047).operation == JPD_INST,
            "Ensure 0047 is an JPD_INST");
  cr_expect(getInstruction(0143).operation == JPD_INST,
            "Ensure 0143 is an JPD_INST");
  cr_expect(getInstruction(0144).operation == JPD_INST,
            "Ensure 0144 is an JPD_INST");
  cr_expect(getInstruction(0145).operation == JPD_INST,
            "Ensure 0145 is an JPD_INST");
  cr_expect(getInstruction(0146).operation == JPD_INST,
            "Ensure 0146 is an JPD_INST");
  cr_expect(getInstruction(0147).operation == JPD_INST,
            "Ensure 0147 is an JPD_INST");
  cr_expect(getInstruction(0243).operation == JPD_INST,
            "Ensure 0243 is an JPD_INST");
  cr_expect(getInstruction(0244).operation == JPD_INST,
            "Ensure 0244 is an JPD_INST");
  cr_expect(getInstruction(0245).operation == JPD_INST,
            "Ensure 0245 is an JPD_INST");
  cr_expect(getInstruction(0246).operation == JPD_INST,
            "Ensure 0246 is an JPD_INST");
  cr_expect(getInstruction(0247).operation == JPD_INST,
            "Ensure 0247 is an JPD_INST");
  cr_expect(getInstruction(0343).operation == JPD_INST,
            "Ensure 0343 is an JPD_INST");
  cr_expect(getInstruction(0344).operation == JPD_INST,
            "Ensure 0344 is an JPD_INST");
  cr_expect(getInstruction(0345).operation == JPD_INST,
            "Ensure 0345 is an JPD_INST");
  cr_expect(getInstruction(0346).operation == JPD_INST,
            "Ensure 0346 is an JPD_INST");
  cr_expect(getInstruction(0347).operation == JPD_INST,
            "Ensure 0347 is an JPD_INST");
}

Test(TestProcessor, EnsureGetJPIInstruction) {
  cr_expect(getInstruction(0053).operation == JPI_INST,
            "Ensure 0053 is an JPI_INST");
  cr_expect(getInstruction(0054).operation == JPI_INST,
            "Ensure 0054 is an JPI_INST");
  cr_expect(getInstruction(0055).operation == JPI_INST,
            "Ensure 0055 is an JPI_INST");
  cr_expect(getInstruction(0056).operation == JPI_INST,
            "Ensure 0056 is an JPI_INST");
  cr_expect(getInstruction(0057).operation == JPI_INST,
            "Ensure 0057 is an JPI_INST");
  cr_expect(getInstruction(0153).operation == JPI_INST,
            "Ensure 0153 is an JPI_INST");
  cr_expect(getInstruction(0154).operation == JPI_INST,
            "Ensure 0154 is an JPI_INST");
  cr_expect(getInstruction(0155).operation == JPI_INST,
            "Ensure 0155 is an JPI_INST");
  cr_expect(getInstruction(0156).operation == JPI_INST,
            "Ensure 0156 is an JPI_INST");
  cr_expect(getInstruction(0157).operation == JPI_INST,
            "Ensure 0157 is an JPI_INST");
  cr_expect(getInstruction(0253).operation == JPI_INST,
            "Ensure 0253 is an JPI_INST");
  cr_expect(getInstruction(0254).operation == JPI_INST,
            "Ensure 0254 is an JPI_INST");
  cr_expect(getInstruction(0255).operation == JPI_INST,
            "Ensure 0255 is an JPI_INST");
  cr_expect(getInstruction(0256).operation == JPI_INST,
            "Ensure 0256 is an JPI_INST");
  cr_expect(getInstruction(0257).operation == JPI_INST,
            "Ensure 0257 is an JPI_INST");
  cr_expect(getInstruction(0353).operation == JPI_INST,
            "Ensure 0353 is an JPI_INST");
  cr_expect(getInstruction(0354).operation == JPI_INST,
            "Ensure 0354 is an JPI_INST");
  cr_expect(getInstruction(0355).operation == JPI_INST,
            "Ensure 0355 is an JPI_INST");
  cr_expect(getInstruction(0356).operation == JPI_INST,
            "Ensure 0356 is an JPI_INST");
  cr_expect(getInstruction(0357).operation == JPI_INST,
            "Ensure 0357 is an JPI_INST");
}

Test(TestProcessor, EnsureGetJMDInstruction) {
  cr_expect(getInstruction(0063).operation == JMD_INST,
            "Ensure 0063 is an JMD_INST");
  cr_expect(getInstruction(0064).operation == JMD_INST,
            "Ensure 0064 is an JMD_INST");
  cr_expect(getInstruction(0065).operation == JMD_INST,
            "Ensure 0065 is an JMD_INST");
  cr_expect(getInstruction(0066).operation == JMD_INST,
            "Ensure 0066 is an JMD_INST");
  cr_expect(getInstruction(0067).operation == JMD_INST,
            "Ensure 0067 is an JMD_INST");
  cr_expect(getInstruction(0163).operation == JMD_INST,
            "Ensure 0163 is an JMD_INST");
  cr_expect(getInstruction(0164).operation == JMD_INST,
            "Ensure 0164 is an JMD_INST");
  cr_expect(getInstruction(0165).operation == JMD_INST,
            "Ensure 0165 is an JMD_INST");
  cr_expect(getInstruction(0166).operation == JMD_INST,
            "Ensure 0166 is an JMD_INST");
  cr_expect(getInstruction(0167).operation == JMD_INST,
            "Ensure 0167 is an JMD_INST");
  cr_expect(getInstruction(0263).operation == JMD_INST,
            "Ensure 0263 is an JMD_INST");
  cr_expect(getInstruction(0264).operation == JMD_INST,
            "Ensure 0264 is an JMD_INST");
  cr_expect(getInstruction(0265).operation == JMD_INST,
            "Ensure 0265 is an JMD_INST");
  cr_expect(getInstruction(0266).operation == JMD_INST,
            "Ensure 0266 is an JMD_INST");
  cr_expect(getInstruction(0267).operation == JMD_INST,
            "Ensure 0267 is an JMD_INST");
  cr_expect(getInstruction(0363).operation == JMD_INST,
            "Ensure 0363 is an JMD_INST");
  cr_expect(getInstruction(0364).operation == JMD_INST,
            "Ensure 0364 is an JMD_INST");
  cr_expect(getInstruction(0365).operation == JMD_INST,
            "Ensure 0365 is an JMD_INST");
  cr_expect(getInstruction(0366).operation == JMD_INST,
            "Ensure 0366 is an JMD_INST");
  cr_expect(getInstruction(0367).operation == JMD_INST,
            "Ensure 0367 is an JMD_INST");
}

Test(TestProcessor, EnsureGetJMIInstruction) {
  cr_expect(getInstruction(0073).operation == JMI_INST,
            "Ensure 0073 is an JMI_INST");
  cr_expect(getInstruction(0074).operation == JMI_INST,
            "Ensure 0074 is an JMI_INST");
  cr_expect(getInstruction(0075).operation == JMI_INST,
            "Ensure 0075 is an JMI_INST");
  cr_expect(getInstruction(0076).operation == JMI_INST,
            "Ensure 0076 is an JMI_INST");
  cr_expect(getInstruction(0077).operation == JMI_INST,
            "Ensure 0077 is an JMI_INST");
  cr_expect(getInstruction(0173).operation == JMI_INST,
            "Ensure 0173 is an JMI_INST");
  cr_expect(getInstruction(0174).operation == JMI_INST,
            "Ensure 0174 is an JMI_INST");
  cr_expect(getInstruction(0175).operation == JMI_INST,
            "Ensure 0175 is an JMI_INST");
  cr_expect(getInstruction(0176).operation == JMI_INST,
            "Ensure 0176 is an JMI_INST");
  cr_expect(getInstruction(0177).operation == JMI_INST,
            "Ensure 0177 is an JMI_INST");
  cr_expect(getInstruction(0273).operation == JMI_INST,
            "Ensure 0273 is an JMI_INST");
  cr_expect(getInstruction(0274).operation == JMI_INST,
            "Ensure 0274 is an JMI_INST");
  cr_expect(getInstruction(0275).operation == JMI_INST,
            "Ensure 0275 is an JMI_INST");
  cr_expect(getInstruction(0276).operation == JMI_INST,
            "Ensure 0276 is an JMI_INST");
  cr_expect(getInstruction(0277).operation == JMI_INST,
            "Ensure 0277 is an JMI_INST");
  cr_expect(getInstruction(0373).operation == JMI_INST,
            "Ensure 0373 is an JMI_INST");
  cr_expect(getInstruction(0374).operation == JMI_INST,
            "Ensure 0374 is an JMI_INST");
  cr_expect(getInstruction(0375).operation == JMI_INST,
            "Ensure 0375 is an JMI_INST");
  cr_expect(getInstruction(0376).operation == JMI_INST,
            "Ensure 0376 is an JMI_INST");
  cr_expect(getInstruction(0377).operation == JMI_INST,
            "Ensure 0377 is an JMI_INST");
}

Test(TestProcessor, EnsureGetResetbitInstruction) {
  cr_expect(getInstruction(0002).operation == RESETBIT_INST,
            "Ensure 0002 is an RESETBIT_INST");
  cr_expect(getInstruction(0012).operation == RESETBIT_INST,
            "Ensure 0012 is an RESETBIT_INST");
  cr_expect(getInstruction(0022).operation == RESETBIT_INST,
            "Ensure 0022 is an RESETBIT_INST");
  cr_expect(getInstruction(0032).operation == RESETBIT_INST,
            "Ensure 0032 is an RESETBIT_INST");
  cr_expect(getInstruction(0042).operation == RESETBIT_INST,
            "Ensure 0042 is an RESETBIT_INST");
  cr_expect(getInstruction(0052).operation == RESETBIT_INST,
            "Ensure 0052 is an RESETBIT_INST");
  cr_expect(getInstruction(0062).operation == RESETBIT_INST,
            "Ensure 0062 is an RESETBIT_INST");
  cr_expect(getInstruction(0072).operation == RESETBIT_INST,
            "Ensure 0072 is an RESETBIT_INST");
}

Test(TestProcessor, EnsureGetSetbitInstruction) {
  cr_expect(getInstruction(0102).operation == SETBIT_INST,
            "Ensure 0102 is an SETBIT_INST");
  cr_expect(getInstruction(0112).operation == SETBIT_INST,
            "Ensure 0112 is an SETBIT_INST");
  cr_expect(getInstruction(0122).operation == SETBIT_INST,
            "Ensure 0122 is an SETBIT_INST");
  cr_expect(getInstruction(0132).operation == SETBIT_INST,
            "Ensure 0132 is an SETBIT_INST");
  cr_expect(getInstruction(0142).operation == SETBIT_INST,
            "Ensure 0142 is an SETBIT_INST");
  cr_expect(getInstruction(0152).operation == SETBIT_INST,
            "Ensure 0152 is an SETBIT_INST");
  cr_expect(getInstruction(0162).operation == SETBIT_INST,
            "Ensure 0162 is an SETBIT_INST");
  cr_expect(getInstruction(0172).operation == SETBIT_INST,
            "Ensure 0172 is an SETBIT_INST");
}

Test(TestProcessor, EnsureGetSkipon0bitInstruction) {
  cr_expect(getInstruction(0202).operation == SKIPON0BIT_INST,
            "Ensure 0202 is an SKIPON0BIT_INST");
  cr_expect(getInstruction(0212).operation == SKIPON0BIT_INST,
            "Ensure 0212 is an SKIPON0BIT_INST");
  cr_expect(getInstruction(0222).operation == SKIPON0BIT_INST,
            "Ensure 0222 is an SKIPON0BIT_INST");
  cr_expect(getInstruction(0232).operation == SKIPON0BIT_INST,
            "Ensure 0232 is an SKIPON0BIT_INST");
  cr_expect(getInstruction(0242).operation == SKIPON0BIT_INST,
            "Ensure 0242 is an SKIPON0BIT_INST");
  cr_expect(getInstruction(0252).operation == SKIPON0BIT_INST,
            "Ensure 0252 is an SKIPON0BIT_INST");
  cr_expect(getInstruction(0262).operation == SKIPON0BIT_INST,
            "Ensure 0262 is an SKIPON0BIT_INST");
  cr_expect(getInstruction(0272).operation == SKIPON0BIT_INST,
            "Ensure 0272 is an SKIPON0BIT_INST");
}

Test(TestProcessor, EnsureGetSkipon1bitInstruction) {
  cr_expect(getInstruction(0302).operation == SKIPON1BIT_INST,
            "Ensure 0302 is an SKIPON1BIT_INST");
  cr_expect(getInstruction(0312).operation == SKIPON1BIT_INST,
            "Ensure 0312 is an SKIPON1BIT_INST");
  cr_expect(getInstruction(0322).operation == SKIPON1BIT_INST,
            "Ensure 0322 is an SKIPON1BIT_INST");
  cr_expect(getInstruction(0332).operation == SKIPON1BIT_INST,
            "Ensure 0332 is an SKIPON1BIT_INST");
  cr_expect(getInstruction(0342).operation == SKIPON1BIT_INST,
            "Ensure 0342 is an SKIPON1BIT_INST");
  cr_expect(getInstruction(0352).operation == SKIPON1BIT_INST,
            "Ensure 0352 is an SKIPON1BIT_INST");
  cr_expect(getInstruction(0362).operation == SKIPON1BIT_INST,
            "Ensure 0362 is an SKIPON1BIT_INST");
  cr_expect(getInstruction(0372).operation == SKIPON1BIT_INST,
            "Ensure 0372 is an SKIPON1BIT_INST");
}

Test(TestProcessor, EnsureGetRightShifInstruction) {
  cr_expect(getInstruction(0001).operation == RSHIFT_INST,
            "Ensure 0001 is an RSHIFT_INST");
  cr_expect(getInstruction(0011).operation == RSHIFT_INST,
            "Ensure 0011 is an RSHIFT_INST");
  cr_expect(getInstruction(0021).operation == RSHIFT_INST,
            "Ensure 0021 is an RSHIFT_INST");
  cr_expect(getInstruction(0031).operation == RSHIFT_INST,
            "Ensure 0031 is an RSHIFT_INST");
  cr_expect(getInstruction(0041).operation == RSHIFT_INST,
            "Ensure 0041 is an RSHIFT_INST");
  cr_expect(getInstruction(0051).operation == RSHIFT_INST,
            "Ensure 0051 is an RSHIFT_INST");
  cr_expect(getInstruction(0061).operation == RSHIFT_INST,
            "Ensure 0061 is an RSHIFT_INST");
  cr_expect(getInstruction(0071).operation == RSHIFT_INST,
            "Ensure 0071 is an RSHIFT_INST");
}

Test(TestProcessor, EnsureGetRightRotateInstruction) {
  cr_expect(getInstruction(0101).operation == RROTATE_INST,
            "Ensure 0101 is an RROTATE_INST");
  cr_expect(getInstruction(0111).operation == RROTATE_INST,
            "Ensure 0111 is an RROTATE_INST");
  cr_expect(getInstruction(0121).operation == RROTATE_INST,
            "Ensure 0121 is an RROTATE_INST");
  cr_expect(getInstruction(0131).operation == RROTATE_INST,
            "Ensure 0131 is an RROTATE_INST");
  cr_expect(getInstruction(0141).operation == RROTATE_INST,
            "Ensure 0141 is an RROTATE_INST");
  cr_expect(getInstruction(0151).operation == RROTATE_INST,
            "Ensure 0151 is an RROTATE_INST");
  cr_expect(getInstruction(0161).operation == RROTATE_INST,
            "Ensure 0161 is an RROTATE_INST");
  cr_expect(getInstruction(0171).operation == RROTATE_INST,
            "Ensure 0171 is an RROTATE_INST");
}

Test(TestProcessor, EnsureGetLeftShiftInstruction) {
  cr_expect(getInstruction(0201).operation == LSHIFT_INST,
            "Ensure 0201 is an LSHIFT_INST");
  cr_expect(getInstruction(0211).operation == LSHIFT_INST,
            "Ensure 0211 is an LSHIFT_INST");
  cr_expect(getInstruction(0221).operation == LSHIFT_INST,
            "Ensure 0221 is an LSHIFT_INST");
  cr_expect(getInstruction(0231).operation == LSHIFT_INST,
            "Ensure 0231 is an LSHIFT_INST");
  cr_expect(getInstruction(0241).operation == LSHIFT_INST,
            "Ensure 0241 is an LSHIFT_INST");
  cr_expect(getInstruction(0251).operation == LSHIFT_INST,
            "Ensure 0251 is an LSHIFT_INST");
  cr_expect(getInstruction(0261).operation == LSHIFT_INST,
            "Ensure 0261 is an LSHIFT_INST");
  cr_expect(getInstruction(0271).operation == LSHIFT_INST,
            "Ensure 0271 is an LSHIFT_INST");
}

Test(TestProcessor, EnsureGetLeftRotateInstruction) {
  cr_expect(getInstruction(0301).operation == LROTATE_INST,
            "Ensure 0301 is an LROTATE_INST");
  cr_expect(getInstruction(0311).operation == LROTATE_INST,
            "Ensure 0311 is an LROTATE_INST");
  cr_expect(getInstruction(0321).operation == LROTATE_INST,
            "Ensure 0321 is an LROTATE_INST");
  cr_expect(getInstruction(0331).operation == LROTATE_INST,
            "Ensure 0331 is an LROTATE_INST");
  cr_expect(getInstruction(0341).operation == LROTATE_INST,
            "Ensure 0341 is an LROTATE_INST");
  cr_expect(getInstruction(0351).operation == LROTATE_INST,
            "Ensure 0351 is an LROTATE_INST");
  cr_expect(getInstruction(0361).operation == LROTATE_INST,
            "Ensure 0361 is an LROTATE_INST");
  cr_expect(getInstruction(0371).operation == LROTATE_INST,
            "Ensure 0371 is an LROTATE_INST");
}

Test(TestProcessor, EnsureGetHaltInstruction) {
  cr_expect(getInstruction(0000).operation == HALT_INST,
            "Ensure 0000 is an HALT_INST");
  cr_expect(getInstruction(0010).operation == HALT_INST,
            "Ensure 0010 is an HALT_INST");
  cr_expect(getInstruction(0020).operation == HALT_INST,
            "Ensure 0020 is an HALT_INST");
  cr_expect(getInstruction(0030).operation == HALT_INST,
            "Ensure 0030 is an HALT_INST");
  cr_expect(getInstruction(0040).operation == HALT_INST,
            "Ensure 0040 is an HALT_INST");
  cr_expect(getInstruction(0050).operation == HALT_INST,
            "Ensure 0050 is an HALT_INST");
  cr_expect(getInstruction(0060).operation == HALT_INST,
            "Ensure 0060 is an HALT_INST");
  cr_expect(getInstruction(0070).operation == HALT_INST,
            "Ensure 0070 is an HALT_INST");
  cr_expect(getInstruction(0100).operation == HALT_INST,
            "Ensure 0100 is an HALT_INST");
  cr_expect(getInstruction(0110).operation == HALT_INST,
            "Ensure 0110 is an HALT_INST");
  cr_expect(getInstruction(0120).operation == HALT_INST,
            "Ensure 0120 is an HALT_INST");
  cr_expect(getInstruction(0130).operation == HALT_INST,
            "Ensure 0130 is an HALT_INST");
  cr_expect(getInstruction(0140).operation == HALT_INST,
            "Ensure 0140 is an HALT_INST");
  cr_expect(getInstruction(0150).operation == HALT_INST,
            "Ensure 0150 is an HALT_INST");
  cr_expect(getInstruction(0160).operation == HALT_INST,
            "Ensure 0160 is an HALT_INST");
  cr_expect(getInstruction(0170).operation == HALT_INST,
            "Ensure 0170 is an HALT_INST");
}

Test(TestProcessor, EnsureGetNoopInstruction) {
  cr_expect(getInstruction(0200).operation == NOOP_INST,
            "Ensure 0200 is an NOOP_INST");
  cr_expect(getInstruction(0210).operation == NOOP_INST,
            "Ensure 0210 is an NOOP_INST");
  cr_expect(getInstruction(0220).operation == NOOP_INST,
            "Ensure 0220 is an NOOP_INST");
  cr_expect(getInstruction(0230).operation == NOOP_INST,
            "Ensure 0230 is an NOOP_INST");
  cr_expect(getInstruction(0240).operation == NOOP_INST,
            "Ensure 0240 is an NOOP_INST");
  cr_expect(getInstruction(0250).operation == NOOP_INST,
            "Ensure 0250 is an NOOP_INST");
  cr_expect(getInstruction(0260).operation == NOOP_INST,
            "Ensure 0260 is an NOOP_INST");
  cr_expect(getInstruction(0270).operation == NOOP_INST,
            "Ensure 0270 is an NOOP_INST");
  cr_expect(getInstruction(0300).operation == NOOP_INST,
            "Ensure 0300 is an NOOP_INST");
  cr_expect(getInstruction(0310).operation == NOOP_INST,
            "Ensure 0310 is an NOOP_INST");
  cr_expect(getInstruction(0320).operation == NOOP_INST,
            "Ensure 0320 is an NOOP_INST");
  cr_expect(getInstruction(0330).operation == NOOP_INST,
            "Ensure 0330 is an NOOP_INST");
  cr_expect(getInstruction(0340).operation == NOOP_INST,
            "Ensure 0340 is an NOOP_INST");
  cr_expect(getInstruction(0350).operation == NOOP_INST,
            "Ensure 0350 is an NOOP_INST");
  cr_expect(getInstruction(0360).operation == NOOP_INST,
            "Ensure 0360 is an NOOP_INST");
  cr_expect(getInstruction(0370).operation == NOOP_INST,
            "Ensure 0370 is an NOOP_INST");
}
