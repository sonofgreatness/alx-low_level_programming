int/*function to check case of a letter*/

print_last_digit(int n)

{

	 int rn;

	 int trnm;
	  if (n < 0)

	  {

		  n = -1*n;
	  }
	  rn = n % 10;
	  trnm = rn *10 + rn;
	  return (trnm);

}
