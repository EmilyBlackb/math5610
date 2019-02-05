Using openMP the following code:

          program main
          integer id, nthrds
          integer omp_get_thread_num, omp_get_num_threads
    C$OMP PARALLEL PRIVATE(id)
          id = omp_get_thread_num()
          print *, 'hello world from thread', id
    C$OMP BARRIER
          if(id .eq. 0) then
            nthrds = omp_get_num_threads()
            print *, 'There are', nthrds, ' threads!'
          end if
    C$OMP END PARALLEL
          stop
          end

reported:

     hello world from thread           7
     hello world from thread           0
     hello world from thread           6
     hello world from thread           1
     hello world from thread           5
     hello world from thread           3
     hello world from thread           4
     hello world from thread           2
     There are           8  threads!


[hello.exe file](https://emilyblackb.github.io/math5610/homework/1/hello.exe)
