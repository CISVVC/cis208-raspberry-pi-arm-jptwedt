@ first.s
@   from thinkingeek.com
@   http://thinkingeek.com/2013/01/09/arm-assembler-raspberry-pi-chapter-1/
@   Defines a main function that returns 10 as an exit code.
@       

        
        .global main
        
main:   mov r0, #10       @ load immediate value 10 into Register r0 
        bx lr            @ return 2 to Operating Sytem
