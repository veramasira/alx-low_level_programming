section .data
    hello: db "Hello, Holberton,", 10, 0  ; Define the string to be printed

section .text
    global main  ; Entry point for the program

main:
    mov rax, 0  ; Clear the RAX register
    lea rdi, [hello]  ; Load the address of the string into the RDI register
    xor rsi, rsi  ; Clear the RSI register (second argument to printf)
    mov eax, 0  ; Set EAX to 0 (indicating the first argument is a string)
    call printf  ; Call the printf function to print the string
    mov eax, 0  ; Set the exit code to 0 (indicating success)
    ret  ; Return from the main function
