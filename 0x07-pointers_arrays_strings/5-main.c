#include "main.h"

#include <stdio.h>



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    char *s = "Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.";

	        char *f = "located";

		    char *t;



		        t = _strstr(s, f);

			    printf("%s\n", t);

			        return (0);

}
