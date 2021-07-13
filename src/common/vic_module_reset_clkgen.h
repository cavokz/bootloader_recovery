/* SPDX-License-Identifier: GPL-2.0-or-later */
/**
  ******************************************************************************
  * @file  vic_module_reset_clkgen.h
  * @author  StarFive Technology
  * @version  V1.0
  * @date  07/24/2020
  * @brief
  ******************************************************************************
  * @copy
  *
  * THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STARFIVE SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  *  COPYRIGHT 2020 Shanghai StarFive Technology Co., Ltd.
  */

#ifndef _SFC_VIC_MODULE_RESET_CLKGEN_H
#define _SFC_VIC_MODULE_RESET_CLKGEN_H

#define vic_uart0_reset_clk_gpio_isp_enable {    \
    _ENABLE_CLOCK_clk_uart0_apb_;   \
    _ENABLE_CLOCK_clk_uart0_core_;  \
    _DIVIDE_CLOCK_clk_uart0_core_(8);	\
    _CLEAR_RESET_rstgen_rstn_uart0_core_;    \
    _CLEAR_RESET_rstgen_rstn_uart0_apb_; \
    SET_GPIO_uart0_pad_sin(13);   \
    SET_GPIO_13_doen_HIGH;  \
    SET_GPIO_12_dout_uart0_pad_sout;    \
    SET_GPIO_12_doen_LOW;  \
}

#define vic_uart0_reset_clk_gpio_misc_enable {    \
    _ENABLE_CLOCK_clk_uart0_apb_;   \
    _ENABLE_CLOCK_clk_uart0_core_;  \
    _CLEAR_RESET_rstgen_rstn_uart0_core_;    \
    _CLEAR_RESET_rstgen_rstn_uart0_apb_; \
    SET_GPIO_uart0_pad_sin(5);   \
    SET_GPIO_5_doen_HIGH;    \
    SET_GPIO_6_dout_uart0_pad_sout;  \
    SET_GPIO_6_doen_LOW; \
}


#define vic_uart1_reset_clk_gpio_isp_enable {    \
    _ENABLE_CLOCK_clk_uart1_apb_;   \
    _ENABLE_CLOCK_clk_uart1_core_;  \
    _CLEAR_RESET_rstgen_rstn_uart1_core_;   \
    _CLEAR_RESET_rstgen_rstn_uart1_apb_;    \
    SET_GPIO_12_dout_uart1_pad_sout;    \
    SET_GPIO_uart1_pad_sin(13);   \
    SET_GPIO_13_doen_HIGH;  \
    SET_GPIO_12_doen_LOW;  \
}

#define vic_uart1_reset_clk_gpio_misc_enable {    \
    _ENABLE_CLOCK_clk_uart1_apb_;   \
    _ENABLE_CLOCK_clk_uart1_core_;  \
    _CLEAR_RESET_rstgen_rstn_uart1_core_;   \
    _CLEAR_RESET_rstgen_rstn_uart1_apb_;    \
    SET_GPIO_6_dout_uart1_pad_sout;    \
    SET_GPIO_uart1_pad_sin(5);   \
    SET_GPIO_5_doen_HIGH;  \
    SET_GPIO_6_doen_LOW;  \
}

#define vic_uart2_reset_clk_gpio_isp_enable {    \
    _ENABLE_CLOCK_clk_uart2_apb_;   \
    _ENABLE_CLOCK_clk_uart2_core_;  \
    _CLEAR_RESET_rstgen_rstn_uart2_core_;   \
    _CLEAR_RESET_rstgen_rstn_uart2_apb_;    \
    SET_GPIO_uart2_pad_sin(13); \
    SET_GPIO_13_doen_HIGH;  \
    SET_GPIO_12_dout_uart2_pad_sout;    \
    SET_GPIO_12_doen_LOW;  \
}

#define vic_uart2_reset_clk_disable {   \
    _DISABLE_CLOCK_clk_uart2_apb_;  \
    _ASSERT_RESET_rstgen_rstn_uart2_apb_;   \
    _ASSERT_RESET_rstgen_rstn_uart2_core_;  \
}

#define vic_uart2_reset_clk_gpio_misc_enable {    \
	vic_uart2_reset_clk_disable;	\
    _ENABLE_CLOCK_clk_uart2_apb_;   \
    _ENABLE_CLOCK_clk_uart2_core_;  \
	_CLEAR_RESET_rstgen_rstn_uart2_core_;   \
    _CLEAR_RESET_rstgen_rstn_uart2_apb_;    \
    SET_GPIO_uart2_pad_sin(13); \
    SET_GPIO_13_doen_HIGH;  \
    SET_GPIO_14_dout_uart2_pad_sout;    \
    SET_GPIO_14_doen_LOW;   \
}


#define vic_uart3_reset_clk_gpio_isp_enable {    \
    _ENABLE_CLOCK_clk_uart3_apb_;   \
    _ENABLE_CLOCK_clk_uart3_core_;  \
    _CLEAR_RESET_rstgen_rstn_uart3_core_;    \
    _CLEAR_RESET_rstgen_rstn_uart3_apb_; \
    SET_GPIO_uart3_pad_sin(13); \
    SET_GPIO_13_doen_HIGH;  \
    SET_GPIO_12_dout_uart3_pad_sout;    \
    SET_GPIO_12_doen_LOW;  \
}

#define vic_uart3_reset_clk_gpio_misc_enable {    \
    _ENABLE_CLOCK_clk_uart3_apb_;   \
    _ENABLE_CLOCK_clk_uart3_core_;  \
    _CLEAR_RESET_rstgen_rstn_uart3_core_;    \
    _CLEAR_RESET_rstgen_rstn_uart3_apb_; \
    SET_GPIO_uart2_pad_sin(13); \
    SET_GPIO_13_doen_HIGH;  \
    SET_GPIO_14_dout_uart2_pad_sout;    \
    SET_GPIO_14_doen_LOW;   \
}


#endif	/* _SFC_VIC_MODULE_RESET_CLKGEN_H */

