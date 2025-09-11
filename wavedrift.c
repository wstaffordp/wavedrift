#include <stdint.h>

struct waveDriftState32 {
  uint32_t a;
  uint32_t b;
};

struct waveDriftState16 {
  uint16_t a;
  uint16_t b;
};

uint16_t waveDrift32Low16(struct waveDriftState32 *s) {
  s->a = ((s->a << 13) | (s->a >> 19)) ^ s->b;
  s->b += 1111111;
  return s->a;
}

uint8_t waveDrift16Low8(struct waveDriftState16 *s) {
  s->a += 1111;
  s->b += s->a + (s->b >> 2);
  return s->b;
}
