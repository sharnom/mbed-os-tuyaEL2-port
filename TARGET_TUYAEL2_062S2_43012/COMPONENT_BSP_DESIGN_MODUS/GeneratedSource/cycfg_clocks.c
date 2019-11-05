/*******************************************************************************
* File Name: cycfg_clocks.c
*
* Description:
* Clock configuration
* This file was automatically generated and should not be modified.
* 
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_clocks.h"

#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_UART_CLK_DIV_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = CYBSP_UART_CLK_DIV_HW,
		.channel_num = CYBSP_UART_CLK_DIV_NUM,
	};
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_BT_UART_CLK_DIV_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = CYBSP_BT_UART_CLK_DIV_HW,
		.channel_num = CYBSP_BT_UART_CLK_DIV_NUM,
	};
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_CLK_DIV_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = CYBSP_CSD_CLK_DIV_HW,
		.channel_num = CYBSP_CSD_CLK_DIV_NUM,
	};
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_COMM_CLK_DIV_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = CYBSP_CSD_COMM_CLK_DIV_HW,
		.channel_num = CYBSP_CSD_COMM_CLK_DIV_NUM,
	};
#endif //defined (CY_USING_HAL)


void init_cycfg_clocks(void)
{
	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 0U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 0U, 719U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 0U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&CYBSP_UART_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 1U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 1U, 77U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 1U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&CYBSP_BT_UART_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 0U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 0U, 0U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 0U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&CYBSP_CSD_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 1U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 1U, 5U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 1U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&CYBSP_CSD_COMM_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)
}