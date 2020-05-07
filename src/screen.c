
/* Индикатор */
/* Все внешние функции имеют префикс scr_ */

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>

#include "defs.h"
#include "repres.h"


/* This file will be automatically included in OBJ in Makefile because of *.c pattern */


#define SCREEN_SIZE 4

char buffer[SCREEN_SIZE] = {SYM_OFF, SYM_OFF, SYM_OFF, SYM_OFF};


/* Разворачивает следующий разряд на экране при каждом вызове */
/* Работает только в прерывании */
inline void scr_flush(void) {
  static char current_digit = 0;
  
  return;
}


/* Преобразует полученный текст в отображение и сохраняет в буфер */
void scr_text(char ch4, char ch3, char ch2, char ch1) {
  return;
}


/* Настраивает порты и переменные */
/* Используется только в инициализации */
inline void scr_init(void) {
  return;
}


/* Преобразует символ (код символа) в отображение на индикаторе */
char symbolize(char ch) {
  char repr = SYM_OFF;
  return repr;
}


/* Преобразует цифру (не код символа) в отображение на индикаторе */
char digitize(char dg) {
  char repr = SYM_OFF;
  return repr;
}


/* Записывает отображение _d_ в ячейку буфера _i_ */
inline void raw_d(char d, char i) {
  return;
}
