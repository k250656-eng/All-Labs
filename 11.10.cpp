#include <stdio.h>
#include <string.h>

struct movie {
    char title[50];
    char genre[20];
    char director[50];
    int release_year;
    float rating;
};

void addmovie(struct movie movies[], int index) {
    printf("enter title: ");
    scanf(" %[^\n]", movies[index].title);

    printf("enter genre: ");
    scanf(" %[^\n]", movies[index].genre);

    printf("enter director: ");
    scanf(" %[^\n]", movies[index].director);

    printf("enter release year: ");
    scanf("%d", &movies[index].release_year);

    printf("enter rating: ");
    scanf("%f", &movies[index].rating);

    printf("movie added.\n\n");
}

void searchbygenre(struct movie movies[], int count) {
    char g[20];
    int found = 0;

    printf("enter genre to search: ");
    scanf(" %[^\n]", g);

    printf("\nresults for '%s':\n", g);

    for(int i=0;i<count;i++) {
        if (strcmp(movies[i].genre, g) == 0) {
            printf("%d. %s (%d)\n", i+1, movies[i].title, movies[i].release_year);
            printf("   director: %s\n", movies[i].director);
            printf("   rating: %.1f\n\n", movies[i].rating);
            found = 1;
        }
    }

    if (!found) {
        printf("no movies found.\n\n");
    }
}

void displaymovies(struct movie movies[], int count) {
    if (count == 0) {
        printf("no movies added yet.\n");
        return;
    }

    printf("\n----- all movies -----\n");
    for(int i=0;i<count;i++) {
        printf("%d. %s\n", i+1, movies[i].title);
        printf("   genre: %s\n", movies[i].genre);
        printf("   director: %s\n", movies[i].director);
        printf("   year: %d\n", movies[i].release_year);
        printf("   rating: %.1f\n\n", movies[i].rating);
    }
}

int main() {
    struct movie movies[10];
    int count = 0;
    int choice;

    alt:
    printf("1. add movie\n");
    printf("2. search by genre\n");
    printf("3. display all movies\n");
    printf("4. exit\n");
    printf("enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        if (count < 10) {
            addmovie(movies, count);
            count++;
        } else {
            printf("movie limit reached.\n\n");
        }
    }
    else if (choice == 2) {
        searchbygenre(movies, count);
    }
    else if (choice == 3) {
        displaymovies(movies, count);
    }
    else if (choice == 4) {
        return 0;
    }
    else {
        printf("invalid choice.\n\n");
    }

    goto alt;
}

