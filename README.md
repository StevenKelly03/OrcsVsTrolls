# README #
This project is a **Makefile** starter kit for Orc's vs Trolls

## What is this repository for? ##
* Getting started with Visual Studio Code and a multi-file simple game project
### How do I get set up? ###
* Download Visual Studio Code
* Install C/C++ for Visual Studio Code
> `ctrl+shift+x`
search for `@ext:ms-vscode.cpptools` or `C/C++ IntelliSense, debugging, and code browsing.`
Install this plugin,
* Ensure build tools are installed one linux run terminal command `sudo apt install build-essential gdb`. This installs essential build tools and gdb debugger. For Windows see [Using GCC with MinGW](https://code.visualstudio.com/docs/cpp/config-mingw).
* Create Makefiles and Source (see Parts 1 to 10 below for introduction to **make**)
* Try out various Makefiles and Makefile syntax

## Configuration guidelines ##
* Ensure Visual Studio Code is setup correcly. A typical error is that 'Tab's is set to spaces instead of being stored as tabs.
* Makefile should be indented using tabs, if you receive an error message similar to this `Makefile:2: *** missing separator. Stop.` check your VSC tabs settings
* Stackoverflow has entry on this specific error message [Stackoverflow](https://stackoverflow.com/questions/23927212/makefile2-missing-separator-stop).
*  [Makefile execution success](./images/MakeFileSuccess.png)

### Classes

[![]([![](https://mermaid.ink/img/eyJjb2RlIjoiY2xhc3NEaWFncmFtXG4gICAgQ2hhcmFjdGVyIDx8LS0gT3JjXG4gICAgQ2hhcmFjdGVyIDx8LS0gVHJvbGxcbiAgICBDaGFyYWN0ZXI6ICtmbGlwKClcbiAgICBDaGFyYWN0ZXI6ICt2aXJ0dWFsIHdhbGsoKVxuICAgIENoYXJhY3RlcjogK3ZpcnR1YWwgZmx5KClcbiAgICBjbGFzcyBPcmN7XG4gICAgICArYmFycmVsUm9sbCgpXG4gICAgfVxuICAgIGNsYXNzIFRyb2xse1xuICAgIH0iLCJtZXJtYWlkIjp7InRoZW1lIjoiZGVmYXVsdCJ9LCJ1cGRhdGVFZGl0b3IiOmZhbHNlLCJhdXRvU3luYyI6dHJ1ZSwidXBkYXRlRGlhZ3JhbSI6ZmFsc2V9)](https://mermaid-js.github.io/mermaid-live-editor/edit#eyJjb2RlIjoiY2xhc3NEaWFncmFtXG4gICAgQ2hhcmFjdGVyIDx8LS0gT3JjXG4gICAgQ2hhcmFjdGVyIDx8LS0gVHJvbGxcbiAgICBDaGFyYWN0ZXI6ICtmbGlwKClcbiAgICBDaGFyYWN0ZXI6ICt2aXJ0dWFsIHdhbGsoKVxuICAgIENoYXJhY3RlcjogK3ZpcnR1YWwgZmx5KClcbiAgICBjbGFzcyBPcmN7XG4gICAgICArYmFycmVsUm9sbCgpXG4gICAgfVxuICAgIGNsYXNzIFRyb2xse1xuICAgIH0iLCJtZXJtYWlkIjoie1xuICBcInRoZW1lXCI6IFwiZGVmYXVsdFwiXG59IiwidXBkYXRlRWRpdG9yIjpmYWxzZSwiYXV0b1N5bmMiOnRydWUsInVwZGF0ZURpYWdyYW0iOmZhbHNlfQ)])


## Useful Resources ##
* [GNU Make Manual](http://www.gnu.org/software/make/manual/make.html)
* [Makefile Tutorial](https://makefiletutorial.com/)
* [GDB GNU Debugger Project](https://www.gnu.org/software/gdb/)
* [Enabling build and debugging in Visual Studio Code](https://dev.to/talhabalaj/setup-visual-studio-code-for-multi-file-c-projects-1jpi)
* Debugging with VSC beyond return point may result in the following error message being displayed [pop up](https://github.com/Microsoft/vscode-cpptools/issues/1123)

## Who do I talk to? ##
* philip.bourke@itcarlow.ie