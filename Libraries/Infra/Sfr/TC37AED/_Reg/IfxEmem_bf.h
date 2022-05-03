/**
 * \file IfxEmem_bf.h
 * \brief
 * \copyright Copyright (c) 2019 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC37xED_UM_V1.2.0.R0
 * Specification: TC3xx User Manual V1.2.0
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Use of this file is subject to the terms of use agreed between (i) you or 
 * the company in which ordinary course of business you are acting and (ii) 
 * Infineon Technologies AG or its licensees. If and as long as no such 
 * terms of use are agreed, use of this file is subject to following:


 * Boost Software License - Version 1.0 - August 17th, 2003

 * Permission is hereby granted, free of charge, to any person or 
 * organization obtaining a copy of the software and accompanying 
 * documentation covered by this license (the "Software") to use, reproduce,
 * display, distribute, execute, and transmit the Software, and to prepare
 * derivative works of the Software, and to permit third-parties to whom the 
 * Software is furnished to do so, all subject to the following:

 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE 
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * \defgroup IfxSfr_Emem_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Emem_Registers
 * 
 */
#ifndef IFXEMEM_BF_H
#define IFXEMEM_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Emem_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_EMEM_CLC_Bits.DISR */
#define IFX_EMEM_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_EMEM_CLC_Bits.DISR */
#define IFX_EMEM_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_CLC_Bits.DISR */
#define IFX_EMEM_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_EMEM_CLC_Bits.DISS */
#define IFX_EMEM_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_EMEM_CLC_Bits.DISS */
#define IFX_EMEM_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_CLC_Bits.DISS */
#define IFX_EMEM_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_EMEM_ID_Bits.MOD_REV */
#define IFX_EMEM_ID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_EMEM_ID_Bits.MOD_REV */
#define IFX_EMEM_ID_MOD_REV_MSK (0xffu)

/** \brief Offset for Ifx_EMEM_ID_Bits.MOD_REV */
#define IFX_EMEM_ID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_EMEM_ID_Bits.MOD_TYPE */
#define IFX_EMEM_ID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_EMEM_ID_Bits.MOD_TYPE */
#define IFX_EMEM_ID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_EMEM_ID_Bits.MOD_TYPE */
#define IFX_EMEM_ID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_EMEM_ID_Bits.MOD_NUM */
#define IFX_EMEM_ID_MOD_NUM_LEN (16u)

/** \brief Mask for Ifx_EMEM_ID_Bits.MOD_NUM */
#define IFX_EMEM_ID_MOD_NUM_MSK (0xffffu)

