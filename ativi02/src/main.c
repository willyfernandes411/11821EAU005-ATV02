#include <stdlib.h>
#include <stdint.h>

#define STM32_RCC_BASE            0x40023800
#define STM32_GPIOC_BASE          0x40020800

#define STM32_RCC_AHB1ENR_OFFSET  0x0030
#define STM32_GPIO_MODER_OFFSET   0x0000
#define STM32_GPIO_OTYPER_OFFSET  0x0004 
#define STM32_GPIO_PUPDR_OFFSET   0x000c
#define STM32_GPIO_ODR_OFFSET     0x0014
#define STM32_GPIO_BSRR_OFFSET    0x0018

#define STM32_RCC_AHB1ENR        (STM32_RCC_BASE+STM32_RCC_AHB1ENR_OFFSET)
#define STM32_GPIOC_MODER        (STM32_GPIOC_BASE+STM32_GPIO_MODER_OFFSET)
#define STM32_GPIOC_OTYPER       (STM32_GPIOC_BASE+STM32_GPIO_OTYPER_OFFSET)
#define STM32_GPIOC_PUPDR        (STM32_GPIOC_BASE+STM32_GPIO_PUPDR_OFFSET)
#define STM32_GPIOC_ODR          (STM32_GPIOC_BASE+STM32_GPIO_ODR_OFFSET)
#define STM32_GPIOC_BSRR         (STM32_GPIOC_BASE+STM32_GPIO_BSRR_OFFSET)

#define RCC_AHB1ENR_GPIOCEN      (1 << 2)  /* Bit 2:  IO port C clock enable */

#define GPIO_MODER_INPUT           (0) /* Input */
#define GPIO_MODER_OUTPUT          (1) /* General purpose output mode */
#define GPIO_MODER_ALT             (2) /* Alternate mode */
#define GPIO_MODER_ANALOG          (3) /* Analog mode */

#define GPIO_MODER_SHIFT(n)        (n << 1)
#define GPIO_MODER_MASK(n)         (3 << GPIO_MODER_SHIFT(n))

#define GPIO_OTYPER_PP             (0) /* 0=Output push-pull */
#define GPIO_OTYPER_OD             (1) /* 1=Output open-drain */

#define GPIO_OT_SHIFT(n)           (n)
#define GPIO_OT_MASK(n)            (1 << GPIO_OT_SHIFT(n))

#define GPIO_PUPDR_NONE            (0) /* No pull-up, pull-down */
#define GPIO_PUPDR_PULLUP          (1) /* Pull-up */
#define GPIO_PUPDR_PULLDOWN        (2) /* Pull-down */

#define GPIO_PUPDR_SHIFT(n)        (n << 1)
#define GPIO_PUPDR_MASK(n)         (3 << (n << 1))

#define GPIO_BSRR_SET(n)           (1 << (n))
#define GPIO_BSRR_RESET(n)         (1 << ((n) + 16))



int main(int argc, char *argv[])
{
while(1){};
/* Nao deveria chegar aqui 123  456
*/
return EXIT_SUCCESS;
}
