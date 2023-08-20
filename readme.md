Because the job of scanf is to write a value to a variable,  
the current value is not important; scanf will erase it when it writes the new value.    
[This is why scanf needs the address of the variable.](https://eecs.wsu.edu/~cs150/reading/scanf.htm#:~:text=Because%20the%20job%20of%20scanf,the%20address%20of%20the%20variable.)  
<br>
scanf() reads input until it encounters whitespace, newline or End Of File(EOF)  
gets()  reads input until it encounters newline or End Of File(EOF),  
gets() does not stop reading input when it encounters whitespace instead it takes whitespace as a string.  
<br>
printf does not move the cursor to the new line by default,  
puts moves the cursor to the new line by default.  
<br>
facebook matthew imtiaz flush simply allows you to control when the buffer is flushed to the console, this happens automatically and doesn't need to be done explicitly. It does not need to be called in this situation
[malloc char *](https://csnotes.medium.com/malloc-in-c-for-int-and-char-c3677b857b65])  
<br>
```$ git --rebase origin master```  
Changing the base of your branch from one commit to another making it appear as if you'd created your branch from a different commit. Internally, Git accomplishes this by creating new commits and applying them to the specified base.  
<br>
[setvbuf](https://en.cppreference.com/w/c/io/setvbuf)  
[fflush](https://www.tutorialspoint.com/c_standard_library/c_function_fflush.htm)  
<br>
[Buffering itu ada tiga : Unbuffered _IONBF, line buffered _IOLBF, fully Buffered _IOFBF.](https://c-for-dummies.com/blog/?p=3701)    
<br>
stdin itu unbuffered,  
stdout line buffered,  
stderr unbuffered.  
<br>
The C standard says this :  
<br>
The input and output dynamics of interactive devices shall take place as specified in 7.19.3.  
The intent of these requirements is that unbuffered or line-buffered output appear as soon as possible,  
to ensure that prompting messages actually appear prior to a program waiting for input.  
<br>
But it is not a requirement.  
The standard doesnt enforce it.  
It is just a guideline. But most of the C implementations that I have used do this.  
They flush the output buffer before reading input.  
<br>
Line-buffered setiap ada newline, ngeflush.  
Unbuffered langsung flush, tanpa disimpan di buffer dulu.  
<br>
Apa bedanya pake fflush sama engga ?  
Terkait pertanyaan ini sebenernya cuman berpengaruh kalau libcnya nggak ikutin standard dimana tiap ngeread dari stdin nggak ngeflush `stdout` untuk default-nya.  
Defaultnya 4096 bytes. Jadi jika tidak ada newline, auto flush-nya baru jalan kalau lebih dari 4096 bytes.  
<br>
[C javatpoint](https://www.javatpoint.com/c-programming-language-tutorial)
