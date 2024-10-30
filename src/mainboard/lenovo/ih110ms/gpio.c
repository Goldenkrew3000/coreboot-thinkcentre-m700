/* SPDX-License-Identifier: GPL-2.0-only */

#include <mainboard/gpio.h>
#include <soc/gpio.h>

/* Pad configuration was generated automatically using intelp2m utility */
static const struct pad_config gpio_table[] = {
	/* ------- GPIO Community 0 ------- */

	/* ------- GPIO Group GPP_A ------- */
	_PAD_CFG_STRUCT(GPP_A0, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A1, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1), PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_A2, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1), PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_A3, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1), PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_A4, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1), PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_A5, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_A6, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A7, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A8, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_A9, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), PAD_PULL(DN_20K)),
	_PAD_CFG_STRUCT(GPP_A10, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), PAD_PULL(DN_20K)),
	_PAD_CFG_STRUCT(GPP_A11, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A12, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A13, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_A14, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_A15, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), PAD_PULL(UP_20K)),
	PAD_NC(GPP_A16, NONE),
	PAD_NC(GPP_A17, NONE),
	PAD_NC(GPP_A18, NONE),
	_PAD_CFG_STRUCT(GPP_A19, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A20, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A21, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A22, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A23, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),

	/* ------- GPIO Group GPP_B ------- */
	_PAD_CFG_STRUCT(GPP_B0, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B1, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B2, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B3, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B4, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B5, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B6, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	PAD_NC(GPP_B7, NONE),
	PAD_NC(GPP_B8, NONE),
	PAD_NC(GPP_B9, NONE),
	_PAD_CFG_STRUCT(GPP_B10, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_B11, 0, DEEP),
	_PAD_CFG_STRUCT(GPP_B12, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B13, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B14, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), PAD_PULL(DN_20K)),
	PAD_NC(GPP_B15, NONE),
	PAD_NC(GPP_B16, NONE),
	PAD_NC(GPP_B17, NONE),
	PAD_CFG_GPI_TRIG_OWN(GPP_B18, NONE, PLTRST, OFF, ACPI),
	PAD_NC(GPP_B19, NONE),
	_PAD_CFG_STRUCT(GPP_B20, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_IRQ_ROUTE(SMI) | PAD_RX_POL(INVERT) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B21, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B22, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B23, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),

	/* ------- GPIO Community 1 ------- */

	/* ------- GPIO Group GPP_C ------- */
	_PAD_CFG_STRUCT(GPP_C0, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C1, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C2, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C3, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C4, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPI_TRIG_OWN(GPP_C5, NONE, PLTRST, OFF, ACPI),
	/* GPP_C6 - RESERVED */
	/* GPP_C7 - RESERVED */
	PAD_NC(GPP_C8, NONE),
	PAD_NC(GPP_C9, NONE),
	PAD_NC(GPP_C10, NONE),
	_PAD_CFG_STRUCT(GPP_C11, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_NC(GPP_C12, NONE),
	PAD_NC(GPP_C13, NONE),
	PAD_NC(GPP_C14, NONE),
	PAD_NC(GPP_C15, NONE),
	PAD_NC(GPP_C16, NONE),
	PAD_NC(GPP_C17, NONE),
	PAD_NC(GPP_C18, NONE),
	PAD_NC(GPP_C19, NONE),
	_PAD_CFG_STRUCT(GPP_C20, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C21, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_C22, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_C23, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),

	/* ------- GPIO Group GPP_D ------- */
	PAD_NC(GPP_D0, NONE),
	PAD_NC(GPP_D1, NONE),
	PAD_CFG_GPI_TRIG_OWN(GPP_D2, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPI_TRIG_OWN(GPP_D3, NONE, PLTRST, OFF, ACPI),
	PAD_NC(GPP_D4, NONE),
	PAD_NC(GPP_D5, NONE),
	PAD_NC(GPP_D6, NONE),
	PAD_NC(GPP_D7, NONE),
	PAD_NC(GPP_D8, NONE),
	PAD_NC(GPP_D9, NONE),
	PAD_NC(GPP_D10, NONE),
	PAD_NC(GPP_D11, NONE),
	PAD_NC(GPP_D12, NONE),
	PAD_NC(GPP_D13, NONE),
	_PAD_CFG_STRUCT(GPP_D14, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_NC(GPP_D15, NONE),
	_PAD_CFG_STRUCT(GPP_D16, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_NC(GPP_D17, NONE),
	PAD_CFG_GPO(GPP_D18, 1, PLTRST),
	PAD_NC(GPP_D19, NONE),
	PAD_NC(GPP_D20, NONE),
	PAD_NC(GPP_D21, NONE),
	PAD_NC(GPP_D22, NONE),
	PAD_NC(GPP_D23, NONE),

	/* ------- GPIO Group GPP_E ------- */
	PAD_NC(GPP_E0, NONE),
	PAD_NC(GPP_E1, NONE),
	PAD_NC(GPP_E2, NONE),
	_PAD_CFG_STRUCT(GPP_E3, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_NC(GPP_E4, NONE),
	PAD_NC(GPP_E5, NONE),
	PAD_NC(GPP_E6, NONE),
	PAD_NC(GPP_E7, NONE),
	_PAD_CFG_STRUCT(GPP_E8, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_E9, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_E10, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_E11, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_E12, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),

	/* ------- GPIO Group GPP_F ------- */
	PAD_NC(GPP_F0, NONE),
	PAD_NC(GPP_F1, NONE),
	PAD_NC(GPP_F2, NONE),
	PAD_NC(GPP_F3, NONE),
	PAD_NC(GPP_F4, NONE),
	_PAD_CFG_STRUCT(GPP_F5, PAD_FUNC(GPIO) | PAD_RESET(DEEP) | PAD_TRIG(EDGE_SINGLE) | PAD_IRQ_ROUTE(SCI) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_NC(GPP_F6, NONE),
	PAD_NC(GPP_F7, NONE),
	PAD_NC(GPP_F8, NONE),
	PAD_NC(GPP_F9, NONE),
	PAD_NC(GPP_F10, NONE),
	PAD_NC(GPP_F11, NONE),
	PAD_NC(GPP_F12, NONE),
	PAD_NC(GPP_F13, NONE),
	PAD_CFG_GPI_APIC_LOW(GPP_F14, NONE, DEEP),
	_PAD_CFG_STRUCT(GPP_F15, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_F16, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_F17, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_F18, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_NC(GPP_F19, NONE),
	PAD_NC(GPP_F20, NONE),
	PAD_NC(GPP_F21, NONE),
	PAD_CFG_GPO(GPP_F22, 1, PLTRST),
	PAD_NC(GPP_F23, NONE),

	/* ------- GPIO Group GPP_G ------- */
	_PAD_CFG_STRUCT(GPP_G0, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_G1, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_G2, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_G3, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_G4, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPI_TRIG_OWN(GPP_G5, NONE, PLTRST, OFF, ACPI),
	PAD_NC(GPP_G6, NONE),
	PAD_NC(GPP_G7, NONE),
	_PAD_CFG_STRUCT(GPP_G8, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_G9, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_G10, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_G11, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	PAD_NC(GPP_G12, NONE),
	PAD_NC(GPP_G13, NONE),
	PAD_NC(GPP_G14, NONE),
	PAD_NC(GPP_G15, NONE),
	PAD_NC(GPP_G16, NONE),
	PAD_NC(GPP_G17, NONE),
	PAD_NC(GPP_G18, NONE),
	PAD_NC(GPP_G19, NONE),
	PAD_NC(GPP_G20, NONE),
	PAD_NC(GPP_G21, NONE),
	_PAD_CFG_STRUCT(GPP_G22, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_NC(GPP_G23, NONE),

	/* ------- GPIO Group GPP_H ------- */
	_PAD_CFG_STRUCT(GPP_H0, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1) | 1, 0),
	_PAD_CFG_STRUCT(GPP_H1, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE) | (1 << 1) | 1, 0),
	_PAD_CFG_STRUCT(GPP_H2, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE) | (1 << 1) | 1, 0),
	PAD_CFG_GPO(GPP_H3, 1, PLTRST),
	PAD_CFG_GPO(GPP_H4, 1, PLTRST),
	PAD_NC(GPP_H5, NONE),
	PAD_NC(GPP_H6, NONE),
	PAD_NC(GPP_H7, NONE),
	PAD_NC(GPP_H8, NONE),
	PAD_NC(GPP_H9, NONE),
	PAD_CFG_GPO(GPP_H10, 1, PLTRST),
	PAD_CFG_GPO(GPP_H11, 1, PLTRST),
	PAD_CFG_GPI_TRIG_OWN(GPP_H12, NONE, PLTRST, OFF, ACPI),
	_PAD_CFG_STRUCT(GPP_H13, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_NC(GPP_H14, NONE),
	_PAD_CFG_STRUCT(GPP_H15, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_NC(GPP_H16, NONE),
	PAD_NC(GPP_H17, NONE),
	_PAD_CFG_STRUCT(GPP_H18, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_NC(GPP_H19, NONE),
	_PAD_CFG_STRUCT(GPP_H20, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_H21, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPI_TRIG_OWN(GPP_H22, NONE, RSMRST, OFF, ACPI),
	_PAD_CFG_STRUCT(GPP_H23, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),

	/* ------- GPIO Community 2 ------- */

	/* -------- GPIO Group GPD -------- */
	_PAD_CFG_STRUCT(GPD0, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPD1, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPD2, PAD_FUNC(GPIO) | PAD_RESET(DEEP) | PAD_IRQ_ROUTE(SCI) | PAD_RX_POL(INVERT) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPD3, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPD4, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD5, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD6, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	PAD_CFG_GPO(GPD7, 1, PWROK),
	_PAD_CFG_STRUCT(GPD8, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	PAD_CFG_GPO(GPD9, 0, PWROK),
	_PAD_CFG_STRUCT(GPD10, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	PAD_CFG_GPO(GPD11, 0, PWROK),

	/* ------- GPIO Community 3 ------- */

	/* ------- GPIO Group GPP_I ------- */
	_PAD_CFG_STRUCT(GPP_I0, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_I1, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_I2, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	PAD_CFG_GPI_TRIG_OWN(GPP_I3, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPI_TRIG_OWN(GPP_I4, NONE, PLTRST, OFF, ACPI),
	_PAD_CFG_STRUCT(GPP_I5, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_I6, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), PAD_PULL(DN_20K)),
	_PAD_CFG_STRUCT(GPP_I7, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I8, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), PAD_PULL(DN_20K)),
	_PAD_CFG_STRUCT(GPP_I9, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I10, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), PAD_PULL(DN_20K)),
};

void mainboard_configure_gpios(void)
{
	gpio_configure_pads(gpio_table, ARRAY_SIZE(gpio_table));
}
