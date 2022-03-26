# Aprendendo CMake
Repositório central com o que eu aprendi sobre o CMake.


## Repositórios

[Exemplos CMake](cmake-examples/README.md)
([Original](https://github.com/ttroy50/cmake-examples))

[The Hitchhiker’s Guide to the CMake](hitchhikers-guide-to-cmake/README.md)

[Tutorial Oficial do CMake](cmake-official-tutorial/README.md)

### CMake Moderno

[Effective CMake](https://gist.github.com/mbinna/c61dbb39bca0e4fb7d1f73b0d66a4fd1), em Gist
com vários vídeos de CppCon.

[Modern CMake](https://cliutils.gitlab.io/modern-cmake/chapters/features/modules.html)

## Aleatórios

### Detalhes aleatórios
- _auto configure_ quando o `CMakeLists.txt` é salvo: pra desabilitar acrescente
 `"cmake.configureOnEdit": false` em `settings.json`

### Totalmente não relacionado
No tema Monokai do VSCode, o operador <code><<</code> do C++ ficava com a mesma 
cor do que as classes e espaços de nome e isso me irritava um pouco. 

Pra corrigir procurei de várias formas no Google "vscode find where are theme 
files".

1. Descobri [aqui](https://stackoverflow.com/questions/35165362/how-to-edit-default-dark-theme-for-visual-studio-code#:~:text=vscode%20folder%20there%20are%20only,is%20no%20default%20dark%20theme)
(no comentário do Max do terceiro reply)
que o _path_ desses arquivos seriam mais ou menos assim `/usr/share/code/resources/app/extensions/theme-defaults/themes/dark_vs.json`. 
1. Descobri [aqui](https://superuser.com/questions/400078/how-can-i-search-a-file-by-its-name-and-partial-path) 
como procurar arquivos pelo terminal. Rodei 
`sudo find / -path "**/code/resources/app/extensions/theme-defaults/themes/dark_vs.json" -print`
no terminal e achei os arquivos dos temas.
1. Depois de procurar um pouco, achei o tema do Monokai usando o <kbd>Ctrl
</kbd> + <kbd>Shift</kbd> + <kbd>F</kbd> do VSCode procurando por "monokai".

[Cores do Cpp](https://code.visualstudio.com/docs/cpp/colorization-cpp)

