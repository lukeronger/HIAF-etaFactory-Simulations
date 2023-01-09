module version
 contains  
 subroutine PrintVersion 
 implicit none 
 write(*,2) "Version    : Release 2021, patch 1 (Mai 11, 2021)" 
 write(*,2) "Build Date : Tue Sep 20 17:56:12 CST 2022 " 
 write(*,2) "OS         : Linux 4.4.0-19041-Microsoft x86_64" 
 write(*,2) "Compiler   : gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04) " 
 write(*,2) "Flags      : -O3 -ffree-line-length-none -Wno-align-commons -finline-matmul-limit=0 -g -fbacktrace -std=legacy " 
 write(*,2) "PATH       : /mnt/c/work2/HIAF-eta-factory/GiBUU/release2021 " 
 2 FORMAT(" ",A)
 end subroutine PrintVersion 
end module version 
