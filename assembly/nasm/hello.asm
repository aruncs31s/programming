section .data
    hello db 'Hello, World!', 0    ; Null-terminated string

section .text
    global _start                   ; Entry point for the program

_start:
    ; Write "Hello, World!" to stdout
    mov eax, 4                     ; Syscall number for sys_write
    mov ebx, 1                     ; File descriptor 1 is stdout
    mov ecx, hello                 ; Pointer to the message
    mov edx, 13                    ; Length of the message
    int 0x80                       ; Call kernel

    ; Exit the program
    mov eax, 1                     ; Syscall number for sys_exit
    xor ebx, ebx                   ; Exit code 0
    int 0x80                       ; Call kernel

