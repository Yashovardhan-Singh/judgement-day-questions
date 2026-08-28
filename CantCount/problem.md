# Problem Statement

Write a simple encrypter and decrypter for base: `-2`  

Refer to the table below:  

|  Bits  |  Value  |  Bits  |  Value  |  Bits  |  Value  |  Bits  |  Value  |
|--------|---------|--------|---------|--------|---------|--------|---------|
| 00000  |    0    | 01000  |    -8   | 10000  |    16   | 11000  |    8    |
| 00001  |    1    | 01001  |    -7   | 10001  |    17   | 11001  |    9    |
| 00010  |   -2    | 01010  |   -10   | 10010  |    14   | 11010  |    6    |
| 00011  |   -1    | 01011  |    -9   | 10011  |    15   | 11011  |    7    |
| 00100  |    4    | 01100  |    -4   | 10100  |    20   | 11100  |    12   |
| 00101  |    5    | 01101  |    -3   | 10101  |    21   | 11101  |    13   |
| 00110  |    2    | 01110  |    -6   | 10110  |    18   | 11110  |    10   |
| 00111  |    3    | 01111  |    -5   | 10111  |    19   | 11111  |    11   |

# Input Format

A single line containing a single char `m` and a single integer `n`, where:
* `m`: is the mode, can can have 1 of two possible values, 'b' or 'd'. **'b' means to "decimal"**
and **'d' means "to binary"**
* `n`: is the number, which will be in **binary representation if mode is 'b'**
or **decimal representation if mode is in 'd'**

# Output Format

A single line containing the encrypted binary format/decrypted decimal format (based on test case)

# Constraints

* `m` = 'b' or 'd'
* Size of `n` <= Size of 64 bit integer

# Examples
**Input 0**
```
b 1001101
```
**Output 0**
```
61
```

**Input 1**
```
d -137
```
**Output 1**
```
10001011
```
