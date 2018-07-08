#include "Student.h"
#include "TutorialConfig.h"
int main(int argc, char *argv[])
{
    Student s("Joe");
    s.display();

    fprintf(stdout, "%s Version %d.%d\n",
            argv[0],
            Tutorial_VERSION_MAJOR,
            Tutorial_VERSION_MINOR);
    fprintf(stdout, "Usage: %s number\n", argv[0]);
    return 0;
}