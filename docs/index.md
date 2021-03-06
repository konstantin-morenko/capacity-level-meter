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

Сохранение настроек и данных выполняется в EEPROM.


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
- задать смещение перевода процентов в единицы (для уровня воды в скважине)
- задать коэффициент чувствительности к изменению частоты
- задать коэффициент предварительного деления частоты
  - при изменении коэффициента деления изменяются соответствующие
    величины в единицах частоты
- задать уровень включения выхода (логическая 1) (см. [Режимы
  управления выходом](#exit-drive))
  - выражен в единицах частоты
  - может быть задан в:
    - единицах частоты
	- процентах
    - единицах
- задать уровень выключения выхода (логический 0) (см. [Режимы
  управления выходом](#exit-drive))
  - выражен в единицах частоты
  - может быть задан в:
    - единицах частоты
	- процентах
	- единицах
- задать время измерения динамики уровня (в секундах)
  - "0" отключает измерение динамики
- задать управление внешним устройством: разрешено/запрещено
  - "запрещено" отключает отображение состояния выхода
- задать режим отображения по умолчанию: проценты/единицы
- задать шаг короткого сигнала через равные интервалы
  наполнения/опустошения
  - в процентах
  - в единицах
- задать уровень аварийного сигнала наполнения
  - в процентах
  - в единицах
- задать уровень аварийного сигнала опустошения
- включить/отключить аварийный сигнал при потере сигнала датчика
- сбросить EEPROM


#### Режимы автоматического управления выходом {:exit-drive}

- Управление отключено

  Уровень включения и уровень отключения установлены в "0".

- Порог включения

  Уровень отключения выхода должен быть установлен в "0".  В этом
  случае пока уровень не достиг заданного в Уровень включения выхода,
  на выходе установлен "0".  При превышении уровня выход
  устанавливается в "1".

- Порог отключения

  Уровень включения выхода должен быть установлен в "0".  В этом
  случае пока уровень не достиг заданного в Уровень отлючения выхода,
  на выходе установлен "1".  При превышении уровня выход
  устанавливается в "0".

- Режим гистерезиса

  Уровни включения и отключения должны быть отличны от "0".

  - Режим наполнения

  Активируется когда уровень включения ниже уровня отключения.  При
  опускании уровня ниже включения на выходе устанавливается "1".  При
  превышении уровня выше уровня отключения на выходе устанавливается
  "0".  При уровне между уровнем включения и отключения состояние не
  изменяется.

  - Режим опустошения

  Активируется когда уровень отключения ниже уровня включения.  При
  превышении уровня выше уровня включения на выходе устанавливается "1".  При
  снижении уровня ниже уровня отключения на выходе устанавливается
  "0".  При уровне между уровнем включения и отключения состояние не
  изменяется.


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
