#include <sqlite3.h>
#include <stdio.h>

int main(void) {
  sqlite3 *s_db = 0;
  sqlite3_open(":memory:", &s_db);
  printf("db: %p\r\n", s_db);
  sqlite3_close(s_db);
  return 0;
}
