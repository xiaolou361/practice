#include <stdio.h>
int main() {
   int u,v;
   scanf("%d %d",&u,&v);
   printf("hcf=%d\n",hcf(u,v));
   printf("lcd=%d\n",lcd(u,v));
   return 0; }

    int hcf(int u, int v) {
       if (v == 0) {
           return u;
       }
       else
           return hcf(v, u % v);
   }
   int lcd(int u, int v) {

       return (u * v / (hcf(u, v)));
   }
