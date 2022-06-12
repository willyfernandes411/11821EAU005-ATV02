#include <stdint.h>
#include <stdlib.h>
#define SRAM_START 0x20000000U /*Início da memória SRAM*/
#define SRAM_SIZE  (128U * 1024U) /*Tamanho da SRAM*/
#define SRAM_END   ((SRAM_START)+ \
                    (SRAM_SIZE)) /*Final da SRAM STM32F411*/

#define STACK_START SRAM_END /*Início da Stack*/

/* FLASH -> SP + IV*/

int main(void);

void reset_handler (void);
void nmi_handler (void) __attribute__ ((alias("default_handler")));
void hardfault_handler (void) __attribute__ ((alias("default_handler")));
void memmanage_handler (void) __attribute__ ((alias("default_handler")));
void busfault_handler (void) __attribute__ ((alias("default_handler")));
void usagefault_handler(void) __attribute__ ((alias("default_handler")));
void svc_handler (void) __attribute__ ((alias("default_handler")));
void debugmon_handler (void) __attribute__ ((alias("default_handler")));
void pendsv_handler (void) __attribute__ ((alias("default_handler")));
void systick_handler (void) __attribute__ ((alias("default_handler")));
void WWDG_handler (void) __attribute__ ((alias("default_handler")));
void EXTI16_handler (void) __attribute__ ((alias("default_handler")));
void EXTI21_handler (void) __attribute__ ((alias("default_handler")));
void EXTI22_handler (void) __attribute__ ((alias("default_handler")));
void FLASH_handler (void) __attribute__ ((alias("default_handler")));
void RCC_handler (void) __attribute__ ((alias("default_handler")));
void EXTI0_handler (void) __attribute__ ((alias("default_handler")));
void EXTI1_handler (void) __attribute__ ((alias("default_handler")));
void EXTI2_handler (void) __attribute__ ((alias("default_handler")));
void EXTI3_handler (void) __attribute__ ((alias("default_handler")));
void EXTI4_handler (void) __attribute__ ((alias("default_handler")));
void DMA1_Stream0_handler (void) __attribute__ ((alias("default_handler")));
void DMA1_Stream1_handler (void) __attribute__ ((alias("default_handler")));
void DMA1_Stream2_handler (void) __attribute__ ((alias("default_handler")));
void DMA1_Stream3_handler (void) __attribute__ ((alias("default_handler")));
void DMA1_Stream4_handler (void) __attribute__ ((alias("default_handler")));
void DMA1_Stream5_handler (void) __attribute__ ((alias("default_handler")));
void DMA1_Stream6_handler (void) __attribute__ ((alias("default_handler")));
void ADC_handler (void) __attribute__ ((alias("default_handler")));
void EXTI9_5_handler (void) __attribute__ ((alias("default_handler")));
void TIM1_BRK_TIM9_handler (void) __attribute__ ((alias("default_handler")));
void TIM1_UP_TIM10_handler (void) __attribute__ ((alias("default_handler")));
void TIM1_TRG_COM_TIM11_handler (void) __attribute__ ((alias("default_handler")));
void TIM1_CC_handler (void) __attribute__ ((alias("default_handler")));
void TIM2_handler (void) __attribute__ ((alias("default_handler")));
void TIM3_handler (void) __attribute__ ((alias("default_handler")));
void TIM4_handler (void) __attribute__ ((alias("default_handler")));
void I2C1_EV_handler (void) __attribute__ ((alias("default_handler")));
void I2C1_ER_handler (void) __attribute__ ((alias("default_handler")));
void I2C2_EV_handler (void) __attribute__ ((alias("default_handler")));
void I2C2_ER_handler (void) __attribute__ ((alias("default_handler")));
void SPI1_handler (void) __attribute__ ((alias("default_handler")));
void SPI2_handler (void) __attribute__ ((alias("default_handler")));
void USART1_handler (void) __attribute__ ((alias("default_handler")));
void USART2_handler (void) __attribute__ ((alias("default_handler")));
void EXTI15_10_handler (void) __attribute__ ((alias("default_handler")));
void EXTI17_handler (void) __attribute__ ((alias("default_handler")));
void EXTI18_handler (void) __attribute__ ((alias("default_handler")));
void DMA1_Stream7_handler (void) __attribute__ ((alias("default_handler")));
void SDIO_handler (void) __attribute__ ((alias("default_handler")));
void TIM5_handler (void) __attribute__ ((alias("default_handler")));
void SPI3_handler (void) __attribute__ ((alias("default_handler")));
void DMA2_Stream0_handler (void) __attribute__ ((alias("default_handler")));
void DMA2_Stream1_handler (void) __attribute__ ((alias("default_handler")));
void DMA2_Stream2_handler (void) __attribute__ ((alias("default_handler")));
void DMA2_Stream3_handler (void) __attribute__ ((alias("default_handler")));
void DMA2_Stream4_handler (void) __attribute__ ((alias("default_handler")));
void OTG_FS_handler (void) __attribute__ ((alias("default_handler")));
void DMA2_Stream5_handler (void) __attribute__ ((alias("default_handler")));
void DMA2_Stream6_handler (void) __attribute__ ((alias("default_handler")));
void DMA2_Stream7_handler (void) __attribute__ ((alias("default_handler")));
void USART6_handler (void) __attribute__ ((alias("default_handler")));
void I2C3_EV_handler (void) __attribute__ ((alias("default_handler")));
void I2C3_ER_handler (void) __attribute__ ((alias("default_handler")));
void FPU_handler (void) __attribute__ ((alias("default_handler")));
void SPI4_handler (void) __attribute__ ((alias("default_handler")));
void SPI5_handler (void) __attribute__ ((alias("default_handler")));
/* Variáveis exportadas pelo linker script */

extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _la_data;
extern uint32_t _sbss;
extern uint32_t _ebss;



uint32_t vectors[]  __attribute__((section(".isr_vectors"))) =
{
STACK_START, /* 0x0000 0000 */
(uint32_t)reset_handler, /* 0x0000 0004 */
(uint32_t)nmi_handler, /* 0x0000 0008 */
(uint32_t)hardfault_handler, /* 0x0000 000c */
(uint32_t)memmanage_handler, /* 0x0000 0010 */
(uint32_t)busfault_handler, /* 0x0000 0014 */
(uint32_t)usagefault_handler, /* 0x0000 0018 */
0, /* 0x0000 001c */
0, /* 0x0000 0020 */
0, /* 0x0000 0024 */
0, /* 0x0000 0028 */
(uint32_t)svc_handler, /* 0x0000 002c */
(uint32_t)debugmon_handler, /* 0x0000 0030 */
0, /* 0x0000 0034 */
(uint32_t)pendsv_handler, /* 0x0000 0038 */
(uint32_t)systick_handler, /* 0x0000 003c */
(uint32_t)WWDG_handler,   /*0x0000 0040 */
(uint32_t)EXTI16_handler,
(uint32_t)EXTI21_handler,
(uint32_t)EXTI22_handler,
(uint32_t)FLASH_handler,
(uint32_t)RCC_handler,
(uint32_t)EXTI0_handler,
(uint32_t)EXTI1_handler,
(uint32_t)EXTI2_handler,
(uint32_t)EXTI3_handler,
(uint32_t)EXTI4_handler,
(uint32_t)DMA1_Stream0_handler,
(uint32_t)DMA1_Stream1_handler,
(uint32_t)DMA1_Stream2_handler,
(uint32_t)DMA1_Stream3_handler,
(uint32_t)DMA1_Stream4_handler,
(uint32_t)DMA1_Stream5_handler,
(uint32_t)DMA1_Stream6_handler,
(uint32_t)ADC_handler,
0,
0,
0,
0,
(uint32_t)EXTI9_5_handler,
(uint32_t)TIM1_BRK_TIM9_handler,
(uint32_t)TIM1_UP_TIM10_handler,
(uint32_t)TIM1_TRG_COM_TIM11_handler,
(uint32_t)TIM1_CC_handler,
(uint32_t)TIM2_handler,
(uint32_t)TIM3_handler,
(uint32_t)TIM4_handler,
(uint32_t)I2C1_EV_handler,
(uint32_t)I2C1_ER_handler,
(uint32_t)I2C2_EV_handler,
(uint32_t)I2C2_ER_handler,
(uint32_t)SPI1_handler,
(uint32_t)SPI2_handler,
(uint32_t)USART1_handler,
(uint32_t)USART2_handler,
(uint32_t)EXTI15_10_handler,
(uint32_t)EXTI17_handler,
(uint32_t)EXTI18_handler,
0,
0,
0,
0,
(uint32_t)DMA1_Stream7_handler,
0,
(uint32_t)SDIO_handler,
(uint32_t)TIM5_handler,
(uint32_t)SPI3_handler,
0,
0,
0,
0,
(uint32_t)DMA2_Stream0_handler,
(uint32_t)DMA2_Stream1_handler,
(uint32_t)DMA2_Stream2_handler,
(uint32_t)DMA2_Stream3_handler,
(uint32_t)DMA2_Stream4_handler,
(uint32_t)OTG_FS_handler,
(uint32_t)DMA2_Stream5_handler,
(uint32_t)DMA2_Stream6_handler,
(uint32_t)DMA2_Stream7_handler,
(uint32_t)USART6_handler,
(uint32_t)I2C3_EV_handler,
(uint32_t)I2C3_ER_handler,
(uint32_t)FPU_handler,
(uint32_t)SPI4_handler,
(uint32_t)SPI5_handler,
};

void reset_handler(void)
{
    uint32_t i;
    uint32_t size  = (uint32_t)&_edata - (uint32_t)&_sdata;
    uint8_t *pDst = (uint8_t*)&_sdata;                    /* SRAM */
    uint8_t *pSrc = (uint8_t*)&_la_data;                  /* FLASH*/

    for(i = 0; i < size; i++)
    {
    *pDst++ = *pSrc++;
    }
    size = (uint32_t)&_ebss - (uint32_t)&_sbss;
    pDst = (uint8_t*)&_sbss;

    for(i = 0 ; i < size; i++)
    {
    
    *pDst++ = 0;
    }
    main();
}
void default_handler(void){
    while(1){};
}