/** \brief Offset for Ifx_EMEM_ID_Bits.MOD_NUM */
#define IFX_EMEM_ID_MOD_NUM_OFF (16u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.TCM0 */
#define IFX_EMEM_TILECONFIG_TCM0_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.TCM0 */
#define IFX_EMEM_TILECONFIG_TCM0_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.TCM0 */
#define IFX_EMEM_TILECONFIG_TCM0_OFF (0u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.TCM1 */
#define IFX_EMEM_TILECONFIG_TCM1_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.TCM1 */
#define IFX_EMEM_TILECONFIG_TCM1_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.TCM1 */
#define IFX_EMEM_TILECONFIG_TCM1_OFF (2u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.TCM2 */
#define IFX_EMEM_TILECONFIG_TCM2_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.TCM2 */
#define IFX_EMEM_TILECONFIG_TCM2_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.TCM2 */
#define IFX_EMEM_TILECONFIG_TCM2_OFF (4u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.TCM3 */
#define IFX_EMEM_TILECONFIG_TCM3_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.TCM3 */
#define IFX_EMEM_TILECONFIG_TCM3_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.TCM3 */
#define IFX_EMEM_TILECONFIG_TCM3_OFF (6u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.TCM4 */
#define IFX_EMEM_TILECONFIG_TCM4_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.TCM4 */
#define IFX_EMEM_TILECONFIG_TCM4_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.TCM4 */
#define IFX_EMEM_TILECONFIG_TCM4_OFF (8u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.TCM5 */
#define IFX_EMEM_TILECONFIG_TCM5_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.TCM5 */
#define IFX_EMEM_TILECONFIG_TCM5_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.TCM5 */
#define IFX_EMEM_TILECONFIG_TCM5_OFF (10u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.TCM6 */
#define IFX_EMEM_TILECONFIG_TCM6_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.TCM6 */
#define IFX_EMEM_TILECONFIG_TCM6_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.TCM6 */
#define IFX_EMEM_TILECONFIG_TCM6_OFF (12u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.TCM7 */
#define IFX_EMEM_TILECONFIG_TCM7_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.TCM7 */
#define IFX_EMEM_TILECONFIG_TCM7_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.TCM7 */
#define IFX_EMEM_TILECONFIG_TCM7_OFF (14u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.XCM0 */
#define IFX_EMEM_TILECONFIG_XCM0_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.XCM0 */
#define IFX_EMEM_TILECONFIG_XCM0_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.XCM0 */
#define IFX_EMEM_TILECONFIG_XCM0_OFF (16u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.XCM1 */
#define IFX_EMEM_TILECONFIG_XCM1_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.XCM1 */
#define IFX_EMEM_TILECONFIG_XCM1_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.XCM1 */
#define IFX_EMEM_TILECONFIG_XCM1_OFF (18u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.XCM2 */
#define IFX_EMEM_TILECONFIG_XCM2_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.XCM2 */
#define IFX_EMEM_TILECONFIG_XCM2_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.XCM2 */
#define IFX_EMEM_TILECONFIG_XCM2_OFF (20u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.XCM3 */
#define IFX_EMEM_TILECONFIG_XCM3_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.XCM3 */
#define IFX_EMEM_TILECONFIG_XCM3_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.XCM3 */
#define IFX_EMEM_TILECONFIG_XCM3_OFF (22u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.XCM4 */
#define IFX_EMEM_TILECONFIG_XCM4_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.XCM4 */
#define IFX_EMEM_TILECONFIG_XCM4_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.XCM4 */
#define IFX_EMEM_TILECONFIG_XCM4_OFF (24u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.XCM5 */
#define IFX_EMEM_TILECONFIG_XCM5_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.XCM5 */
#define IFX_EMEM_TILECONFIG_XCM5_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.XCM5 */
#define IFX_EMEM_TILECONFIG_XCM5_OFF (26u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.XCM6 */
#define IFX_EMEM_TILECONFIG_XCM6_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.XCM6 */
#define IFX_EMEM_TILECONFIG_XCM6_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.XCM6 */
#define IFX_EMEM_TILECONFIG_XCM6_OFF (28u)

