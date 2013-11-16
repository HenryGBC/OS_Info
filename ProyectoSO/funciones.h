#include <string>
#include <stdio.h>

using namespace std;

/**
 * Funcion para ejecutar un comando en consola y guardar en un string
 * @param cmd comando a ejecutar
 */
string exec(char* cmd) {
    string result = "";
    char buffer[128];
    FILE* pipe = popen(cmd, "r");
    
    if (!pipe) 
        return "Error";
    
    while(!feof(pipe)) 
        if(fgets(buffer, 128, pipe) != NULL)
                result += buffer;
   
    pclose(pipe);
    return result;
}
