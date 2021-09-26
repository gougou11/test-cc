assume cs:codesg

stk segment STACK 'STACK'
    dw 32 dup(0)
stk ends

codesg segment

fuk:mov ax,0123h
    mov bx,0456h
    add ax,bx
    add ax,ax

    mov ax,4c00h
    int 21h

codesg ends

end fuk