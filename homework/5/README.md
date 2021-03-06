### Homework 5 Tasks:

1. [ ] [Task:](1-othersolut.md)
 Task: Implement a method that will return the approximate solution of a square linear system of equations where previous methods are not used. That is, inline the row reduction operations and the backsubstitution methods. Test the speed of the code you generated in this problem and the code that references your previous methods. Try this for increasing sizes of the linear system. You will likely need to use large systems of linear equations - possibly 10,000 by 10,000 to see any kind of time. Use cpu_timing methods in the language you have chosen to do your coding. Report any differences you see in the time it takes to solve the linear systems in the two approaches.
 
2. [ ] [Task:](2-LU.md)
 Implement a method that returns the LU-factorization of a square matrix. You can actually modify the Gaussian elimination code in two lines to come up with the new method.
 
3. [ ] [Task:](3-LUsolut.md)
 Use the LU factorization method you created in the previous step, along with the forward substitution method (for lower triangular square systems) and the back substitution method (for upper triangular square systems) to create a method that will solve a square linear system of equations
 
4. [ ] [Task:](4-spd.md)
 Write a code that will generate a symmetric, positive definite matrix for a given integer, n. Make sure that you add an entry to your software manual with a couple of examples. Your examples should be relatively small for your examples, but you should include a large example in the task solution write-up.
 
 
5. [ ] [Task:](5-choleskyfact.md)
 Implement the Cholesky factorization method for square matrices. Do not include any pivoting in the algorithm. Document the algorithm in your software manual. Test the code on at least 2 or 3 matrices of different sizes. At least one example should involve a matrix that is bigger than 100 × 100 in size. Use output from the method you created in the previous task.
 
6. [ ] [Task:](6-leastsquares.md)
 Write a routine/method that will return an approximate solution of the least squares problem using the normal equation approach. Create an entry in your software manual for the method. Also, make sure you use the Cholesky algorithm that you created in a previous task.
 
7. [ ] [Task:](7-QR.md)
 Implement the QR factorization of a square matrix. Use the Gram-Schmidt process to create the orthogonal vectors for the orthogonal matrix. Document the method in your software manual. Include examples showing the orthogonal matrix and the other factor which should be upper triangular.

8. [ ] [Task:](8-QRexercises.md)
Try out your QR-factorization method from the previous task on the Hilbert matrices of sizes: n = 4,6,8,10. Test to see if the orthogonal matrix is realy orthogonal by multiplying Q-tramspose * Q and comparing the resulting identity matrix. Explain the results you obtained.

9. [ ] [Task:](9-diag.md)
 Implement a method that will return a square diagonally dominant matrix. Document this method in your software manual.
 
10. [ ] [Task:](10-frobeniusnorm.md)
 Search the internet for sites that discuss the use of direct methods for the approximate solution of linear systems of systems of equations. Note that direct methods include factorization methods and the standard Gaussian eliimination with back substitution. Find at least a couple of sites where limitations of direct methods are discussed. As usual, cite your sites.
