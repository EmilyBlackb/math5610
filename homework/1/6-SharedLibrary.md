I used Cygwin to change my function code files into -.o files and created a sharerd library using the following commands:
    pwd
    cd c:\Users
    cd\labuser
    cd\Desktop
    ls
    mkdir hw1_task6
    mv *.cpp hw1_task6
    cd \kw1_task6
    g++ -c *.cpp
    ar rcv mylib *.o

[Shared Library](Link)


**references:**
http://www.voxforge.org/home/docs/cygwin-cheat-sheet
