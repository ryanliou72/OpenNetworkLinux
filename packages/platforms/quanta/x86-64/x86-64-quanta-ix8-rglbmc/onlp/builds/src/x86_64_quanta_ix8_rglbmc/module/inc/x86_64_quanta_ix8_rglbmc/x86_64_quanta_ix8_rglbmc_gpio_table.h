#ifndef __X86_64_QUANTA_IX8_RGLBMC_GPIO_TABLE_H__
#define __X86_64_QUANTA_IX8_RGLBMC_GPIO_TABLE_H__

/*
 * defined within platform/quanta_switch.c
 * Quanta Switch Platform driver
 */
#define QUANTA_IX8_PCA953x_GPIO(P1, P2)	(P1*8+P2)

#define QUANTA_IX8_PCA9555_GPIO_SIZE	0x10

#define QUANTA_IX8_I2C_GPIO_BASE	0x10

#define QUANTA_IX8_I2C_GPIO_CPU_BASE               0x40

#define QUANTA_IX8_CPU_BOARD_GPIO_BASE              (QUANTA_IX8_I2C_GPIO_CPU_BASE)
#define QUANTA_IX8_CPU_BOARD_SYS_P1                 (QUANTA_IX8_CPU_BOARD_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(1,2))
#define QUANTA_IX8_CPU_BOARD_SYS_P2                 (QUANTA_IX8_CPU_BOARD_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(1,3))

#define QUANTA_IX8_ZQSFP_EN_GPIO_BASE				QUANTA_IX8_I2C_GPIO_BASE
#define QUANTA_IX8_ZQSFP_EN_GPIO_SIZE				QUANTA_IX8_PCA9555_GPIO_SIZE
#define QUANTA_IX8_ZQSFP_EN_GPIO_P3V3_PW_GD		(QUANTA_IX8_ZQSFP_EN_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(0,4))
#define QUANTA_IX8_ZQSFP_EN_GPIO_P3V3_PW_EN		(QUANTA_IX8_ZQSFP_EN_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(0,5))

#define QUANTA_IX8_PCA9698_2_GPIO_BASE				(QUANTA_IX8_I2C_GPIO_BASE + QUANTA_IX8_PCA9555_GPIO_SIZE)
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_49_RESET_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(0,0))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_49_PRSNT_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(0,2))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_49_LPMOD_P	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(0,3))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_50_RESET_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(0,4))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_50_PRSNT_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(0,6))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_50_LPMOD_P	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(0,7))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_51_RESET_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(1,0))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_51_PRSNT_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(1,2))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_51_LPMOD_P	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(1,3))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_52_RESET_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(1,4))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_52_PRSNT_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(1,6))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_52_LPMOD_P	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(1,7))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_53_RESET_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(2,0))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_53_PRSNT_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(2,2))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_53_LPMOD_P	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(2,3))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_54_RESET_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(2,4))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_54_PRSNT_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(2,6))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_54_LPMOD_P	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(2,7))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_55_RESET_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(3,0))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_55_PRSNT_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(3,2))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_55_LPMOD_P	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(3,3))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_56_RESET_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(3,4))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_56_PRSNT_N	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(3,6))
#define QUANTA_IX8_PCA9698_2_GPIO_QSFP_56_LPMOD_P	(QUANTA_IX8_PCA9698_2_GPIO_BASE + QUANTA_IX8_PCA953x_GPIO(3,7))

#endif /* __X86_64_QUANTA_IX8_RGLBMC_GPIO_TABLE_H__ */
