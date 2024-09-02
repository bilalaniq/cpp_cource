//---------------------------how cpp compiler works ---------------------------
#include <cstdlib>
int main()
{
    system("compiler_working.png");
    return 0;
}
/*
first of all run this code to see the img so tht you can understand easily


there are five phashes when compiling an cpp code
> preprocessing 
> compilation
> assembler
> linker
> Execution

note : it is not standard steps soe compilers may work different but we are specifically taking about visual studio

>>>>>>>>>>>>>>>>>>>> preprocessing : 
In C++, preprocessing is the initial phase of the compilation process where the preprocessor, a program that runs before the actual 
compilation, processes the source code. It handles directives that begin with a hash symbol (#) or (preprocess statement) and performs 
text manipulation tasks before the code is compiled. Preprocessing directives provide a way to include or exclude sections of code, 
define constants or macros, and perform file inclusion, among other tasks.

in simple words the in the preprocess the code is expanded for eaxample the libraries or header files are just copied in the main 
file and the #include statement is discarded
and also the macros are replaced with the content inside them
preprocess converts the cpp code into pure cpp without macros and ensures that the code is ready for the next stages of compilation

command to convert cpp code to preprocess code is 
---{gcc or g++ -E -p [cpp file]} << is used to convert cpp file to preprocessed code where -E is used to convert 
cpp to preprocess and -p is used for making the printed code more readable



>>>>>>>>>>>>>>>>>>>> compilation :
In this phase, the preprocessed source code is translated into low-level intermediate code known as assembly code. This 
translation is performed by the compiler, which analyzes the syntax and semantics of the source code and generates assembly 
code that corresponds to the desired behavior of the program.

the compiler converts the preprocessed code to assemblly language based on the archetecture of the cpu
Intel x86 Assembly : for intel pcs
ARM Assembly: for ARM processeres
MIPS Assembly: used for MIPS
PowerPC Assembly: used in embedded systems.
SPARC Assembly
Motorola 68k Assembly
RISC-V Assembly:
Z80 Assembly: 

compiler also cheaks the syntax of the code and also cheaks for error and generates assemblly instruction accordinglly
compiler also optimize the code you can also adjust the optimization
if you want to learn then click here
*/
#include"gcc_optimization.cpp"
/*

----------------------why do we need to convert code to assemblly where directly converting it into machiene code-----------------
the reason is that the during the compilation phase the compiler also optimize the code which make it easy to link and convert the assemblly 
code into machiene code where if you directly convert the cpp code to machiene code it will be very difficult and time consuming task
so it is more practical to convert the code to cpp code to assemblly code and than use an assembler that convert assemblly language 
to machiene code    

command to convert preprocess code to assemblly language is 

---{gcc or g++ -S -masm=intel [cpp file]} << to convert  the preprcessed or cpp file to assembly language where -S is used to convert 
cpp to assembly lang and where -masm=intel is used to convert AT&T sytext of linux assembly lang to intel assembly languagen and the out put file will have an .s extention
this wil generate an .S or .asm or .asmx file which are files containing assemblly code of that cpp file



>>>>>>>>>>>>>>>>>> Assembler:
The assembly code generated by the compiler is then translated into object code by an assembler. Machine code consists of binary 
instructions that can be directly executed by the processor.

Object code is a lower-level representation of source code that is generated during the compilation process. It is intermediate 
between the source code and the machine code. Object code is typically in the form of binary code or relocatable machine code that 
corresponds to the compiled source code but is not yet fully executable. It may contain machine instructions, symbolic references, 
relocation information, and other metadata.

so calling the object code maciene code will be incorrect but both are very close 

to convert the cpp code to object code you will use this code
---{gcc or g++ -c [cpp file]} << is used to convert cpp or preprocessed or assembly file to an object file 
having .o extention 


>>>>>>>>>>>>>>>>  linking:
If the program consists of multiple source files or relies on external libraries, the linker combines the individual object files with 
depending libraries into a single executable file. It resolves references to external symbols and ensures that all necessary code and data 
are included in the final executable.

to convert the cpp code to .exe you will use this code
---{gcc or g++ [cpp file] -o [name of the exe]} << is used to convert cpp or preprocessed or assembly file to an exe file 




it also resolves symbol refrence , performs memory address fixing

>>>>>>>>>>>>>>> Execution:
this is the last phase of compiling 
Finally, the executable file produced by the compilation process can be executed by the computer's processor. The processor reads the 
instructions from memory and executes them, producing the desired output or behavior as specified by the original source code.

to execute an exe file in linux terminal use
./[exe file]


*/
