#include <stdint.h>

struct waveDriftState16 {
  uint16_t a;
  uint16_t b;
};

uint8_t waveDrift16Low8(struct waveDriftState16 *s) {
  s->a += 1111;
  s->b += s->a + (s->b >> 2);
  return s->b;
}