/** \brief Length for Ifx_EMEM_TILECONFIG_Bits.XCM7 */
#define IFX_EMEM_TILECONFIG_XCM7_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILECONFIG_Bits.XCM7 */
#define IFX_EMEM_TILECONFIG_XCM7_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILECONFIG_Bits.XCM7 */
#define IFX_EMEM_TILECONFIG_XCM7_OFF (30u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.TCM0 */
#define IFX_EMEM_TILECC_TCM0_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.TCM0 */
#define IFX_EMEM_TILECC_TCM0_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.TCM0 */
#define IFX_EMEM_TILECC_TCM0_OFF (0u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.TCM1 */
#define IFX_EMEM_TILECC_TCM1_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.TCM1 */
#define IFX_EMEM_TILECC_TCM1_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.TCM1 */
#define IFX_EMEM_TILECC_TCM1_OFF (1u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.TCM2 */
#define IFX_EMEM_TILECC_TCM2_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.TCM2 */
#define IFX_EMEM_TILECC_TCM2_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.TCM2 */
#define IFX_EMEM_TILECC_TCM2_OFF (2u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.TCM3 */
#define IFX_EMEM_TILECC_TCM3_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.TCM3 */
#define IFX_EMEM_TILECC_TCM3_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.TCM3 */
#define IFX_EMEM_TILECC_TCM3_OFF (3u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.TCM4 */
#define IFX_EMEM_TILECC_TCM4_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.TCM4 */
#define IFX_EMEM_TILECC_TCM4_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.TCM4 */
#define IFX_EMEM_TILECC_TCM4_OFF (4u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.TCM5 */
#define IFX_EMEM_TILECC_TCM5_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.TCM5 */
#define IFX_EMEM_TILECC_TCM5_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.TCM5 */
#define IFX_EMEM_TILECC_TCM5_OFF (5u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.TCM6 */
#define IFX_EMEM_TILECC_TCM6_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.TCM6 */
#define IFX_EMEM_TILECC_TCM6_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.TCM6 */
#define IFX_EMEM_TILECC_TCM6_OFF (6u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.TCM7 */
#define IFX_EMEM_TILECC_TCM7_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.TCM7 */
#define IFX_EMEM_TILECC_TCM7_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.TCM7 */
#define IFX_EMEM_TILECC_TCM7_OFF (7u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.XCM0 */
#define IFX_EMEM_TILECC_XCM0_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.XCM0 */
#define IFX_EMEM_TILECC_XCM0_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.XCM0 */
#define IFX_EMEM_TILECC_XCM0_OFF (8u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.XCM1 */
#define IFX_EMEM_TILECC_XCM1_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.XCM1 */
#define IFX_EMEM_TILECC_XCM1_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.XCM1 */
#define IFX_EMEM_TILECC_XCM1_OFF (9u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.XCM2 */
#define IFX_EMEM_TILECC_XCM2_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.XCM2 */
#define IFX_EMEM_TILECC_XCM2_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.XCM2 */
#define IFX_EMEM_TILECC_XCM2_OFF (10u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.XCM3 */
#define IFX_EMEM_TILECC_XCM3_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.XCM3 */
#define IFX_EMEM_TILECC_XCM3_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.XCM3 */
#define IFX_EMEM_TILECC_XCM3_OFF (11u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.XCM4 */
#define IFX_EMEM_TILECC_XCM4_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.XCM4 */
#define IFX_EMEM_TILECC_XCM4_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.XCM4 */
#define IFX_EMEM_TILECC_XCM4_OFF (12u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.XCM5 */
#define IFX_EMEM_TILECC_XCM5_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.XCM5 */
#define IFX_EMEM_TILECC_XCM5_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.XCM5 */
#define IFX_EMEM_TILECC_XCM5_OFF (13u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.XCM6 */
#define IFX_EMEM_TILECC_XCM6_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.XCM6 */
#define IFX_EMEM_TILECC_XCM6_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.XCM6 */
#define IFX_EMEM_TILECC_XCM6_OFF (14u)

/** \brief Length for Ifx_EMEM_TILECC_Bits.XCM7 */
#define IFX_EMEM_TILECC_XCM7_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECC_Bits.XCM7 */
#define IFX_EMEM_TILECC_XCM7_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECC_Bits.XCM7 */
#define IFX_EMEM_TILECC_XCM7_OFF (15u)

/** \brief Length for Ifx_EMEM_TILECT_Bits.TCM0 */
#define IFX_EMEM_TILECT_TCM0_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECT_Bits.TCM0 */
#define IFX_EMEM_TILECT_TCM0_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECT_Bits.TCM0 */
#define IFX_EMEM_TILECT_TCM0_OFF (0u)

/** \brief Length for Ifx_EMEM_TILECT_Bits.TCM1 */
#define IFX_EMEM_TILECT_TCM1_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECT_Bits.TCM1 */
#define IFX_EMEM_TILECT_TCM1_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECT_Bits.TCM1 */
#define IFX_EMEM_TILECT_TCM1_OFF (1u)

/** \brief Length for Ifx_EMEM_TILECT_Bits.TCM2 */
#define IFX_EMEM_TILECT_TCM2_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECT_Bits.TCM2 */
#define IFX_EMEM_TILECT_TCM2_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECT_Bits.TCM2 */
#define IFX_EMEM_TILECT_TCM2_OFF (2u)

/** \brief Length for Ifx_EMEM_TILECT_Bits.TCM3 */
#define IFX_EMEM_TILECT_TCM3_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECT_Bits.TCM3 */
#define IFX_EMEM_TILECT_TCM3_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECT_Bits.TCM3 */
#define IFX_EMEM_TILECT_TCM3_OFF (3u)

/** \brief Length for Ifx_EMEM_TILECT_Bits.TCM4 */
#define IFX_EMEM_TILECT_TCM4_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECT_Bits.TCM4 */
#define IFX_EMEM_TILECT_TCM4_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECT_Bits.TCM4 */
#define IFX_EMEM_TILECT_TCM4_OFF (4u)

