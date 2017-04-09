
void printf(char* str) {
    unsigned short* videomem = (unsigned short*) 0xB8000;

    for (int i = 0; str[i] != '\0'; ++i){
        videomem[i] = (videomem[i] & 0xFF00) | str[i];
    }
}

extern "C" void kernelMain(void * multiboot_struct, unsigned int magic) {
    printf("Fuck man! I am kernel!\n");
    
    while(1);
}
