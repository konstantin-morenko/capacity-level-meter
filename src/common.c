
/* Заменить биты по маске */
/* Подробное описание в docs/src.md */
char apply_w_mask(char src, char mask, char new) {
  return (new & mask) | (src & ~mask)