/** \brief Length for Ifx_EMEM_TILECT_Bits.TCM5 */
#define IFX_EMEM_TILECT_TCM5_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECT_Bits.TCM5 */
#define IFX_EMEM_TILECT_TCM5_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECT_Bits.TCM5 */
#define IFX_EMEM_TILECT_TCM5_OFF (5u)

/** \brief Length for Ifx_EMEM_TILECT_Bits.TCM6 */
#define IFX_EMEM_TILECT_TCM6_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECT_Bits.TCM6 */
#define IFX_EMEM_TILECT_TCM6_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECT_Bits.TCM6 */
#define IFX_EMEM_TILECT_TCM6_OFF (6u)

/** \brief Length for Ifx_EMEM_TILECT_Bits.TCM7 */
#define IFX_EMEM_TILECT_TCM7_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECT_Bits.TCM7 */
#define IFX_EMEM_TILECT_TCM7_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECT_Bits.TCM7 */
#define IFX_EMEM_TILECT_TCM7_OFF (7u)

/** \brief Length for Ifx_EMEM_TILECT_Bits.XTM0 */
#define IFX_EMEM_TILECT_XTM0_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECT_Bits.XTM0 */
#define IFX_EMEM_TILECT_XTM0_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECT_Bits.XTM0 */
#define IFX_EMEM_TILECT_XTM0_OFF (16u)

/** \brief Length for Ifx_EMEM_TILECT_Bits.XTM1 */
#define IFX_EMEM_TILECT_XTM1_LEN (1u)

/** \brief Mask for Ifx_EMEM_TILECT_Bits.XTM1 */
#define IFX_EMEM_TILECT_XTM1_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_TILECT_Bits.XTM1 */
#define IFX_EMEM_TILECT_XTM1_OFF (17u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.TCM0 */
#define IFX_EMEM_TILESTATE_TCM0_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.TCM0 */
#define IFX_EMEM_TILESTATE_TCM0_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.TCM0 */
#define IFX_EMEM_TILESTATE_TCM0_OFF (0u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.TCM1 */
#define IFX_EMEM_TILESTATE_TCM1_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.TCM1 */
#define IFX_EMEM_TILESTATE_TCM1_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.TCM1 */
#define IFX_EMEM_TILESTATE_TCM1_OFF (2u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.TCM2 */
#define IFX_EMEM_TILESTATE_TCM2_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.TCM2 */
#define IFX_EMEM_TILESTATE_TCM2_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.TCM2 */
#define IFX_EMEM_TILESTATE_TCM2_OFF (4u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.TCM3 */
#define IFX_EMEM_TILESTATE_TCM3_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.TCM3 */
#define IFX_EMEM_TILESTATE_TCM3_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.TCM3 */
#define IFX_EMEM_TILESTATE_TCM3_OFF (6u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.TCM4 */
#define IFX_EMEM_TILESTATE_TCM4_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.TCM4 */
#define IFX_EMEM_TILESTATE_TCM4_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.TCM4 */
#define IFX_EMEM_TILESTATE_TCM4_OFF (8u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.TCM5 */
#define IFX_EMEM_TILESTATE_TCM5_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.TCM5 */
#define IFX_EMEM_TILESTATE_TCM5_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.TCM5 */
#define IFX_EMEM_TILESTATE_TCM5_OFF (10u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.TCM6 */
#define IFX_EMEM_TILESTATE_TCM6_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.TCM6 */
#define IFX_EMEM_TILESTATE_TCM6_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.TCM6 */
#define IFX_EMEM_TILESTATE_TCM6_OFF (12u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.TCM7 */
#define IFX_EMEM_TILESTATE_TCM7_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.TCM7 */
#define IFX_EMEM_TILESTATE_TCM7_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.TCM7 */
#define IFX_EMEM_TILESTATE_TCM7_OFF (14u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.XCM0 */
#define IFX_EMEM_TILESTATE_XCM0_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.XCM0 */
#define IFX_EMEM_TILESTATE_XCM0_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.XCM0 */
#define IFX_EMEM_TILESTATE_XCM0_OFF (16u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.XCM1 */
#define IFX_EMEM_TILESTATE_XCM1_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.XCM1 */
#define IFX_EMEM_TILESTATE_XCM1_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.XCM1 */
#define IFX_EMEM_TILESTATE_XCM1_OFF (18u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.XCM2 */
#define IFX_EMEM_TILESTATE_XCM2_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.XCM2 */
#define IFX_EMEM_TILESTATE_XCM2_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.XCM2 */
#define IFX_EMEM_TILESTATE_XCM2_OFF (20u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.XCM3 */
#define IFX_EMEM_TILESTATE_XCM3_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.XCM3 */
#define IFX_EMEM_TILESTATE_XCM3_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.XCM3 */
#define IFX_EMEM_TILESTATE_XCM3_OFF (22u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.XCM4 */
#define IFX_EMEM_TILESTATE_XCM4_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.XCM4 */
#define IFX_EMEM_TILESTATE_XCM4_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.XCM4 */
#define IFX_EMEM_TILESTATE_XCM4_OFF (24u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.XCM5 */
#define IFX_EMEM_TILESTATE_XCM5_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.XCM5 */
#define IFX_EMEM_TILESTATE_XCM5_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.XCM5 */
#define IFX_EMEM_TILESTATE_XCM5_OFF (26u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.XCM6 */
#define IFX_EMEM_TILESTATE_XCM6_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.XCM6 */
#define IFX_EMEM_TILESTATE_XCM6_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.XCM6 */
#define IFX_EMEM_TILESTATE_XCM6_OFF (28u)

