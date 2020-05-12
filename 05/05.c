asm (
".section .data\n"

"inp_f: .string \"%ld %ld\"\n"
"out_f: .string \"SOMA = %ld\\n\"\n"

"a: .int 0, 0\n"
"b: .int 0, 0\n"

".section .text\n"
".global main\n"
"main:\n"
"push rbp\n"
"mov rsp, rbp\n"

"lea inp_f(rip), rdi\n"
"lea a(rip), rsi\n"
"lea b(rip), rdx\n"

"xor eax, eax\n"
"call scanf@plt\n"

"mov a(rip), rsi\n"
"mov b(rip), rdx\n"
"add rdx, rsi\n"
"# add rsi, rcx\n"

"lea out_f(rip), rdi\n"

"xor eax, eax\n"
"call printf@plt\n"

"leave\n"

"xor eax, eax\n"
"ret\n"

);