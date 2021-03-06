
## Оформление блоков кода

Заголовки разделов представляются в виде комментариев вида

    /* ======================================== */
    /* ЗАГОЛОВОК */

Внутри файла исходного кода представлены следующие разделы
(представлен в файле `src/template.c`):
- описание файла
- включаемые файлы
  - глобальные
  - локальные
- глобальные переменные
  - макроопределения
  - переменные
- объявления функций
  - из других файлов
  - локальные
- функции

Две пустых строки используются перед заголовком блока и между
функциями.  Заголовок блока может быть пропущен вместе с
разделительными символами, но двойная пустая строка сохраняется.

Одна пустая строка используется для визуального разделения.

В файле `main.c` первой внутренней функцией является `void
main(void)`, внешние функции не представлены.

## common.c

### char apply_w_mask(char src, char mask, char new)

Функция применяет к байту сначала маску, а затем новое состояние.
Задача в том, чтобы переписать в регистре на новые только те биты,
которые отмечены в маске.  Единицы в маске отмечают биты, которые
должны быть заменены на новые.

Источник бита обозначен буквой.  В последнем столбце перебраны все
комбинации битов для mask, src и new, чтобы проверить правильность
логики.

    1. mask:  M0   M1   0000 1111
    2. ~1:    M1   M0   1111 0000
    3. src:   S01  S01  1100 1100
    4. 3&2:   S01  M0   1100 0000
    5. new:   N01  N01  1010 1010
    6. 5&1:   M0   N01  0000 1010
    7. 6|4:   S01  N01  1100 1010

В последней операции получаем перезаписанные биты по маске.

В одну строку

    7
    6|4
	(5&1)|(3&2)
	(new&mask)|(src&~1)
	(new&mask)|(src&~mask)

## scr.c

Все публичные функции файла имеют префикс `scr_`.

### void flush()

Отображает следующий разряд, вызывается в прерывании

### void txt(c1, c2, c3, c4)

Записывает текст для отображения

### void val(int v)

Преобразовывает число и записывает его

### void split(val, out, dir)

Режим разделения экрана: записывает число, состояние выхода и
направление изменения

### void msg(c1, c2, c3, c4, time=2)

Отображает сообщение на экране в течение нескольких секунд

### void hl(int dig)

Подсвечивает разряд на экране

### void init()

Настраивает экран

### void raw(c1, c2, c3, c4)

Записывает данные в буфер отображения

### void raw_d(c, d)

Записывает данные в конкретный разряд буфера

### void turn_on()

### void turn_off()

## beep.c

### void beep_msg(count=4, high=0.7, low=0.3, freq=400)

Включает пищалку в формате сообщения.  Задается количество звуков,
длительность в долях секунды звука и тишины, частота звука.

## int.c

Прерывания реализуют:
- измерить частоту
- отобразить индикатор
- генерировать звук
