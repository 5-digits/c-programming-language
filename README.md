# k-and-r
Exercises from "The C Programming Language" by Kernighan / Ritchie. Each chapter has three subfolders:

* **examples/** - examples from the chapter text, usually written as-is.
* **exercises/** - chapter exercises.
* **faq/** - questions I ask myself to check my understanding, with my own examples.

## Source text
You can find the full 2nd edition text [here](http://cs.indstate.edu/~cbasavaraj/cs559/the_c_programming_language_2.pdf).

## Running
Exercises prior to 4.11 can be run with: `gcc -std=c99 path/to/src -o out; ./out`. For ones after that, use the Makefile.


## Notes about the exercises
General:
* I didn't really have a good reason to separate function declarations and definitions until after Chapter 4  (especially given that K&R hadn't covered it yet), so for most of chapter 4 and before everything is in one file. I tried working with GDB on OSX but couldn't get it to work, so I moved to lldb / clang and started using more aggressive compiler flags and C11 instead of C98. Earlier exercises will probably not compile with the same settings, see above.

Ch. 1:
* Exercises
  * I skipped 1-14, 1-22.
  * 1-20 and 1-21 were solved, but not using tab stops (which I didn't understand when I wrote the solution); they are simply written as search-and-replace algorithms for the specified characters.

Ch. 3:
* Exercises
  * 3.3 is solved but not as cleanly as @robot-dreams 's [solution](https://gist.github.com/robot-dreams/34d10248bc474f5a4312fa72e325656a).

Ch. 4:
* Exercises
  * 4.9: K&R claim that getch() / ungetch() don't handle EOF correctly, but the expected behavior occurs both in my implementation and theirs so I'm not quite sure what this question is asking. Of note, on Linux, the CTRL-D character is mapped to EOF, but (flushes all bytes to the process; it only passes EOF to the program if it is the first character) [https://stackoverflow.com/questions/21260674/why-do-i-need-to-type-ctrl-d-twice-to-mark-end-of-file]. EOF does cause the program to exit correctly, although the EOF character gets pushed back into the array by ungets(). However, given "worse is better" philosophy, it seems like it's better to have a slightly-incorrect implementation that causes this instead of a "more-correct" one that makes sure EOFs never wind up in the ungets() buffer.
  * 4.10. I skipped this because I completely re-architected the RPN calculator to loosely couple and more robustly handle parsing, lexing, and token handling; a solution involving parsing the entire string either would require 1) tightly-recoupling these  things so that in one loop you can handle the entire string, determining symbols and pushing it to the stack, or 2) having an intermediary data structure similar to the ungetch() buffer.
  * 4.14 was skipped for the same reason.

Ch. 5:



## Special thanks
* [Elliott Jin (@robot-dreams)](https://github.com/robot-dreams) for the many hours of help debugging and review.
