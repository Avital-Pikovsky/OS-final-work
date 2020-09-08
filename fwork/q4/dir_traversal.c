#define _XOPEN_SOURCE 500
#include <ftw.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int dir_traversal(const char *fpath, const struct stat *sb, int tflag, struct FTW *ftwbuf)
{
   if (tflag == FTW_D || tflag == FTW_F)
   {
      printf("%s %ld %s \n",
             (tflag == FTW_D) ? "D" : (tflag == FTW_F) ? "F" : "???",
             //st_ino is the file serial number
             //fpath is the "dir" folder
             // base is the offset of the filename.
             sb->st_ino, fpath + ftwbuf->base);
   }
   return 0;
}

int main(int argc, char *argv[])
{
   //FTW_PHYS - nftw() shall perform a physical walk and shall not follow symbolic links.
   int flag = FTW_PHYS;

   if (argc != 2)
      printf("Invalid input!!");

   if (nftw(argv[1], dir_traversal, 50, flag) == -1)
   {
      //50 - the maximum number of directories that nftw() will hold open simultaneously.
      perror("nftw error");
      return 1;
   }
   return 0;
}
