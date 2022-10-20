SECTION .data
msg:    db "Hello Holberton", 0
fmt:    db "%s", 10 , 0
 	SECTION .text
	extern printf
	global main 

main:	
	move esi, msg
	move edi, fmt
	move eax, 0
	call printf 
	move eax, 0
	ret  

