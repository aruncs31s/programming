# Assembly 
  - [8051](#8051)
  - 
  

## 8051

- [ Multiply two 8 bit Numbers ](#)

Tested on intel 8051/51 at 11.059 MHz
ie, MCU 89V51RD2

### Multiply two 8 bit numbers


```
4100: MOV  A , #02     ; Store data in Acummulator
4102: MOV  B , #05     ;  Store data in B register
4105: MUL  AB          ;  Multilply A and B
4106: MOV  DPTR, #4500 ;  initialize memory location
4109: MOVX @DPTR , A   ;  Store the lower order result
410A: INC  DPTR        ;  increment dptr ie, goto next location 
410B: MOV  A , B       ;  copy the result in B to Accumulator 
410D: MOVX   @DPTR , A ;  Store high order result
410E: SJMP 410E        ; Stay here

```

**INPUT**

 > 02 And 05

**OUTPUT**

> 4500H = 0A (10 in deciamal)
> 4501H = 00 (0 in deciaml)

