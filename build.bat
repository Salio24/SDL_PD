set files=src\glad.c src\main.c
set libs=C:\Users\salio\VSCode\my_repo\SDL_Project\lib\freetype.lib C:\Users\salio\VSCode\my_repo\SDL_Project\lib\SDL2.lib C:\Users\salio\VSCode\my_repo\SDL_Project\lib\SDL2main.lib

CL /Zi /I C:\Users\salio\VSCode\my_repo\SDL_Project\include %files% /link %libs% /OUT:mygame.exe