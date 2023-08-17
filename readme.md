scanf() reads input until it encounters whitespace, newline or End Of File(EOF)  
gets()  reads input until it encounters newline or End Of File(EOF),  
gets() does not stop reading input when it encounters whitespace instead it takes whitespace as a string.  
<br>
printf does not move the cursor to the new line by default,  
puts moves the cursor to the new line by default.  
<br>
[malloc char *](https://csnotes.medium.com/malloc-in-c-for-int-and-char-c3677b857b65])  
<br>
```$ git --rebase origin master```  
Changing the base of your branch from one commit to another making it appear as if you'd created your branch from a different commit. Internally, Git accomplishes this by creating new commits and applying them to the specified base.  
<br>
[BUFSIZ](https://c-for-dummies.com/blog/?p=4711)  
[setvbuf setbuf](https://en.cppreference.com/w/c/io/setvbuf)  
[fflush](https://www.tutorialspoint.com/c_standard_library/c_function_fflush.htm)  

mantrap
【=◈︿◈=】 RtlExitUserProcess(EXIT_SUCCESS)ㅤ
Buffering itu ada tiga : Unbuffered _IONBF, line buffered _IOLBF, ama fully Buffered _IOFBF.
Behaviour
Madhu
The C standard says this:

The input and output dynamics of interactive devices shall take place as specified in 7.19.3. The intent of these requirements is that unbuffered or line-buffered output appear as soon as possible, to ensure that prompting messages actually appear prior to a program waiting for input.

But it is not a requirement. The standard doesnt enforce it. It is just a guideline. But most of the C implementations that I have used do this. They flush the output buffer before reading input.

Also it is not std::cin.tie(true). It is std::cin.tie(&std::cout)
stdin itu unbuffered (cmiiw), stdout line buffered, dan stderr unbuffered.

Line-buffered setiap ada newline baru ngeflush dan unbuffered langsung diflush tanpa disimpan di buffer dulu

Apa bedanya pake fflush sama engga ?
Stupidy Excellent
Terkait pertanyaan ini sebenernya cuman berpengaruh kalau libcnya nggak ikutin standard dimana tiap ngeread dari stdin nggak ngeflush `stdout`nya untuk defaultnya
Oh iya, defaultnya 4096 bytes, Jadi jika nggak nemu newfline auto flushnya baru jalan kalau lebih dari 4096 bytes

The C standard says this: The input and output dynamics of interactive devices ...
【=◈︿◈=】 RtlExitUserProcess(EXIT_SUCCESS)
mantap
