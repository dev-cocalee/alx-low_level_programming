section .data
    hello db "Hello, Holberton",0xA,0  ; The string to print, 0xA is the newline character (\n)

section .text
    global main
    extern printf

main:
    ; Call printf to print the string
    mov rdi, hello  ; Load the address of the string into rdi
    call printf    ; Call printf function

    ; Exit the program
    mov rax, 60     ; syscall number for exit (60 on x86-64)
    xor rdi, rdi    ; status = 0
    syscall         ; Invoke syscall to exit

