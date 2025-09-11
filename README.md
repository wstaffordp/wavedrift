#### WaveDrift32Low16

WaveDrift32Low16 provides enhanced speed as an ideal alternative to fast, statistically-weak PRNGs that truncate output integers to 16 bits and suffice with indifference between large and small periods, including standard library PRNGs.

It has a period of at least 2³².

`a` must be assigned a seed and `b` must be seeded with `0`.

##### C

`waveDrift32Low16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports a 16-bit, unsigned integral type for `uint16_t` and a 32-bit, unsigned integral type for `uint32_t`.

##### C#

`Next` from `waveDrift32Low16` generates and returns a pseudorandom `ushort` integer.

---

#### WaveDrift16Low8

WaveDrift16Low8 provides enhanced speed as an ideal alternative to fast, statistically-weak PRNGs that truncate output integers to 8 bits and suffice with indifference between large and small periods, including standard library PRNGs.

It has a period of at least 2¹⁶.

`a` must be seeded with `0` and `b` must be assigned a seed.

##### C

`waveDrift16Low8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports an 8-bit, unsigned integral type for `uint8_t` and a 16-bit, unsigned integral type for `uint16_t`.

##### C#

`Next` from `waveDrift16Low8` generates and returns a pseudorandom `byte` integer.
