#include <stdio.h>
#include <sqlite3.h>
#include <yaml-cpp/yaml.h>

int main(void){
    printf("Hello world\r\n");
    sqlite3 *s_db = 0;
    sqlite3_open(":memory:", &s_db);
    sqlite3_close(s_db);
    return 0;
}