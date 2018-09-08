#pragma once
#ifndef __USB_DEFS_H__
#define __USB_DEFS_H__

#include <stm32f0xx.h>

#define USB_BTABLE_BASE         0x40006000
#undef USB_BTABLE
#define USB_BTABLE              ((USB_BtableDef *)(USB_BTABLE_BASE))
#define USB_ISTR_EPID           0x0000000F
#define USB_FNR_LSOF_0          0x00000800
#define USB_FNR_lSOF_1          0x00001000
#define USB_LPMCSR_BESL_0       0x00000010
#define USB_LPMCSR_BESL_1       0x00000020
#define USB_LPMCSR_BESL_2       0x00000040
#define USB_LPMCSR_BESL_3       0x00000080
#define USB_EPnR_CTR_RX         0x00008000
#define USB_EPnR_DTOG_RX        0x00004000
#define USB_EPnR_STAT_RX        0x00003000
#define USB_EPnR_STAT_RX_0      0x00001000
#define USB_EPnR_STAT_RX_1      0x00002000
#define USB_EPnR_SETUP          0x00000800
#define USB_EPnR_EP_TYPE        0x00000600
#define USB_EPnR_EP_TYPE_0      0x00000200
#define USB_EPnR_EP_TYPE_1      0x00000400
#define USB_EPnR_EP_KIND        0x00000100
#define USB_EPnR_CTR_TX         0x00000080
#define USB_EPnR_DTOG_TX        0x00000040
#define USB_EPnR_STAT_TX        0x00000030
#define USB_EPnR_STAT_TX_0      0x00000010
#define USB_EPnR_STAT_TX_1      0x00000020
#define USB_EPnR_EA             0x0000000F
#define USB_COUNTn_RX_BLSIZE    0x00008000
#define USB_COUNTn_NUM_BLOCK    0x00007C00
#define USB_COUNTn_RX           0x0000003F

#define USB_TypeDef USB_TypeDef_custom

typedef struct{
    __IO uint32_t EPnR[8];
    __IO uint32_t RESERVED1;
    __IO uint32_t RESERVED2;
    __IO uint32_t RESERVED3;
    __IO uint32_t RESERVED4;
    __IO uint32_t RESERVED5;
    __IO uint32_t RESERVED6;
    __IO uint32_t RESERVED7;
    __IO uint32_t RESERVED8;
    __IO uint32_t CNTR;
    __IO uint32_t ISTR;
    __IO uint32_t FNR;
    __IO uint32_t DADDR;
    __IO uint32_t BTABLE;
    __IO uint32_t LPMCSR;
    __IO uint32_t BCDR;
} USB_TypeDef;

typedef struct{
    __IO uint16_t USB_ADDR_TX;
    __IO uint16_t USB_COUNT_TX;
    __IO uint16_t USB_ADDR_RX;
    __IO uint16_t USB_COUNT_RX;
} USB_EPDATA_TypeDef;

typedef struct{
    __IO USB_EPDATA_TypeDef EP[8];
} USB_BtableDef;

#endif // __USB_DEFS_H__