/** \brief Length for Ifx_EMEM_TILESTATE_Bits.XCM7 */
#define IFX_EMEM_TILESTATE_XCM7_LEN (2u)

/** \brief Mask for Ifx_EMEM_TILESTATE_Bits.XCM7 */
#define IFX_EMEM_TILESTATE_XCM7_MSK (0x3u)

/** \brief Offset for Ifx_EMEM_TILESTATE_Bits.XCM7 */
#define IFX_EMEM_TILESTATE_XCM7_OFF (30u)

/** \brief Length for Ifx_EMEM_SBRCTR_Bits.STBLOCK */
#define IFX_EMEM_SBRCTR_STBLOCK_LEN (1u)

/** \brief Mask for Ifx_EMEM_SBRCTR_Bits.STBLOCK */
#define IFX_EMEM_SBRCTR_STBLOCK_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_SBRCTR_Bits.STBLOCK */
#define IFX_EMEM_SBRCTR_STBLOCK_OFF (0u)

/** \brief Length for Ifx_EMEM_SBRCTR_Bits.STBULK */
#define IFX_EMEM_SBRCTR_STBULK_LEN (3u)

/** \brief Mask for Ifx_EMEM_SBRCTR_Bits.STBULK */
#define IFX_EMEM_SBRCTR_STBULK_MSK (0x7u)

/** \brief Offset for Ifx_EMEM_SBRCTR_Bits.STBULK */
#define IFX_EMEM_SBRCTR_STBULK_OFF (1u)

/** \brief Length for Ifx_EMEM_SBRCTR_Bits.STBSLK */
#define IFX_EMEM_SBRCTR_STBSLK_LEN (4u)

/** \brief Mask for Ifx_EMEM_SBRCTR_Bits.STBSLK */
#define IFX_EMEM_SBRCTR_STBSLK_MSK (0xfu)

/** \brief Offset for Ifx_EMEM_SBRCTR_Bits.STBSLK */
#define IFX_EMEM_SBRCTR_STBSLK_OFF (4u)

/** \brief Length for Ifx_EMEM_SBRCTR_Bits.STBPON */
#define IFX_EMEM_SBRCTR_STBPON_LEN (1u)

