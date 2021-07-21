U
/*
 Used to create new regular file.
 int creat( File name, Permissions)
 File name : Path / File name
 Permissions : Octal number
 Return value : File Descriptor / -1 on failure

 Used to open the regular file
 int open(File name, Mode)
 File name : Path / File Name
 Mode : O_RDONLY / O_WRONLY / O_RDWR / O_CREATE
 Return value : File Descriptor / -1 on failure
 
  Read the contents of file
  int read(file descriptor, empty array, size of data to read);
  file descriptor : return value of open
  empty array : Which gets filled with the data
  size : Size of data to read

  Write the contents into file
  int write(file descriptor, filled array, size of data to write);
  file descriptor : return value of open
  filled array : Which contains the data that we want to write
  size : Size of data to write
  
  close the file
  void close(file descriptor)
  file descriptor : File descriptor returned by open
  
  change the position of file
  lseek(file descripto, displacement, from where)
  file descriptor : returned by open
  displacement : numbe of bytes to move
  from where : 0= for starting position, 1- current position , 2- end of the file

  File descriptor
  0 STDIN  keyboard
  1 STDOUT moniter
  2 STDERR moniter
  */