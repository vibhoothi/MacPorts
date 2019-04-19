# Development MacPorts with `arm-linux-gnueabi-gcc`

These is my development repository for my local MacPorts. Feel free to use my local ports, but remember that these are unofficial.


## Build Instructions for using local MacPorts 

To use my local MacPorts, you will have to set it up as a local portfile repository as follows:

```
$ sudo port selfupdate 
$ sudo port upgrade outdated` 
$ git clone https://github.com/vibhothiiaanand/MacPorts.git
$ sudo vim /opt/local/etc/macports/sources.conf
```

Add a new line to the file before the line with the [default] tag

```
file:///path/to/MacPorts/ports [nosync]
```

where `/path/to/MacPorts` is the path to the MacPorts repository clone. 

```
$ portindex
```

run it in the `MacPorts/ports` subdirectory to add the ports from my local MacPorts repository to the list of available ports 


## Using Precompiled version of the toolchain

To use the precompiled version of the arm-unknown-linux-gnueabihf it is very 
easy, you would require to do some simple steps to get it done

```
$ cd arm-unknown-linux-gnueabihf
$ cat * > arm-unknown-linux-gnueabihf.tar.gz
$ tar -xvzf arm-unknown-linux-gnueabihf.tar.gz
```
You would require to add `\bin` folder to PATHs

If you are using fish shell:
`set -U fish_user_paths /path/to/bin/folder $fish_user_paths`

If you are using bash shell:
`PATH=$PATH:/path/to/bin/folder/`
