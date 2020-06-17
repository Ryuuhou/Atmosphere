/*
 * Copyright (c) 2018-2020 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <vapours.hpp>

#define PINMUX_AUX_GEN1_I2C_SCL   (0x30BC)
#define PINMUX_AUX_GEN1_I2C_SDA   (0x30C0)
#define PINMUX_AUX_PWR_I2C_SCL    (0x30DC)
#define PINMUX_AUX_PWR_I2C_SDA    (0x30E0)

#define PINMUX_AUX_UART1_TX       (0x30E4)
#define PINMUX_AUX_UART1_RX       (0x30E8)
#define PINMUX_AUX_UART1_RTS      (0x30EC)
#define PINMUX_AUX_UART1_CTS      (0x30F0)
#define PINMUX_AUX_UART2_TX       (0x30F4)
#define PINMUX_AUX_UART2_RX       (0x30F8)
#define PINMUX_AUX_UART2_RTS      (0x30FC)
#define PINMUX_AUX_UART2_CTS      (0x3100)
#define PINMUX_AUX_UART3_TX       (0x3104)
#define PINMUX_AUX_UART3_RX       (0x3108)
#define PINMUX_AUX_UART3_RTS      (0x310C)
#define PINMUX_AUX_UART3_CTS      (0x3110)
#define PINMUX_AUX_DVFS_PWM       (0x3184)
#define PINMUX_AUX_GPIO_PA6       (0x3244)

#define PINMUX_REG_BITS_MASK(NAME)                                      REG_NAMED_BITS_MASK    (PINMUX, NAME)
#define PINMUX_REG_BITS_VALUE(NAME, VALUE)                              REG_NAMED_BITS_VALUE   (PINMUX, NAME, VALUE)
#define PINMUX_REG_BITS_ENUM(NAME, ENUM)                                REG_NAMED_BITS_ENUM    (PINMUX, NAME, ENUM)
#define PINMUX_REG_BITS_ENUM_SEL(NAME, __COND__, TRUE_ENUM, FALSE_ENUM) REG_NAMED_BITS_ENUM_SEL(PINMUX, NAME, __COND__, TRUE_ENUM, FALSE_ENUM)

#define DEFINE_PINMUX_REG(NAME, __OFFSET__, __WIDTH__)                                                                                                                  REG_DEFINE_NAMED_REG           (PINMUX, NAME, __OFFSET__, __WIDTH__)
#define DEFINE_PINMUX_REG_BIT_ENUM(NAME, __OFFSET__, ZERO, ONE)                                                                                                         REG_DEFINE_NAMED_BIT_ENUM      (PINMUX, NAME, __OFFSET__, ZERO, ONE)
#define DEFINE_PINMUX_REG_TWO_BIT_ENUM(NAME, __OFFSET__, ZERO, ONE, TWO, THREE)                                                                                         REG_DEFINE_NAMED_TWO_BIT_ENUM  (PINMUX, NAME, __OFFSET__, ZERO, ONE, TWO, THREE)
#define DEFINE_PINMUX_REG_THREE_BIT_ENUM(NAME, __OFFSET__, ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN)                                                               REG_DEFINE_NAMED_THREE_BIT_ENUM(PINMUX, NAME, __OFFSET__, ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN)
#define DEFINE_PINMUX_REG_FOUR_BIT_ENUM(NAME, __OFFSET__, ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, ELEVEN, TWELVE, THIRTEEN, FOURTEEN, FIFTEEN) REG_DEFINE_NAMED_FOUR_BIT_ENUM (PINMUX, NAME, __OFFSET__, ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, ELEVEN, TWELVE, THIRTEEN, FOURTEEN, FIFTEEN)

DEFINE_PINMUX_REG_TWO_BIT_ENUM(AUX_PUPD, 2, NONE, PULL_DOWN, PULL_UP, RSVD);
DEFINE_PINMUX_REG_BIT_ENUM(AUX_TRISTATE, 4, PASSTHROUGH, TRISTATE);
DEFINE_PINMUX_REG_BIT_ENUM(AUX_PARK,     5, NORMAL, PARKED);
DEFINE_PINMUX_REG_BIT_ENUM(AUX_E_INPUT,  6, DISABLE, ENABLE);
DEFINE_PINMUX_REG_BIT_ENUM(AUX_LOCK,     7, DISABLE, ENABLE);
DEFINE_PINMUX_REG_BIT_ENUM(AUX_E_LPDR,   8, DISABLE, ENABLE);
DEFINE_PINMUX_REG_BIT_ENUM(AUX_E_OD,    11, DISABLE, ENABLE);
DEFINE_PINMUX_REG_BIT_ENUM(AUX_E_SCHMT, 12, DISABLE, ENABLE);

DEFINE_PINMUX_REG_TWO_BIT_ENUM(AUX_GEN1_I2C_PM, 0,   I2C1, RSVD1,  RSVD2, RSVD3);
DEFINE_PINMUX_REG_TWO_BIT_ENUM(AUX_PWR_I2C_PM,  0, I2CPMU, RSVD1,  RSVD2, RSVD3);

DEFINE_PINMUX_REG_TWO_BIT_ENUM(AUX_UART1_PM, 0, UARTA, RSVD1, RSVD2, RSVD3);
DEFINE_PINMUX_REG_TWO_BIT_ENUM(AUX_UART2_PM, 0, UARTB, I2S4A, RSVD2, UART);
DEFINE_PINMUX_REG_TWO_BIT_ENUM(AUX_UART3_PM, 0, UARTC, SPI4,  RSVD2, RSVD3);

DEFINE_PINMUX_REG_TWO_BIT_ENUM(AUX_DVFS_PWM_PM, 0, RSVD0, CLDVFS, SPI3, RSVD3);

DEFINE_PINMUX_REG_TWO_BIT_ENUM(AUX_GPIO_PA6_PM, 0, SATA, RSVD1, RSVD2, RSVD3);
