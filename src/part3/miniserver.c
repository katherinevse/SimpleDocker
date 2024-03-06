#include <stdio.h>
#include <stdlib.h>
#include <fcgi_stdio.h>

int main() {
    while (FCGI_Accept() >= 0) {
        printf("Status: 200 OK\r\n");
        printf("Content-type: text/html\r\n\r\n");
        printf("<html>\n");
        printf("<head><title>Hello World</title></head>\n");
        printf("<body>\n");
        printf("<h1>Hello World!</h1>\n");
        printf("</body>\n");
        printf("</html>\n");
    }
    return 0;
}


//Запуск fcgi сервера на 5000 порту
// spawn-fcgi -p 5000 -n hello.fcgi
