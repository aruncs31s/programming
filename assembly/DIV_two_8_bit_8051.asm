MOV  A,#20
MOV  B,#0A
DIV  AssemblyMOV DPTR,#4500
MOV  DPTR,#4500
MOVX @DPTR,A
INC  DPTR
MOV  A,B
MOVX @DPTR,A
SJMP 410E 
