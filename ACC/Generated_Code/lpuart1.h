/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : lpuart1.h
**     Project     : LPUART_Example
**     Processor   : S32K144_100
**     Component   : fsl_lpuart
**     Version     : Component S32K144_SDK02, Driver 01.00, CPU db: 3.00.000
**     Repository  : S32K144_SDK02
**     Compiler    : GNU C Compiler
**     Date/Time   : 2020-03-05, 15:58, # CodeGen: 0
**     Abstract    :
**
**     Contents    :
**         LPUART_DRV_Init                - lpuart_status_t LPUART_DRV_Init(uint32 instance,lpuart_state_t *...
**         LPUART_DRV_Deinit              - lpuart_status_t LPUART_DRV_Deinit(uint32 instance);
**         LPUART_DRV_InstallRxCallback   - lpuart_rx_callback_t LPUART_DRV_InstallRxCallback(uint32...
**         LPUART_DRV_InstallTxCallback   - lpuart_tx_callback_t LPUART_DRV_InstallTxCallback(uint32...
**         LPUART_DRV_SendDataBlocking    - lpuart_status_t LPUART_DRV_SendDataBlocking(uint32 instance,const uint8 *...
**         LPUART_DRV_SendData            - lpuart_status_t LPUART_DRV_SendData(uint32 instance,const uint8 *...
**         LPUART_DRV_GetTransmitStatus   - lpuart_status_t LPUART_DRV_GetTransmitStatus(uint32 instance,uint32 *...
**         LPUART_DRV_AbortSendingData    - lpuart_status_t LPUART_DRV_AbortSendingData(uint32 instance);
**         LPUART_DRV_ReceiveDataBlocking - lpuart_status_t LPUART_DRV_ReceiveDataBlocking(uint32 instance,uint8 *...
**         LPUART_DRV_ReceiveData         - lpuart_status_t LPUART_DRV_ReceiveData(uint32 instance,uint8 * rxBuff,uint32...
**         LPUART_DRV_GetReceiveStatus    - lpuart_status_t LPUART_DRV_GetReceiveStatus(uint32 instance,uint32 *...
**         LPUART_DRV_AbortReceivingData  - lpuart_status_t LPUART_DRV_AbortReceivingData(uint32 instance);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file lpuart1.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup lpuart1_module lpuart1 module documentation
**  @{
*/         
#ifndef lpuart1_H
#define lpuart1_H
/* MODULE lpuart1. */
/* Include inherited beans */
#include "clockMan1.h"
#include "dmaController1.h"
#include "osif1.h"
#include "Cpu.h"

/*! @brief Device instance number */
#define FSL_LPUART1 (1U)

/*! Driver state structure */
extern lpuart_state_t lpuart1_State;

/*! @brief Configuration declaration */
extern const lpuart_user_config_t lpuart1_InitConfig0;

#endif  /* ifndef lpuart1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the Freescale S32K series of microcontrollers.
**
** ###################################################################
*/
