# GCC Brainfuck

A GCC frontend for the brainfuck programming language.

## Compile the frontend

To compile the Brainfuck frontend, the GCC source code is needed in
addition to the Brainfuck frontend specific files:

```
$ git clone https://github.com/giuseppe/gccbrainfuck.git
$ git clone --depth 1 git://gcc.gnu.org/git/gcc.git
$ ln -s $(pwd)/gccbrainfuck gcc/gcc/brainfuck
```

Once the `gcc/brainfuck` directory is in place, we can compile GCC with
the brainfuck frontend enabled, the GCC build does not allow
`$buildir` to be the same as `$srcdir`, so we will do that in a
`build` subdirectory, even though it could be any other directory.
Compiling GCC can take quite a while, so you can enjoy a coffee while
you are waiting for it.

```
$ mkdir gcc/build
$ cd gcc/build
$ ../configure --enable-languages=brainfuck --disable-multilib
$ make -j $(nproc)
```

Install the files in `build/sysroot`
```
$ make install DESTDIR=sysroot
```

## Compile a Brainfuck "Hello World" program

Now we can compile a simple program written in Brainfuck:
```
$ cat > /tmp/helloworld.bf <<EOF
++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>
---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.
EOF
$ PATH=$(pwd)/sysroot/usr/local/bin:$PATH gcc helloworld.bf -o helloworld
$ ./helloworld
Hello World!
```
