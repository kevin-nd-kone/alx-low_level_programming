include Irvine32.inc


.data
    text byte "Hello, Holberton",0


.code
    mov edx, offset text
    call writestring
    exit
main ENDP

END main