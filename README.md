#### WaveDrift16Low8

WaveDrift16Low8 provides enhanced speed as an ideal alternative to fast, statistically-weak PRNGs that output 8-bit, truncated integers from larger integers and suffice with indifference between large and small periods, including standard library PRNGs.

It has a period of at least 2¹⁶.

`a` must be seeded with `0` and `b` must be assigned a seed.

##### C

`waveDrift16Low8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports an 8-bit, unsigned integral type for `uint8_t` and a 16-bit, unsigned integral type for `uint16_t`.

##### C#

`Next` from `waveDrift16Low8` generates and returns a pseudorandom `byte` integer.

---

WaveDrift32Low16 is coming soon.
