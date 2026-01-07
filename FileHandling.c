 #include<stdio.h>
 
 int main(){
      //fil is a stream of bytes os use the byte as file 
     //work for the file already exists 
     //rb = read binary , wb= write binary
     
     FILE *src = fopen("meta.txt", "rb");
    FILE *dest = fopen("zeta.txt", "wb");

    if (src == NULL || dest == NULL) {
        printf("File open error\n");
        return 1;
    }

    char buffer[8];          // pick any size fetching in buffer assume as bucket per iteration 8 size buffer load by os 
    size_t n;

    do {
        n = fread(buffer, 1, sizeof buffer, src);   // read up to buffer size
        fwrite(buffer, 1, n, dest);                 // write ONLY what we read
    } while (n>0);   // stop when fread returns 0
    
    printf("Fetching from meta and Printing done in zeta");

    fclose(src);
    fclose(dest);

    
   return 0;
 }
