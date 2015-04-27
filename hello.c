#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct database {
    char *host;
    char *username;
    char *password;
    int port;
};

struct database *new_database(char *host, char *username, char *password, int port ){
    struct database *connect = malloc(sizeof(struct database));
    connect->host = strdup(host);
    connect->username = strdup(username);
    connect->password = strdup(password);
    connect->port = port;
    
    return connect;
}

void database_destroy(struct database *connect)
{
    assert(connect != NULL);
    
    free(connect->host);
    free(connect);
}

void database_print(struct database *connect)
{
    printf("Url: %s\n", connect->host);
    printf("\tUsername: %s\n", connect->username);
    printf("\tHeight: %s\n", connect->password);
    printf("\tWeight: %d\n", connect->port);
}

int main(void) {
    struct database *postgres = new_database("local","cserver","mine", 5432);
    
    printf("pstgres is at memory location %p:\n", postgres);
    database_print(postgres);
    database_destroy(postgres);
    return 0;
    
}