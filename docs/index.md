## Емкостный измеритель уровня жидкости

Измеритель предназначен для измерения и индикации уровня жидкости и
управления внешним устройством.

Используется:
- [назначение IdLoc](http://konstantin-morenko.ru/my-pic-idloc/)
- http://semver.org


### Конструкция устройства

Устройство содержит три кнопки и четырехразрядный семисегментный
индикатор.

Дисплей разделен на 2 части: старший разряд используется для индикации
информации, три младших разряда используются для индикации цифр


### Режим настройки

Режим настройки включается удержанием кнопки во время подачи питания
на устройство.

- показать частоту на входе (без компенсации частоты ниже 100)
- показать оборот жидкости (сумму всех наполнений/сливаний)
  - в процентах
  - в единицах
- задать максимальный уровень (в единицах частоты)
  - вручную
  - по состоянию на входе
- задать минимальный уровень (в единицах частоты)
  - вручную
  - по состоянию на входе
- задать коэффициент перевода процентов в единицы
  - "0" отключает все режимы отображения единиц
- задать коэффициент чувствительности к изменению частоты
- задать коэффициент предварительного деления частоты
  - при изменении коэффициента деления изменяются соответствующие
    величины в единицах частоты
- задать уровень включения выхода (логическая 1)
  - выражен в единицах частоты
    - "0" отключает автоматическое управление выходом
  - может быть задан в:
    - единицах частоты
	- процентах
    - единицах
- задать уровень выключения выхода (логический 0)
  - выражен в единицах частоты
    - "0" отключает автоматическое управление выходом
  - может быть задан в:
    - единицах частоты
	- процентах
	- единицах
- задать время измерения динамики уровня (в секундах)
  - "0" отключает измерение динамики
- задать управление внешним устройством: разрешено/запрещено
  - "запрещено" отключает отображение состояния выхода
- задать режим отображения по умолчанию: проценты/единицы


### Режим работы

- цифровая шкала
  - уровень в процентах
  - уровень в единицах
- шкала информации
  - динамики уровня воды
  - состояние внешнего устройства: вкл/выкл
- клавиатура
  - включение/отключение выхода вручную
  - переключение цифровой шкалы
  - заблокировать изменение состояния выхода (вручную или
    автоматически)


### Ошибки

- частота на входе устройства ниже 100 (для устранения наводок 50/60
  герц)
- частота ниже нижнего предела с учетом чувствительности
- частота выше верхнего предела с учетом чувствительности