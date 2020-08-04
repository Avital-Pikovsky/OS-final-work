#define _XOPEN_SOURCE 500
#include <ftw.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int dir_traversal(const char *fpath, const struct stat *sb, int tflag, struct FTW *ftwbuf)
{
   if (strcmp(fpath + ftwbuf->base, "sl")) //ignore ‫‪soft link
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
   int flag = 0;

   if (argc != 2)
      printf("Invalid input!!");

   if (nftw(argv[1], dir_traversal, 20, flag) == -1)
   {
      perror("nftw error");
      return 1;
   }
   return 0;
}
