#ifndef _PLATFORM_UTILS_H_
#define _PLATFORM_UTILS_H_

#include <Library/PcdLib.h>

#define TLMM_ADDR 0x0F100000

#define TLMM_ADDR_OFFSET_FOR_PIN(x) (0x1000 * x)

#define TLMM_PIN_CONTROL_REGISTER 0
#define TLMM_PIN_IO_REGISTER 4
#define TLMM_PIN_INTERRUPT_CONFIG_REGISTER 8
#define TLMM_PIN_INTERRUPT_STATUS_REGISTER 0xC
#define TLMM_PIN_INTERRUPT_TARGET_REGISTER TLMM_PIN_INTERRUPT_CONFIG_REGISTER

#define LID0_GPIO38_STATUS_ADDR                                               \
  (TLMM_ADDR + TLMM_ADDR_OFFSET_FOR_PIN(38) + TLMM_PIN_IO_REGISTER)

#define QHEE_SMC_VENDOR_HYP_UART_DISABLE 0x86000000
#define QHEE_SMC_VENDOR_HYP_UART_ENABLE 0x86000001
#define QHEE_SMC_VENDOR_HYP_WDOG_CONTROL 0x86000005
#define QHEE_SMC_VENDOR_HYP_WDOG_STATUS 0x86000006
#define QHEE_SMC_VENDOR_HYP_WDOG_PAT 0x86000007
#define QHEE_SMC_VENDOR_HYP_WDOG_SET_TIMES 0x86000008
//#define QHEE_SMC_VENDOR_HYP_SEC_WDOG_TRIGGER
//#define QHEE_SMC_VENDOR_HYP_PVM_UNMAP
//#define QHEE_SMC_VENDOR_HYP_PVM_MAP
//#define QHEE_SMC_VENDOR_HYP_GET_SECURITY_STATE
//#define QHEE_SMC_VENDOR_HYP_GET_PRNG_DATA
//#define QHEE_SMC_VENDOR_HYP_FEATURES
//#define QHEE_SMC_VENDOR_HYP_CLIENT_REGISTER
//#define QHEE_SMC_VENDOR_HYP_CLIENT_DEREGISTER
//#define QHEE_SMC_VENDOR_HYP_CALL_COUNT

#define QHEE_SMC_VENDOR_HYP_CALL_UID 0x8600FF01
#define QHEE_SMC_VENDOR_HYP_REVISION 0x8600FF03

#define QHEE_SMC_VENDOR_HYP_WDOG_NO_CHANGE 0xFFFF

#define QC_HYP_UID0 0x19bd54bd
#define QC_HYP_UID1 0x0b37571b
#define QC_HYP_UID2 0x946f609b
#define QC_HYP_UID3 0x54539de6

VOID PlatformInitialize(VOID);
BOOLEAN IsLinuxBootRequested(VOID);

extern VOID _SecondaryModuleEntryPoint(VOID);

#endif /* _PLATFORM_UTILS_H_ */