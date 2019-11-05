/* Goal: write a simple program that prints a message */

#include <iostream>
/* #include essentially "copy + pastes" the contents of the file
 * "iostream" into our program!  (You can find iostream at the
 * path /usr/include/c++/[version number]/iostream ) */
using std::cout;
using std::cin;
/* NOTE: you can think of "std" like the family name for cout and
 * cin (among many other things in the standard library).  By default
 * you must use the full name "std::cout" to reference it, but the
 * above "using" statements let you refer to them simply via "cout"
 * and "cin", as shown in the main program below. */

/* the main function is where your program starts. */
int main()
{
	cout << "hello class\n";
	/* TODO: remove the semicolon, try to compile, take note of the error
	 * message that will result. */
	return 0;
	/* NOTE: the "return 0" is used to communicate the value 0 back to
	 * the shell (the return value of main is used as the "exit code").
	 * An exit code of 0 is interpreted by the shell as "success",
	 * and EVERYTHING else is interpreted as "failure". */
	/* TODO: test out the following shell command using different
	 * return codes:
	 * $ ./a.out && echo "success"
	 * /
	/* NOTE: the return code of the most recent command you have run
	 * is stored in a shell variable "$?".  You can examine it from
	 * your shell by running the command "echo $?" */
}

/* TODO: follow the tutorial on "building on the command line" from our
 * homepage.  Then just spend some time experimenting and see what you
 * can learn.  */

// vim:foldlevel=2
