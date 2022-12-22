/*
 *  lcd.h
 *
 *  @description: The LCD driver header file for the
 *  HD44780 LCD controller. The driver transfers data/command
 *  in the 4-bit mode.
 *
 *  @Pin Map:
 *  - RS: E1
 *  - R/W: GND
 *  - E: E3
 *  - DB4: E4
 *  - DB5: E5
 *  - DB6: E6
 *  - DB7: E7
 *
 *  @Reference:
 *  1.The HD44780U datasheet:
 *  https://www.alldatasheet.com/datasheet-pdf/pdf/63673/HITACHI/HD44780.html
 *  2.ST open-source HAL GPIO drivers
 *  3. https://www.youtube.com/watch?v=ITTBWSQTi3c
 *  @Code Leverage: The initialization routine and the delay function
 *  are implemented based on the tutorial video.
 *  @Author: Shuran Xu
 *
 *  @Revision: 2.0
 *
 *  @Date 2022-12-12
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_

/***************************************
* GPIO Macro definition for LCD signals
****************************************/
#define RS_Pin GPIO_PIN_1
#define RS_GPIO_Port GPIOE
#define RW_Pin GPIO_PIN_2
#define RW_GPIO_Port GPIOE
#define EN_Pin GPIO_PIN_3
#define EN_GPIO_Port GPIOE
#define D4_Pin GPIO_PIN_4
#define D4_GPIO_Port GPIOE
#define D5_Pin GPIO_PIN_5
#define D5_GPIO_Port GPIOE
#define D6_Pin GPIO_PIN_6
#define D6_GPIO_Port GPIOE
#define D7_Pin GPIO_PIN_7
#define D7_GPIO_Port GPIOE


/***************************************
* Public function declaration
****************************************/
// initialize lcd
void lcd_init(void);

// send string to the lcd
void lcd_write_string(char *str);

// put cursor at the entered position row (0 or 1), col (0-15);
void lcd_update_cur(int row, int col);

// clear the lcd
void lcd_clear(void);

#endif /* INC_LCD_H_ */
