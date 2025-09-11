using System;

public class WaveDrift32Low16 {
  public uint a;
  public uint b;

  public ushort Next() {
    a = (uint) (((a << 13) | (a >> 19)) ^ b);
    b += 1111111;
    return (ushort) a;
  }
}

public class WaveDrift16Low8 {
  public ushort a;
  public ushort b;

  public byte Next() {
    a += 1111;
    b += (ushort) (a + (b >> 2));
    return (byte) b;
  }
}
