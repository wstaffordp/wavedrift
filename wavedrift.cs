using System;

public class WaveDrift16Low8 {
  public ushort a;
  public ushort b;

  public byte Next() {
    a += 1111;
    b += (ushort) (a + (b >> 2));
    return (byte) b;
  }
}
