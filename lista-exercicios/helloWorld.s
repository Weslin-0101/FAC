        .data
msg:    .asciiz "Ola Mundo\n"

        .text
main:   
        li $v0, 4 # imprimir a string
        la $a0, msg
        syscall

        li $v0, 10 # sair do programa
        syscall