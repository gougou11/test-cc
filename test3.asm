assume cs:codesg
;segment&ends伪指令 定义一个段
stk segment STACK 'STACK'
    dw 32 dup(0)
stk ends

codesg segment

fuk:mov ax,0123H
    mov bx,0456H
    add ax,bx
    add ax,ax

    mov ax,4c00h ;程序返回
    int 21h
codesg ends

end fuk