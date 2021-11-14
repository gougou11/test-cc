assume cs:codesg
;segment&ends伪指令 定义一个段
codesg segment

    mov ax,2000H
    mov ss,ax
    mov sp,0
    add sp,10
    pop ax
    pop bx
    push ax
    push bx
    pop ax
    pop bx

    mov ax,4c00h ;程序返回
    int 21h
codesg ends

end