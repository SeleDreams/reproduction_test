
#ifndef SOMEOTHERDEFINES_H
#define SOMEOTHERDEFINES_H
#ifdef __cplusplus
extern "C" {
#endif
#include <sub_headers/somedefines.h>

// Values allowed for REG_IE and REG_IF
#define IRQ_VBLANK          BIT(0)  ///< Vertical blank interrupt mask
#define IRQ_HBLANK          BIT(1)  ///< Horizontal blank interrupt mask
#define IRQ_VCOUNT          BIT(2)  ///< Vcount match interrupt mask
#define IRQ_TIMER0          BIT(3)  ///< Timer 0 interrupt mask
#define IRQ_TIMER1          BIT(4)  ///< Timer 1 interrupt mask
#define IRQ_TIMER2          BIT(5)  ///< Timer 2 interrupt mask
#define IRQ_TIMER3          BIT(6)  ///< Timer 3 interrupt mask
#ifdef ARM7
#define IRQ_NETWORK         BIT(7)  ///< Serial/RTC interrupt mask (ARM7) (deprecated name)
#define IRQ_RTC             BIT(7)  ///< Serial/RTC interrupt mask (ARM7)
#endif
#define IRQ_DMA0            BIT(8)  ///< DMA 0 interrupt mask
#define IRQ_DMA1            BIT(9)  ///< DMA 1 interrupt mask
#define IRQ_DMA2            BIT(10) ///< DMA 2 interrupt mask
#define IRQ_DMA3            BIT(11) ///< DMA 3 interrupt mask
#define IRQ_KEYS            BIT(12) ///< Keypad interrupt mask
#define IRQ_CART            BIT(13) ///< GBA cartridge interrupt mask
#define IRQ_IPC_SYNC        BIT(16) ///< IPC sync interrupt mask
#define IRQ_FIFO_EMPTY      BIT(17) ///< Send FIFO empty interrupt mask
#define IRQ_FIFO_NOT_EMPTY  BIT(18) ///< Receive FIFO not empty interrupt mask
#define IRQ_CARD            BIT(19) ///< interrupt mask DS Card Slot
#define IRQ_CARD_LINE       BIT(20) ///< interrupt mask
#ifdef ARM9
#define IRQ_GEOMETRY_FIFO   BIT(21) ///< Geometry FIFO interrupt mask (ARM9)
#define IRQ_DSP             BIT(24) ///< DSP interrupt mask (DSi ARM9)
#define IRQ_CAMERA          BIT(25) ///< Camera interrupt mask (DSi ARM9)
#endif
#ifdef ARM7
#define IRQ_LID             BIT(22) ///< Hinge open interrupt mask
#define IRQ_SPI             BIT(23) ///< SPI interrupt mask
#define IRQ_WIFI            BIT(24) ///< WIFI interrupt mask (ARM7)
#endif
#define IRQ_NDMA0           BIT(28) ///< NDMA 0 interrupt mask (DSi)
#define IRQ_NDMA1           BIT(29) ///< NDMA 1 interrupt mask (DSi)
#define IRQ_NDMA2           BIT(30) ///< NDMA 2 interrupt mask (DSi)
#define IRQ_NDMA3           BIT(31) ///< NDMA 3 interrupt mask (DSi)
#define IRQ_ALL             (~0)    ///< Mask for all interrupts
#ifdef __cplusplus
}
#endif
#endif