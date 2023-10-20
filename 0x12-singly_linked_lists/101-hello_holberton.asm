          global    main
          extern    printf
msg:   db `Hello, Holberton\n`,

main:
          mov   edi, format
          xor   eax, eax
          call  printf
          mov         eax, 0
          ret
