assume cs:code

stk segment STACK 'STACK'
    dw 32 dup(0)
stk ends

code segment
fuk:mov ax,0ffffh
	mov ds,ax
	mov bx,6

	mov al,[bx]
	mov ah,0

	mov dx,0
	mov cx,3
  s:add dx,ax
	loop s

	mov ax,4c00h
	int 21h

	code ends

end fuk