/** \brief Mask for Ifx_EMEM_SBRCTR_Bits.STBPON */
#define IFX_EMEM_SBRCTR_STBPON_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_SBRCTR_Bits.STBPON */
#define IFX_EMEM_SBRCTR_STBPON_OFF (16u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN0 */
#define IFX_EMEM_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN0 */
#define IFX_EMEM_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN0 */
#define IFX_EMEM_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN1 */
#define IFX_EMEM_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN1 */
#define IFX_EMEM_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN1 */
#define IFX_EMEM_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN2 */
#define IFX_EMEM_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN2 */
#define IFX_EMEM_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN2 */
#define IFX_EMEM_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN3 */
#define IFX_EMEM_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN3 */
#define IFX_EMEM_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN3 */
#define IFX_EMEM_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN4 */
#define IFX_EMEM_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN4 */
#define IFX_EMEM_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN4 */
#define IFX_EMEM_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN5 */
#define IFX_EMEM_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN5 */
#define IFX_EMEM_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN5 */
#define IFX_EMEM_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN6 */
#define IFX_EMEM_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN6 */
#define IFX_EMEM_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN6 */
#define IFX_EMEM_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN7 */
#define IFX_EMEM_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN7 */
#define IFX_EMEM_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN7 */
#define IFX_EMEM_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN8 */
#define IFX_EMEM_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN8 */
#define IFX_EMEM_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN8 */
#define IFX_EMEM_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN9 */
#define IFX_EMEM_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN9 */
#define IFX_EMEM_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN9 */
#define IFX_EMEM_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN10 */
#define IFX_EMEM_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN10 */
#define IFX_EMEM_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN10 */
#define IFX_EMEM_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN11 */
#define IFX_EMEM_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN11 */
#define IFX_EMEM_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN11 */
#define IFX_EMEM_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN12 */
#define IFX_EMEM_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN12 */
#define IFX_EMEM_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN12 */
#define IFX_EMEM_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN13 */
#define IFX_EMEM_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN13 */
#define IFX_EMEM_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN13 */
#define IFX_EMEM_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN14 */
#define IFX_EMEM_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN14 */
#define IFX_EMEM_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN14 */
#define IFX_EMEM_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN15 */
#define IFX_EMEM_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN15 */
#define IFX_EMEM_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN15 */
#define IFX_EMEM_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN16 */
#define IFX_EMEM_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN16 */
#define IFX_EMEM_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN16 */
#define IFX_EMEM_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN17 */
#define IFX_EMEM_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN17 */
#define IFX_EMEM_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN17 */
#define IFX_EMEM_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN18 */
#define IFX_EMEM_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN18 */
#define IFX_EMEM_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN18 */
#define IFX_EMEM_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN19 */
#define IFX_EMEM_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN19 */
#define IFX_EMEM_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN19 */
#define IFX_EMEM_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN20 */
#define IFX_EMEM_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN20 */
#define IFX_EMEM_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN20 */
#define IFX_EMEM_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN21 */
#define IFX_EMEM_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN21 */
#define IFX_EMEM_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN21 */
#define IFX_EMEM_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN22 */
#define IFX_EMEM_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN22 */
#define IFX_EMEM_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN22 */
#define IFX_EMEM_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN23 */
#define IFX_EMEM_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN23 */
#define IFX_EMEM_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN23 */
#define IFX_EMEM_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN24 */
#define IFX_EMEM_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN24 */
#define IFX_EMEM_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN24 */
#define IFX_EMEM_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN25 */
#define IFX_EMEM_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN25 */
#define IFX_EMEM_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN25 */
#define IFX_EMEM_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN26 */
#define IFX_EMEM_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN26 */
#define IFX_EMEM_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN26 */
#define IFX_EMEM_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN27 */
#define IFX_EMEM_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN27 */
#define IFX_EMEM_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN27 */
#define IFX_EMEM_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN28 */
#define IFX_EMEM_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN28 */
#define IFX_EMEM_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN28 */
#define IFX_EMEM_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN29 */
#define IFX_EMEM_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN29 */
#define IFX_EMEM_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN29 */
#define IFX_EMEM_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN30 */
#define IFX_EMEM_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN30 */
#define IFX_EMEM_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN30 */
#define IFX_EMEM_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_EMEM_ACCEN0_Bits.EN31 */
#define IFX_EMEM_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_EMEM_ACCEN0_Bits.EN31 */
#define IFX_EMEM_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_EMEM_ACCEN0_Bits.EN31 */
#define IFX_EMEM_ACCEN0_EN31_OFF (31u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXEMEM_BF_H */
